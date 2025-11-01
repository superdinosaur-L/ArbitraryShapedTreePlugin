// Copyright 2025 RainButterfly. All Rights Reserved.
// Fill out your copyright notice in the Description page of Project Settings.


#include "AnyShapedTree.h"
#include "Engine/Engine.h"
#include "AnyShapedTreeNode.h"
#include <functional>
#include "StructUtils/InstancedStruct.h"

bool StringIsIntegerType(const FString& ResourceString)
{
	bool Result = true;
	int32 Index = 0;
	int32 NumberToDeal = 0;
	if (ResourceString[Index] == '+' || ResourceString[Index] == '-')
		Index++;
	for (; Index < ResourceString.Len(); ++Index)
	{
		if (ResourceString[Index] >= '0' && ResourceString[Index] <= '9')
		{
			NumberToDeal++;
			continue;
		}
		Result = false;
		break;
	}
	if (NumberToDeal == 0)
		Result = false;
	return Result;
}

FTreeNodeDescriptionPtr::FTreeNodeDescriptionPtr()
{
	Parent = -1;
	FamilyRanking = -1;
}

void FTreeNodeDescriptionPtr::operator=(const FTreeNodeDescriptionPtr& other)
{
	Parent = other.Parent;
	Children = other.Children;
	FamilyRanking = other.FamilyRanking;
}

FTreeNodeDescription::FTreeNodeDescription()
{
	Activated = false;
	LHCode = TEXT("");
	NumOfChildHave = 0;
	LayerInTree = -1;
	DeepLayerOfFamily = -1;
	SourceNode = nullptr;
	ExplicitNaming = "";
	IndexInArray = -1;
}

FTreeNodeDescription::FTreeNodeDescription(UAnyShapedTreeNode* source) :FTreeNodeDescription()
{
	this->LHCode = source->GetCode();
	this->SourceNode = source;
	if (source->GetSelfOuter()) [[likely]]
		this->ExplicitNaming = source->GetExplicitName().Append("_Script");
	else [[unlikely]]
		this->ExplicitNaming = TEXT("source's SelfOuter Is NULL");
}

void FTreeNodeDescription::ResetInform(const FTreeNodeDescription& other)//Copy everything except for Source
{
	Activated = other.Activated;
	LHCode = other.LHCode;
	LayerInTree = other.LayerInTree;
	DeepLayerOfFamily = other.DeepLayerOfFamily;
	ExplicitNaming = other.ExplicitNaming;
	Family = other.Family;
	NumOfChildHave = other.NumOfChildHave;
	ExtraStructInform = other.ExtraStructInform;
	SourceNode = nullptr;
	IndexInArray = other.IndexInArray;
}


FTreeNodeDescription::FTreeNodeDescription(const FTreeNodeDescription& other)
{
	ResetInform(other);
}

FTreeNodeDescription::~FTreeNodeDescription() = default;

bool FTreeNodeDescription::operator==(const FTreeNodeDescription& other) const
{
	return  other.LHCode == LHCode;
}

bool FTreeNodeDescription::operator!=(const FTreeNodeDescription& other) const
{
	return !(*this == other);
}


UAnyShapedTree::UAnyShapedTree()
{
	AllowConstruct = true;
	AlreadyRecorded.Emplace();//Create Root Node
	AlreadyRecorded[0].LayerInTree = 0;
	AlreadyRecorded[0].DeepLayerOfFamily = 0;

	AlreadyRecorded[0].ExplicitNaming = "Root_Script";
	AlreadyRecorded[0].Activated = true;//Facilitating activation of the first node connected to the root node
	LastLinkedNode.Emplace(0);
	NumOfTryToConstructedNode = 1;
	NumToClearTimer = 0;
	AllowThrowWarning = true;
}

UAnyShapedTree::~UAnyShapedTree() = default;





