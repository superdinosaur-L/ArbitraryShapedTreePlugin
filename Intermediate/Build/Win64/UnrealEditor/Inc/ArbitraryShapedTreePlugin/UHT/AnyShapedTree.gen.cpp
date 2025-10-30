// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArbitraryShapedTreePlugin/Public/AnyShapedTree.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnyShapedTree() {}

// Begin Cross Module References
ARBITRARYSHAPEDTREEPLUGIN_API UClass* Z_Construct_UClass_UAnyShapedTree();
ARBITRARYSHAPEDTREEPLUGIN_API UClass* Z_Construct_UClass_UAnyShapedTree_NoRegister();
ARBITRARYSHAPEDTREEPLUGIN_API UClass* Z_Construct_UClass_UAnyShapedTreeNode_NoRegister();
ARBITRARYSHAPEDTREEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTreeNodeDescription();
ARBITRARYSHAPEDTREEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_ArbitraryShapedTreePlugin();
// End Cross Module References

// Begin ScriptStruct FTreeNodeDescriptionPtr
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TreeNodeDescriptionPtr;
class UScriptStruct* FTreeNodeDescriptionPtr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TreeNodeDescriptionPtr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TreeNodeDescriptionPtr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr, (UObject*)Z_Construct_UPackage__Script_ArbitraryShapedTreePlugin(), TEXT("TreeNodeDescriptionPtr"));
	}
	return Z_Registration_Info_UScriptStruct_TreeNodeDescriptionPtr.OuterSingleton;
}
template<> ARBITRARYSHAPEDTREEPLUGIN_API UScriptStruct* StaticStruct<FTreeNodeDescriptionPtr>()
{
	return FTreeNodeDescriptionPtr::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "AnyTree|DescriptionPtr" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Category", "AnyTree|DescriptionPtr" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FamilyRanking_MetaData[] = {
		{ "Category", "AnyTree|DescriptionPtr" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FamilyRanking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTreeNodeDescriptionPtr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescriptionPtr, Parent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescriptionPtr, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::NewProp_FamilyRanking = { "FamilyRanking", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescriptionPtr, FamilyRanking), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FamilyRanking_MetaData), NewProp_FamilyRanking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::NewProp_Children,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::NewProp_FamilyRanking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArbitraryShapedTreePlugin,
	nullptr,
	&NewStructOps,
	"TreeNodeDescriptionPtr",
	Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::PropPointers),
	sizeof(FTreeNodeDescriptionPtr),
	alignof(FTreeNodeDescriptionPtr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr()
{
	if (!Z_Registration_Info_UScriptStruct_TreeNodeDescriptionPtr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TreeNodeDescriptionPtr.InnerSingleton, Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TreeNodeDescriptionPtr.InnerSingleton;
}
// End ScriptStruct FTreeNodeDescriptionPtr

// Begin ScriptStruct FTreeNodeDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TreeNodeDescription;
class UScriptStruct* FTreeNodeDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TreeNodeDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TreeNodeDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTreeNodeDescription, (UObject*)Z_Construct_UPackage__Script_ArbitraryShapedTreePlugin(), TEXT("TreeNodeDescription"));
	}
	return Z_Registration_Info_UScriptStruct_TreeNodeDescription.OuterSingleton;
}
template<> ARBITRARYSHAPEDTREEPLUGIN_API UScriptStruct* StaticStruct<FTreeNodeDescription>()
{
	return FTreeNodeDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTreeNodeDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n@brief Actually, the place where critical data is truly stored\n*/" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
		{ "ToolTip", "@brief Actually, the place where critical data is truly stored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Activated_MetaData[] = {
		{ "Category", "AnyTree|Description" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LHCode_MetaData[] = {
		{ "Category", "AnyTree|Description" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInTree_MetaData[] = {
		{ "Category", "AnyTree|Description" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeepLayerOfFamily_MetaData[] = {
		{ "Category", "AnyTree|Description" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitNaming_MetaData[] = {
		{ "Category", "AnyTree|Description" },
		{ "Comment", "//What level of the tree is the deepest node in this family\n" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
		{ "ToolTip", "What level of the tree is the deepest node in this family" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Family_MetaData[] = {
		{ "Category", "AnyTree|Description" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfChildHave_MetaData[] = {
		{ "Category", "AnyTree|Description" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraStructInform_MetaData[] = {
		{ "Category", "AnyTree|Description" },
		{ "Comment", "/*\n\x09""Additional structured data types can be added here as needed. The MakeInstancedStruct and \n\x09GetInstancedStructValue Blueprint nodes can be used to create and access FInstancedStruct variables. \n\x09However, due to current technical constraints, I am unable to further encapsulate or integrate these two nodes \n\x09into a more unified Blueprint Workflow.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
		{ "ToolTip", "Additional structured data types can be added here as needed. The MakeInstancedStruct and\nGetInstancedStructValue Blueprint nodes can be used to create and access FInstancedStruct variables.\nHowever, due to current technical constraints, I am unable to further encapsulate or integrate these two nodes\ninto a more unified Blueprint Workflow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[] = {
		{ "Category", "AnyTree|Description" },
		{ "Comment", "//Point to the source TreeNode object of this replica, \n// note that the value of this variable will change every time the tree is rebuilt\n" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
		{ "ToolTip", "Point to the source TreeNode object of this replica,\n note that the value of this variable will change every time the tree is rebuilt" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexInArray_MetaData[] = {
		{ "Category", "AnyTree|Description" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Activated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Activated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LHCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerInTree;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeepLayerOfFamily;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExplicitNaming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Family;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfChildHave;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraStructInform_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraStructInform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceNode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTreeNodeDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_Activated_SetBit(void* Obj)
{
	((FTreeNodeDescription*)Obj)->Activated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_Activated = { "Activated", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTreeNodeDescription), &Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_Activated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Activated_MetaData), NewProp_Activated_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_LHCode = { "LHCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescription, LHCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LHCode_MetaData), NewProp_LHCode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_LayerInTree = { "LayerInTree", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescription, LayerInTree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInTree_MetaData), NewProp_LayerInTree_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_DeepLayerOfFamily = { "DeepLayerOfFamily", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescription, DeepLayerOfFamily), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeepLayerOfFamily_MetaData), NewProp_DeepLayerOfFamily_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_ExplicitNaming = { "ExplicitNaming", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescription, ExplicitNaming), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitNaming_MetaData), NewProp_ExplicitNaming_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_Family = { "Family", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescription, Family), Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Family_MetaData), NewProp_Family_MetaData) }; // 132805275
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_NumOfChildHave = { "NumOfChildHave", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescription, NumOfChildHave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfChildHave_MetaData), NewProp_NumOfChildHave_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_ExtraStructInform_Inner = { "ExtraStructInform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 111383296
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_ExtraStructInform = { "ExtraStructInform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescription, ExtraStructInform), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraStructInform_MetaData), NewProp_ExtraStructInform_MetaData) }; // 111383296
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_SourceNode = { "SourceNode", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescription, SourceNode), Z_Construct_UClass_UAnyShapedTreeNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceNode_MetaData), NewProp_SourceNode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_IndexInArray = { "IndexInArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreeNodeDescription, IndexInArray), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexInArray_MetaData), NewProp_IndexInArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_Activated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_LHCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_LayerInTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_DeepLayerOfFamily,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_ExplicitNaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_Family,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_NumOfChildHave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_ExtraStructInform_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_ExtraStructInform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_SourceNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewProp_IndexInArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArbitraryShapedTreePlugin,
	nullptr,
	&NewStructOps,
	"TreeNodeDescription",
	Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::PropPointers),
	sizeof(FTreeNodeDescription),
	alignof(FTreeNodeDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTreeNodeDescription()
{
	if (!Z_Registration_Info_UScriptStruct_TreeNodeDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TreeNodeDescription.InnerSingleton, Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TreeNodeDescription.InnerSingleton;
}
// End ScriptStruct FTreeNodeDescription

// Begin Class UAnyShapedTree Function GetAllActivatedChildrenStruct
struct Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics
{
	struct AnyShapedTree_eventGetAllActivatedChildrenStruct_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|Tree" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTree_eventGetAllActivatedChildrenStruct_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTree, nullptr, "GetAllActivatedChildrenStruct", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::AnyShapedTree_eventGetAllActivatedChildrenStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::AnyShapedTree_eventGetAllActivatedChildrenStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTree::execGetAllActivatedChildrenStruct)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetAllActivatedChildrenStruct();
	P_NATIVE_END;
}
// End Class UAnyShapedTree Function GetAllActivatedChildrenStruct

// Begin Class UAnyShapedTree Function GetAlreadyRecorded
struct Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics
{
	struct AnyShapedTree_eventGetAlreadyRecorded_Parms
	{
		TArray<FTreeNodeDescription> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTreeNodeDescription, METADATA_PARAMS(0, nullptr) }; // 1080548668
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTree_eventGetAlreadyRecorded_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1080548668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTree, nullptr, "GetAlreadyRecorded", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::AnyShapedTree_eventGetAlreadyRecorded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::AnyShapedTree_eventGetAlreadyRecorded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTree::execGetAlreadyRecorded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FTreeNodeDescription>*)Z_Param__Result=P_THIS->GetAlreadyRecorded();
	P_NATIVE_END;
}
// End Class UAnyShapedTree Function GetAlreadyRecorded

// Begin Class UAnyShapedTree Function GetRoot
struct Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics
{
	struct AnyShapedTree_eventGetRoot_Parms
	{
		FTreeNodeDescription ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|Tree" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
		{ "ToolTip", "be careful!! It does not return the true Root variable, but rather its avatar (AlreadyAlreadyRecorded [0]). The avatar was built during the creation of the Tree" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTree_eventGetRoot_Parms, ReturnValue), Z_Construct_UScriptStruct_FTreeNodeDescription, METADATA_PARAMS(0, nullptr) }; // 1080548668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTree, nullptr, "GetRoot", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::AnyShapedTree_eventGetRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::AnyShapedTree_eventGetRoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTree_GetRoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTree_GetRoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTree::execGetRoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTreeNodeDescription*)Z_Param__Result=P_THIS->GetRoot();
	P_NATIVE_END;
}
// End Class UAnyShapedTree Function GetRoot

// Begin Class UAnyShapedTree Function ResetTree
struct Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics
{
	struct AnyShapedTree_eventResetTree_Parms
	{
		TArray<FTreeNodeDescription> Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|Tree" },
		{ "Comment", "//When retrieving a TArray<FTreeNodeScript> from a save file or other source, you can conveniently call\n// this function to reconstruct the tree.\n" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
		{ "ToolTip", "When retrieving a TArray<FTreeNodeScript> from a save file or other source, you can conveniently call\n this function to reconstruct the tree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::NewProp_Target_Inner = { "Target", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTreeNodeDescription, METADATA_PARAMS(0, nullptr) }; // 1080548668
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTree_eventResetTree_Parms, Target), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 1080548668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::NewProp_Target_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTree, nullptr, "ResetTree", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::AnyShapedTree_eventResetTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::AnyShapedTree_eventResetTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTree_ResetTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTree_ResetTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTree::execResetTree)
{
	P_GET_TARRAY_REF(FTreeNodeDescription,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetTree(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UAnyShapedTree Function ResetTree

// Begin Class UAnyShapedTree
void UAnyShapedTree::StaticRegisterNativesUAnyShapedTree()
{
	UClass* Class = UAnyShapedTree::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllActivatedChildrenStruct", &UAnyShapedTree::execGetAllActivatedChildrenStruct },
		{ "GetAlreadyRecorded", &UAnyShapedTree::execGetAlreadyRecorded },
		{ "GetRoot", &UAnyShapedTree::execGetRoot },
		{ "ResetTree", &UAnyShapedTree::execResetTree },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnyShapedTree);
UClass* Z_Construct_UClass_UAnyShapedTree_NoRegister()
{
	return UAnyShapedTree::StaticClass();
}
struct Z_Construct_UClass_UAnyShapedTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n @brief Tree used to store tree nodes,The encoding of the direct child nodes of the Root node should be a \n\x09value containing a single symbol,such as 0 or 1\n@note The initial tree construction may be performance-intensive; please allow sufficient time.\n */" },
		{ "IncludePath", "AnyShapedTree.h" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
		{ "ToolTip", "@brief Tree used to store tree nodes,The encoding of the direct child nodes of the Root node should be a\n      value containing a single symbol,such as 0 or 1\n@note The initial tree construction may be performance-intensive; please allow sufficient time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlreadyRecorded_MetaData[] = {
		{ "Category", "AnyTree|Tree" },
		{ "ModuleRelativePath", "Public/AnyShapedTree.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlreadyRecorded_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AlreadyRecorded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnyShapedTree_GetAllActivatedChildrenStruct, "GetAllActivatedChildrenStruct" }, // 3619234735
		{ &Z_Construct_UFunction_UAnyShapedTree_GetAlreadyRecorded, "GetAlreadyRecorded" }, // 3481270103
		{ &Z_Construct_UFunction_UAnyShapedTree_GetRoot, "GetRoot" }, // 4075382078
		{ &Z_Construct_UFunction_UAnyShapedTree_ResetTree, "ResetTree" }, // 3070910873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnyShapedTree>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnyShapedTree_Statics::NewProp_AlreadyRecorded_Inner = { "AlreadyRecorded", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTreeNodeDescription, METADATA_PARAMS(0, nullptr) }; // 1080548668
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnyShapedTree_Statics::NewProp_AlreadyRecorded = { "AlreadyRecorded", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnyShapedTree, AlreadyRecorded), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlreadyRecorded_MetaData), NewProp_AlreadyRecorded_MetaData) }; // 1080548668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnyShapedTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnyShapedTree_Statics::NewProp_AlreadyRecorded_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnyShapedTree_Statics::NewProp_AlreadyRecorded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnyShapedTree_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnyShapedTree_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArbitraryShapedTreePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnyShapedTree_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnyShapedTree_Statics::ClassParams = {
	&UAnyShapedTree::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnyShapedTree_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnyShapedTree_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnyShapedTree_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnyShapedTree_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnyShapedTree()
{
	if (!Z_Registration_Info_UClass_UAnyShapedTree.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnyShapedTree.OuterSingleton, Z_Construct_UClass_UAnyShapedTree_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnyShapedTree.OuterSingleton;
}
template<> ARBITRARYSHAPEDTREEPLUGIN_API UClass* StaticClass<UAnyShapedTree>()
{
	return UAnyShapedTree::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnyShapedTree);
// End Class UAnyShapedTree

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTreeNodeDescriptionPtr::StaticStruct, Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics::NewStructOps, TEXT("TreeNodeDescriptionPtr"), &Z_Registration_Info_UScriptStruct_TreeNodeDescriptionPtr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTreeNodeDescriptionPtr), 132805275U) },
		{ FTreeNodeDescription::StaticStruct, Z_Construct_UScriptStruct_FTreeNodeDescription_Statics::NewStructOps, TEXT("TreeNodeDescription"), &Z_Registration_Info_UScriptStruct_TreeNodeDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTreeNodeDescription), 1080548668U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnyShapedTree, UAnyShapedTree::StaticClass, TEXT("UAnyShapedTree"), &Z_Registration_Info_UClass_UAnyShapedTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnyShapedTree), 2215718560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_219587996(TEXT("/Script/ArbitraryShapedTreePlugin"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
