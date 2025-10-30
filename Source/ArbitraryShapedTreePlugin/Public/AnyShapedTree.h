// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TimerManager.h"
#include "AnyShapedTree.generated.h"



class UAnyShapedTreeNode;
struct FTreeNodeDescription;
struct FInstancedStruct;


USTRUCT(BlueprintType)
struct FTreeNodeDescriptionPtr
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|DescriptionPtr")
	int32 Parent;

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|DescriptionPtr")
	TArray<int32> Children;

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|DescriptionPtr")
	int32 FamilyRanking;
	FTreeNodeDescriptionPtr();
	void operator=(const FTreeNodeDescriptionPtr& other);
};


/**
@brief Actually, the place where critical data is truly stored
*/
USTRUCT(BlueprintType)
struct FTreeNodeDescription
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|Description")
	bool Activated;

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|Description")
	FString LHCode;

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|Description")
	int32 LayerInTree;

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|Description")
	int32 DeepLayerOfFamily;//What level of the tree is the deepest node in this family

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|Description")
	FString ExplicitNaming;

	void ResetInform(const FTreeNodeDescription& other);

	FTreeNodeDescription();
	FTreeNodeDescription(UAnyShapedTreeNode* source);
	FTreeNodeDescription(const FTreeNodeDescription& other);
	~FTreeNodeDescription();
	bool operator==(const FTreeNodeDescription& other) const;
	bool operator!=(const FTreeNodeDescription& other) const;

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|Description")
	FTreeNodeDescriptionPtr Family;

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|Description")
	int32 NumOfChildHave;

	/*
	Additional structured data types can be added here as needed. The MakeInstancedStruct and 
	GetInstancedStructValue Blueprint nodes can be used to create and access FInstancedStruct variables. 
	However, due to current technical constraints, I am unable to further encapsulate or integrate these two nodes 
	into a more unified Blueprint Workflow.
	*/
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "AnyTree|Description")
	TArray<FInstancedStruct> ExtraStructInform;

	//Point to the source TreeNode object of this replica, 
	// note that the value of this variable will change every time the tree is rebuilt
	UPROPERTY(BlueprintReadOnly, Transient, Category = "AnyTree|Description")
	UAnyShapedTreeNode* SourceNode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AnyTree|Description")
	int32 IndexInArray;
};



/**
 @brief Tree used to store tree nodes,The encoding of the direct child nodes of the Root node should be a 
	value containing a single symbol,such as 0 or 1
@note The initial tree construction may be performance-intensive; please allow sufficient time.
 */
UCLASS(BlueprintType)
class ARBITRARYSHAPEDTREEPLUGIN_API UAnyShapedTree : public UObject
{
	GENERATED_BODY()

public:
	UAnyShapedTree();
	virtual ~UAnyShapedTree() override;
protected:
	TArray<FString> MayBeRepetitiveNodeName;

	
	int32 NumOfTryToConstructedNode;

	FTimerHandle ThrowingRepeatedWarnings;
	int32 NumToClearTimer;
	bool AllowThrowWarning;
public:
	int32 GetDeepLayer() const;

	UFUNCTION(BlueprintPure, Category="Tree")
	TArray<FTreeNodeDescription>& GetAlreadyRecorded();

	//be careful!! It does not return the true Root variable, but rather its avatar (AlreadyAlreadyRecorded [0]). 
	// The avatar was built during the creation of the Tree
	UFUNCTION(BlueprintPure, Category = "AnyTree|Tree", meta = (ToolTip = "be careful!! It does not return the true Root variable, but rather its avatar (AlreadyAlreadyRecorded [0]). The avatar was built during the creation of the Tree"))
	FTreeNodeDescription& GetRoot();

	[[nodiscard]] static FString RemoveSuffix(const FString& LHCode);

	//Search for potential direct and indirect child nodes
	TArray<int32> FindPotentialChildNodes(int32 TargetNode);

	//Reset the LayerInTree values of the current node and its connected child nodes, 
	// while also conveniently setting the DeepLayer value of the Tree
	void RebuildNodeAndChildrenLayer(int32 TargetNode);

	void DealingWithParent_ChildRelationships(int32 ParentNode, int32 ChildNode);

	void DealDownwardRelationShip(int32 ParentNode);

	[[nodiscard]] bool EqualLastOneCode(TCHAR ACode, FString& String);

	[[nodiscard]] std::tuple<int32, int32> TryGuidByLHCode(FString& LHCode);

	void HandleResourceLHCode(FString& LHCode);

	[[nodiscard]] TArray<int32> FindChildrenNode(int32 Parent);

	[[nodiscard]] int32 FindParentNode(int32 Child);

	void RemoveWillAwake(int32 TargetNode);

	//Used to check if the same encoding has already been recorded
	void FindInRecordedForCons(UAnyShapedTreeNode* TargetNode);

	//The encoding of the direct child nodes of the Root node should be a value containing a single symbol, 
	// such as 0 or 1
	bool AddNewNodeIntelligent(UAnyShapedTreeNode* TargetNode);

	void FindInRecordedForReverse(UAnyShapedTreeNode* TargetNode);

	UFUNCTION(BlueprintPure, Category = "AnyTree|Tree")
	TArray<int32> GetAllActivatedChildrenStruct();

	//When retrieving a TArray<FTreeNodeScript> from a save file or other source, you can conveniently call
	// this function to reconstruct the tree.
	UFUNCTION(BlueprintCallable, Category = "AnyTree|Tree")
	void ResetTree(const TArray<FTreeNodeDescription>& Target);

	TArray<int32>& GetLastLinked();
protected:
	TArray<int32> WillAwakeNode;

	TArray<int32> LastLinkedNode;

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|Tree")
	TArray<FTreeNodeDescription> AlreadyRecorded;

	bool AllowConstruct;


};