int32 UAnyShapedTree::GetDeepLayer() const
{
	return AlreadyRecorded[0].DeepLayerOfFamily;
}

TArray<FTreeNodeDescription>& UAnyShapedTree::GetAlreadyRecorded()
{
	return AlreadyRecorded;
}

FTreeNodeDescription& UAnyShapedTree::GetRoot()
{
	return AlreadyRecorded[0];
}


FString UAnyShapedTree::RemoveSuffix(const FString& LHCode)
{
	FString TargetString;
	int32 LastIndex = LHCode.Len() - 1;
	if (LHCode[LastIndex] == '0' || LHCode[LastIndex] == '1')
		LastIndex -= 1;
	else
	{
		while (LastIndex >= 0 && LHCode[LastIndex] == '2')
			LastIndex--;
	}
	if (LastIndex >= 0)
		TargetString = LHCode.Left(LastIndex + 1);
	else
		TargetString = TEXT("");
	return TargetString;
}

TArray<int32> UAnyShapedTree::FindPotentialChildNodes(int32 TargetNode)
{
	TArray<int32> Potential;
	auto f1 = [this, TargetNode, &Potential](int32 EveChildNode)
		{
			int32 j = 0;
			FString PreFix = RemoveSuffix(AlreadyRecorded[EveChildNode].LHCode);
			for (; j < AlreadyRecorded[TargetNode].LHCode.Len() && j < PreFix.Len(); j++)
			{
				if (AlreadyRecorded[TargetNode].LHCode[j] == PreFix[j])
					continue;
				break;
			}
			if (j == AlreadyRecorded[TargetNode].LHCode.Len())
				Potential.Emplace(EveChildNode);
		};
	for (auto i : WillAwakeNode)
		f1(i);

	return Potential;
}


void UAnyShapedTree::RebuildNodeAndChildrenLayer(int32 TargetNode)//Child To Input
{
	TArray<int32> PathParentToChild1;//Reverse record the journey from the child to the father node
	PathParentToChild1.Emplace(TargetNode);
	auto RefactorLayer = [&](int32 i)
		{
			TArray<int32> PathParentToChild;//Reverse record the journey from the child to the father node
			PathParentToChild.Emplace(TargetNode);
			int32 PreParent = AlreadyRecorded[i].Family.Parent;
			PathParentToChild.Emplace(PreParent);
			while (AlreadyRecorded[PreParent].LayerInTree == -1)
			{
				PreParent = AlreadyRecorded[PreParent].Family.Parent;
				PathParentToChild.Emplace(PreParent);
			}
			//After the above loop ends, FirstWildParent points to the first LayerInTree==-1 node. 
			// PreParent points to the parent node of FirstWildParent (LayerInTree!=-1)
			//Children who only take care of their own path
			for (int32 j = PathParentToChild.Num() - 1; j >= 1; --j)
			{
				AlreadyRecorded[PathParentToChild[j - 1]].LayerInTree = AlreadyRecorded[PathParentToChild[j]].LayerInTree + 1;
			}
			PreParent = i;
			while (PreParent != -1 && AlreadyRecorded[PreParent].DeepLayerOfFamily < AlreadyRecorded[i].LayerInTree)
			{
				AlreadyRecorded[PreParent].DeepLayerOfFamily = AlreadyRecorded[i].LayerInTree;
				PreParent = AlreadyRecorded[PreParent].Family.Parent;
			}
		};



	//When there are potential direct or indirect child nodes that exist but are not connected, the Layer should 
	// be directly interrupted and reset, and the child nodes should be waited for to wake up and reset. 
	// This can reduce the number of resets and speed up the operation
	if (FindPotentialChildNodes(TargetNode).Num() != 0)
		return;
	int32 PreParent = AlreadyRecorded[TargetNode].Family.Parent;
	while (PreParent != -1)
	{
		PathParentToChild1.Emplace(PreParent);
		PreParent = AlreadyRecorded[PreParent].Family.Parent;
	}

	//The first parent node to trace the origin is not the Root node
	if (PathParentToChild1[PathParentToChild1.Num() - 1] != 0)
		return;

	//No potential child nodes
	TArray<int32> MayBeLastLinkedNode;//Store the index of the final leaf node in AlreadyRecorded

	//To prevent finding the last leaf node when the tree is too large, using DFS may cause stack 
	// overflow. Therefore, BFS should be used here
	TArray<int32> Pipe;//The index of nodes with child nodes stored in AlreadyRecorded
	int32 IndexInPipe = 0;//Used for indexing Pipe arrays with subscripts

	std::function<void()> FindLastLinkedNode = [&]()
		{
			if (AlreadyRecorded[Pipe[IndexInPipe]].Family.Children.Num() == 0)
				MayBeLastLinkedNode.Emplace(Pipe[IndexInPipe]);
			else
			{
				for (int32 i : AlreadyRecorded[Pipe[IndexInPipe]].Family.Children)
				{
					Pipe.Emplace(i);
				}
			}
		};
	Pipe.Emplace(TargetNode);

	for (; IndexInPipe < Pipe.Num(); ++IndexInPipe)
		FindLastLinkedNode();

	for (int32 i : MayBeLastLinkedNode)
		RefactorLayer(i);
}



