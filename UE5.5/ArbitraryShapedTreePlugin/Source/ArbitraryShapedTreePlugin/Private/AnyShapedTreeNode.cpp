

#include "AnyShapedTreeNode.h"
#include "AnyShapedTree.h"
#include "StructUtils/InstancedStruct.h"
#include "Engine/Engine.h"


UAnyShapedTreeNode::UAnyShapedTreeNode()
{
	IndexInInfoHelper = -1;
	Recorded = false;
	SourceTree = nullptr;
}

UAnyShapedTreeNode::~UAnyShapedTreeNode()
{
}


FString& UAnyShapedTreeNode::GetCode()
{
	return LHCode;
}

int32 UAnyShapedTreeNode::GetRanking() const
{
	return IndexInInfoHelper;
}


UObject* UAnyShapedTreeNode::GetSelfOuter()
{
	return SelfOuter;
}

bool UAnyShapedTreeNode::GetRecorded() const
{
	return Recorded;
}

FString& UAnyShapedTreeNode::GetExplicitName()
{
	return ExplicitNameOuter;
}

void UAnyShapedTreeNode::SetRecorded(bool Value)
{
	Recorded = Value;
}

void UAnyShapedTreeNode::SetIndexHelper(int32 Index)
{
	IndexInInfoHelper = Index;
}

UAnyShapedTree* UAnyShapedTreeNode::GetSourceTree()
{
	return SourceTree;
}


FTreeNodeDescription& UAnyShapedTreeNode::ObtainSelfCopy()
{
	return SourceTree->GetAlreadyRecorded()[IndexInInfoHelper];
}


FTreeNodeDescription& UAnyShapedTreeNode::ObtainParentCopy()
{
	return SourceTree->GetAlreadyRecorded()[SourceTree->GetAlreadyRecorded()[IndexInInfoHelper].Family.Parent];
}

FTreeNodeDescription& UAnyShapedTreeNode::ObtainAChildCopy(int32 IndexInChildArray)
{
	ensure(IndexInChildArray < SourceTree->GetAlreadyRecorded()[IndexInInfoHelper].Family.Children.Num());
	return SourceTree->GetAlreadyRecorded()[ObtainSelfCopy().Family.Children[IndexInChildArray]];
}


TArray<UAnyShapedTreeNode*> UAnyShapedTreeNode::ObtainAllActivatedChildren()
{
	TArray<UAnyShapedTreeNode*> Result;
	if (!SourceTree)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(
			TEXT("TargetTree Is NULL,File: %s , Function: %s, Line: %d"), TEXT(__FILE__), TEXT(__FUNCTION__), __LINE__));
		UE_LOG(LogTemp, Error, TEXT("TargetTree Is NULL,File: %s , Function: %s, Line: %d"), TEXT(__FILE__), TEXT(__FUNCTION__), __LINE__);
		return Result;
	}

	//DFS
	if (ObtainSelfCopy().DeepLayerOfFamily - ObtainSelfCopy().LayerInTree <= 5 && SourceTree->GetRoot().DeepLayerOfFamily <= 600)
	{
		std::function<void(int32)> f = [&](int32 ParentNode)
			{
				for (auto i : SourceTree->GetAlreadyRecorded()[ParentNode].Family.Children)
				{
					if (SourceTree->GetAlreadyRecorded()[i].Activated)
						Result.Emplace(SourceTree->GetAlreadyRecorded()[i].SourceNode);
					f(i);
				}
			};
		f(IndexInInfoHelper);
		return Result;
	}
	//BFS
	{
		TArray<int32> PipeLine;
		PipeLine.Emplace(IndexInInfoHelper);
		int32 IndexInLine = 0;
		std::function<void(int32)> f = [&](int32 ParentNode)
			{
				for (auto i : SourceTree->GetAlreadyRecorded()[ParentNode].Family.Children)
				{
					PipeLine.Emplace(i);
					if (SourceTree->GetAlreadyRecorded()[i].Activated)
						Result.Emplace(SourceTree->GetAlreadyRecorded()[i].SourceNode);
				}
				IndexInLine++;
			};
		while (IndexInLine != PipeLine.Num())
			f(PipeLine[IndexInLine]);
		return Result;
	}
}


bool UAnyShapedTreeNode::GetActivated()
{
	return  ObtainSelfCopy().Activated;
}

void UAnyShapedTreeNode::SetActivated(bool Value)
{
	ObtainSelfCopy().Activated = Value;
}


bool UAnyShapedTreeNode::ResetSelfInform()
{
	if (SourceTree)
	{
		SourceTree->FindInRecordedForReverse(this);
		return true;
	}
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(
		TEXT("TalentTree Is NULL,File : %s , Line : %d"), TEXT(__FILE__), __LINE__));
	UE_LOG(LogTemp, Error, TEXT("TalentTree Is NULL,File : %s , Line : %d"), TEXT(__FILE__), __LINE__);
	return false;
}

bool UAnyShapedTreeNode::ProcessInformAuto(UAnyShapedTree* TargetTree)
{
	SelfOuter = GetOuter();
	if (SelfOuter)
		ExplicitNameOuter = SelfOuter->GetName();
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(
			TEXT("SelfOuter Is NULL, File: %s, Function: %s, Line: %d"), TEXT(__FILE__), TEXT(__FUNCTION__), __LINE__));
		UE_LOG(LogTemp, Error, TEXT("SelfOuter Is NULL, File: %s, Function: %s, Line: %d"), TEXT(__FILE__), TEXT(__FUNCTION__), __LINE__);
	}
	if (TargetTree)
	{
		SourceTree = TargetTree;
		if (bool AddSuccess = TargetTree->AddNewNodeIntelligent(this); AddSuccess)
			return true;
		if (Recorded)
			ResetSelfInform();
		else
			return false;
		return true;
	}
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(
		TEXT("TalentTree Is NULL,File : %s , Line : %d"), TEXT(__FILE__), __LINE__));
	UE_LOG(LogTemp, Error, TEXT("TalentTree Is NULL,File : %s , Line : %d"), TEXT(__FILE__), __LINE__);
	return false;
}

void UAnyShapedTreeNode::AddExtraStruct(const FInstancedStruct& Extra)
{
	ObtainSelfCopy().ExtraStructInform.Add(Extra);
}












