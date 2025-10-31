// Copyright 2025 RainButterfly. All Rights Reserved.
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnyShapedTreeNode.generated.h"



struct FTreeNodeDescription;
struct FInstancedStruct;
class UAnyShapedTree;

UCLASS(BlueprintType)
class ARBITRARYSHAPEDTREEPLUGIN_API UAnyShapedTreeNode : public UObject
{
	GENERATED_BODY()
public:
	UAnyShapedTreeNode();
	virtual ~UAnyShapedTreeNode() override;

	UObject* GetSelfOuter();
	FString& GetCode();
	int32 GetRanking() const;
	bool GetRecorded() const;
	FString& GetExplicitName();
	void SetRecorded(bool Value);
	void SetIndexHelper(int32 Index);

	UFUNCTION(BlueprintPure, Category = "AnyTree|TreeNode")
	UAnyShapedTree* GetSourceTree();

	UFUNCTION(BlueprintPure, Category = "AnyTree|TreeNode")
	FTreeNodeDescription& ObtainSelfCopy();

	UFUNCTION(BlueprintPure, meta = (ToolTip = "Allow To Mod Parent Effectively"), Category = "AnyTree|TreeNode")
	FTreeNodeDescription& ObtainParentCopy();

	UFUNCTION(BlueprintPure, meta = (ToolTip = "Allow To Mod A Certain Children Effectively"), Category = "AnyTree|TreeNode")
	FTreeNodeDescription& ObtainAChildCopy(int32 IndexInChildArray);

	//Retrieve all activated TalentTreeNode child nodes (excluding itself)
	UFUNCTION(BlueprintPure, meta = (ToolTip = "Retrieve all activated TalentTreeNode child nodes (excluding itself)"), Category = "AnyTree|TreeNode")
	TArray<UAnyShapedTreeNode*> ObtainAllActivatedChildren();

	UFUNCTION(BlueprintPure, Category = "AnyTree|TreeNode")
	bool GetActivated();

	UFUNCTION(BlueprintCallable, Category = "AnyTree|TreeNode")
	void SetActivated(bool Value);

	//When creating an object of this class for the second time, if the backup data of the object has already 
	// been recorded in the tree, call this function to restore its own data from the backup data
	UFUNCTION(BlueprintCallable, Category = "AnyTree|TreeNode", meta = (ToolTip = "When creating an object of this class for the second time, if the backup data of the object has already been recorded in the tree, call this function to restore its own data from the backup data"))
	bool ResetSelfInform();

	UFUNCTION(BlueprintCallable, Category = "AnyTree|TreeNode")
	bool ProcessInformAuto(UAnyShapedTree* TargetTree);

	UFUNCTION(BlueprintCallable, Category = "AnyTree|TreeNode")
	void AddExtraStruct(const FInstancedStruct& Extra);


protected:

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|TreeNode", meta = (ToolTip = "When the same encoding has already been recorded, this property will be set to true"))
	bool Recorded;//Used to determine whether the same encoding has already been recorded

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|TreeNode")
	int32 IndexInInfoHelper;//As a copy of Index in AlReadyRecorded

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnyTree|TreeNode")
	FString LHCode{ "" };

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|TreeNode")
	UObject* SelfOuter;

	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|TreeNode")
	FString ExplicitNameOuter;

	//Automatically set during ProcessInformAuto to indicate which tree this node belongs to
	UPROPERTY(BlueprintReadOnly, Category = "AnyTree|TreeNode")
	UAnyShapedTree* SourceTree;


};