void UAnyShapedTree::DealingWithParent_ChildRelationships(int32 ParentNode, int32 ChildNode)
{
	AlreadyRecorded[ParentNode].Family.Children.Emplace(ChildNode);
	AlreadyRecorded[ParentNode].NumOfChildHave++;
	AlreadyRecorded[ChildNode].Family.FamilyRanking = AlreadyRecorded[ParentNode].Family.Children.Num() - 1;
	AlreadyRecorded[ChildNode].Family.Parent = ParentNode;
	RebuildNodeAndChildrenLayer(ChildNode);
}


bool UAnyShapedTree::EqualLastOneCode(TCHAR ACode, FString& String)
{
	return ACode == String[String.Len() - 1];
}

std::tuple<int32, int32> UAnyShapedTree::TryGuidByLHCode(FString& LHCode)
{
	int32 CurrentNode = 0;
	int32 IndexArrivedDeeply = 0;
	int32 LagPtr = CurrentNode;
	bool AllowContinueNavigation = true;
	int32 NumberOfTow = 0;

	if (LHCode.Len() == 0)
	{
		std::tuple<int32, int32> LinkRoot(0, -1);
		return LinkRoot;
	}

	TCHAR ACode = LHCode[IndexArrivedDeeply];
	for (; IndexArrivedDeeply < LHCode.Len() && AllowContinueNavigation; ++IndexArrivedDeeply)
	{
		LagPtr = CurrentNode;
		ACode = LHCode[IndexArrivedDeeply];
		if (ACode == '0' || ACode == '1')
		{
			for (int32 i : AlreadyRecorded[CurrentNode].Family.Children)
			{
				if (EqualLastOneCode(ACode, AlreadyRecorded[i].LHCode))
				{
					CurrentNode = i;
					break;
				}
			}
			if (LagPtr == CurrentNode)
				AllowContinueNavigation = false;//说明当前节点的所有已经连接的子节点都不包含该路径
			continue;
		}

		{
			while (IndexArrivedDeeply < LHCode.Len() && LHCode[IndexArrivedDeeply] == '2')
			{
				NumberOfTow++;
				IndexArrivedDeeply++;
			}
			IndexArrivedDeeply--;
			for (auto k : AlreadyRecorded[CurrentNode].Family.Children)
			{
				int32 OrigLength = AlreadyRecorded[k].LHCode.Len();
				FString PreStr = RemoveSuffix(AlreadyRecorded[k].LHCode);
				if (OrigLength - PreStr.Len() == NumberOfTow && EqualLastOneCode('2', AlreadyRecorded[k].LHCode))
				{
					CurrentNode = k;
					break;
				}
			}
			if (LagPtr == CurrentNode)
			{
				AllowContinueNavigation = false;
			}
		}
	}

	IndexArrivedDeeply--;//Return from the expected position to the actual position
	if (!AllowContinueNavigation)//It should have stopped immediately, but due to the calculation being judged first and then, an additional calculation was made++
		IndexArrivedDeeply--;
	std::tuple<int32, int32> Result(CurrentNode, IndexArrivedDeeply);
	return Result;
}







void UAnyShapedTree::HandleResourceLHCode(FString& LHCode)
{
	TArray<FString> DecayStringArray;
	LHCode.ParseIntoArray(DecayStringArray, TEXT(" "), true);
	LHCode.Empty();
	for (FString& i : DecayStringArray)
		LHCode.Append(i);
	if (!StringIsIntegerType(LHCode))
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("LHCode is not a integer: ") + LHCode);
		UE_LOG(LogTemp, Error, TEXT("LHCode is not a valid integer: %s"), *LHCode);
		AllowConstruct = false;
		return;
	}
	if (LHCode[0] == '+' || LHCode[0] == '-')
		LHCode.RemoveAt(0);
	if (LHCode.Len() == 0)
	{
		AllowConstruct = false;
		return;
	}
	for (TCHAR i : LHCode)
	{
		if (i != '1' && i != '2' && i != '0') [[unlikely]]
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("LHCode 'Number is Invalid: ") + LHCode);
			UE_LOG(LogTemp, Error, TEXT("LHCode 'Number is Invalid: %s"), *LHCode);
			AllowConstruct = false;
		}
	}
}

//Search for child nodes that have not been connected yet, targeting the situation where the child node 
// comes first and the parent node comes later. Search inside WillAwake
TArray<int32> UAnyShapedTree::FindChildrenNode(int32 Parent)
{
	TArray<int32> Children;
	for (auto i : WillAwakeNode)
	{
		//if (i != -1 && AlreadyRecorded[Parent].LHCode == RemoveSuffix(AlreadyRecorded[i].LHCode))
		if (AlreadyRecorded[Parent].LHCode == RemoveSuffix(AlreadyRecorded[i].LHCode))
			Children.Emplace(i);
	}
	return Children;
}

//Find a suspended parent node, targeting the parent node arriving first and the child node arriving later. 
// Search in LastLinked
int32 UAnyShapedTree::FindParentNode(int32 Child)
{
	int32 Parent = -1;
	FString PrefixString = RemoveSuffix(AlreadyRecorded[Child].LHCode);
	for (auto i : LastLinkedNode)
	{
		if (AlreadyRecorded[i].LHCode == PrefixString)
		{
			Parent = i;
			break;
		}
	}
	return Parent;
}


void UAnyShapedTree::RemoveWillAwake(int32 TargetNode)
{
	int32 i = 0;
	for (; i < WillAwakeNode.Num(); ++i)
	{
		if (WillAwakeNode[i] == TargetNode)
		{
			WillAwakeNode.RemoveAt(i);
			//WillAwakeNode[i] = -1;
			break;
		}
	}
}

void UAnyShapedTree::DealDownwardRelationShip(int32 ParentNode)//Dealing with downward relationships
{
	TArray<int32> Children = FindChildrenNode(ParentNode);
	if (Children.Num() == 0)
	{
		LastLinkedNode.Emplace(ParentNode);//At this point, the value of Parent's LayerInTree is still -1
		return;
	}
	for (auto i : Children)
	{
		DealingWithParent_ChildRelationships(ParentNode, i);
		RemoveWillAwake(i);
	}
}


// Used to check if the same encoding has already been recorded
void UAnyShapedTree::FindInRecordedForCons(UAnyShapedTreeNode* TargetNode)
{
	for (int32 i = 0 ; i < AlreadyRecorded.Num() ; ++i)
	{
		if (AlreadyRecorded[i].LHCode == TargetNode->GetCode())[[unlikely]] // A duplicate node is found
		{
			AllowConstruct = false;
			MayBeRepetitiveNodeName.Emplace(AlreadyRecorded[i].LHCode);
			if (i == NumOfTryToConstructedNode - AlreadyRecorded.Num())[[unlikely]]
			{ 
				NumToClearTimer--;
			}
			auto f = [&]()
			{
				for (auto j : MayBeRepetitiveNodeName)
				{
					GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Red, FString::Printf(
						TEXT("You may have entered the same code: %s, File: %s, Line: %d"), *j, TEXT(__FILE__), __LINE__));
					UE_LOG(LogTemp, Error, TEXT("You may have entered the same code: %s, File: %s, Line: %d"), *j, TEXT(__FILE__), __LINE__);
				}
			};
			if (NumToClearTimer == 0 && i != 0) // When 0 is passed, it automatically jumps to the first for-loop outside this block (i.e., "No duplicate node")
			{
				GetWorld()->GetTimerManager().ClearTimer(ThrowingRepeatedWarnings);
				TargetNode->SetRecorded(true);
				AllowThrowWarning = false;
				return ;
			}
			if (!ThrowingRepeatedWarnings.IsValid())[[unlikely]] // Avoid repeated timer setup for performance
				GetWorld()->GetTimerManager().SetTimer(ThrowingRepeatedWarnings, f, 1, false);
			TargetNode->SetRecorded(true);
			return ;
		}
	}
	if (ThrowingRepeatedWarnings.IsValid()) // No duplicate node
	{
		GetWorld()->GetTimerManager().ClearTimer(ThrowingRepeatedWarnings);
		for (auto j : MayBeRepetitiveNodeName)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(
				TEXT("You may have entered the same code: %s, File: %s, Line: %d"), *j, TEXT(__FILE__), __LINE__));
			UE_LOG(LogTemp, Error, TEXT("You may have entered the same code: %s, File: %s, Line: %d"), *j, TEXT(__FILE__), __LINE__);
		}
	}
}

bool UAnyShapedTree::AddNewNodeIntelligent(UAnyShapedTreeNode* TargetNode)
{
	if (!AllowThrowWarning)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, TEXT("Tree Is OK"));
		for (int32 i = 0 ; i < AlreadyRecorded.Num() ; ++i)
		{
			if (AlreadyRecorded[i].LHCode == TargetNode->GetCode())[[unlikely]]
			{
				TargetNode->SetIndexHelper(i);
				AlreadyRecorded[i].SourceNode = TargetNode;
				return true;
			}
		}
	}
	//The first reason for construction failure is that the target encoding was not written according to the 
	//established rules
	HandleResourceLHCode(TargetNode->GetCode());
	NumOfTryToConstructedNode++;
	//The second reason for construction failure is that the target encoding has already been recorded in the  tree
	FindInRecordedForCons(TargetNode);//If the LastLinkedNode is not modified when setting nodes in reverse from the tree
	if (!AllowConstruct)
		return false;

	FString PrefixString = RemoveSuffix(TargetNode->GetCode());
	auto [LastNode, ArriveIndexDeeply] = TryGuidByLHCode(PrefixString);//Check if the preceding parent node is on the tree
	/*
	UE_LOG(LogTemp, Error, TEXT("Ranking In AlreadyRecorded: %d"), AlreadyRecorded.Num());
	UE_LOG(LogTemp, Error, TEXT("ArriveIndexDeeply: %d"),ArriveIndexDeeply);
	UE_LOG(LogTemp, Error, TEXT("LastNode's LHCode: %s"),*AlreadyRecorded[LastNode].LHCode);
	UE_LOG(LogTemp, Error, TEXT("IndexValue: %d"),ArriveIndexDeeply);
	*/

	//Replace with TreeNodeDescription from below
	int32 IndexInRealRecord = AlreadyRecorded.Emplace(TargetNode);
	TargetNode->SetIndexHelper(IndexInRealRecord);
	AlreadyRecorded[IndexInRealRecord].IndexInArray = IndexInRealRecord;

	//Navigation successful
	if (PrefixString.Len() - 1 == ArriveIndexDeeply)
	{
		DealingWithParent_ChildRelationships(LastNode, IndexInRealRecord);
		if (LastLinkedNode.Find(LastNode) != -1)
			LastLinkedNode.Remove(LastNode);
		DealDownwardRelationShip(IndexInRealRecord);
		NumToClearTimer++;
		/*
		UE_LOG(LogTemp, Error, TEXT("Guid Successfully"));
		UE_LOG(LogTemp,Error, TEXT("    "))
		*/
		return true;
	}

	//Navigation failed
	{
		DealDownwardRelationShip(IndexInRealRecord);
		int32 Parent = FindParentNode(IndexInRealRecord);
		if (Parent != -1)
		{
			DealingWithParent_ChildRelationships(Parent, IndexInRealRecord);
			return true;
		}
		WillAwakeNode.Emplace(IndexInRealRecord);
		NumToClearTimer++;
		/*
		UE_LOG(LogTemp, Error, TEXT("Guid Failed"));
		UE_LOG(LogTemp,Error, TEXT("    "))
		*/
		return true;
	}
}

void UAnyShapedTree::FindInRecordedForReverse(UAnyShapedTreeNode* TargetNode)
{
	if (!TargetNode) [[unlikely]]
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(
			TEXT("UTalentTreeNodePtr Is null,File: %s, Function: %s, Line: %d"), TEXT(__FILE__), TEXT(__FUNCTION__), __LINE__));
		UE_LOG(LogTemp, Error, TEXT("UTalentTreeNodePtr Is null,File: %s, Function: %s, Line: %d"), TEXT(__FILE__), TEXT(__FUNCTION__), __LINE__);
		return;
	}
	int32 m = -1;
	for (auto& i : AlreadyRecorded)
	{
		m++;
		if (i.LHCode == TargetNode->GetCode())
		{
			TargetNode->SetIndexHelper(m);
			i.SourceNode = TargetNode;
			break;
		}
	}
}

TArray<int32> UAnyShapedTree::GetAllActivatedChildrenStruct()
{
	TArray<int32> Result;
	if (GetRoot().DeepLayerOfFamily <= 60)//DFS
	{
		std::function<void(int32)> f = [&](int32 ParentNode)
			{
				for (auto i : AlreadyRecorded[ParentNode].Family.Children)
				{
					if (AlreadyRecorded[i].Activated)
						Result.Emplace(i);
					f(i);
				}
			};
		f(0);
		return Result;
	}
	//BFS
	{
		TArray<int32> PipeLine;
		PipeLine.Emplace(0);
		int32 IndexInLine = 0;
		std::function<void(int32)> f = [&](int32 ParentNode)
			{
				for (auto i : AlreadyRecorded[ParentNode].Family.Children)
				{
					PipeLine.Emplace(i);
					if (AlreadyRecorded[i].Activated)
						Result.Emplace(i);
				}
				IndexInLine++;
			};
		while (IndexInLine != PipeLine.Num())
			f(PipeLine[IndexInLine]);
		return Result;
	}
}


void UAnyShapedTree::ResetTree(const TArray<FTreeNodeDescription>& Target)
{
	for (int32 i = 0; i < Target.Num(); i++)
	{
		if (i >= AlreadyRecorded.Num()) [[likely]]
			AlreadyRecorded.Emplace(Target[i]);
		else [[unlikely]]
			AlreadyRecorded[i].ResetInform(Target[i]);
	}
}

TArray<int32>& UAnyShapedTree::GetLastLinked()
{
	return LastLinkedNode;
}









