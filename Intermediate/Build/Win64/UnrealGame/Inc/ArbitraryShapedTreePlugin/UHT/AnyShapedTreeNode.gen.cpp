// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArbitraryShapedTreePlugin/Public/AnyShapedTreeNode.h"
#include "ArbitraryShapedTreePlugin/Public/AnyShapedTree.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnyShapedTreeNode() {}

// Begin Cross Module References
ARBITRARYSHAPEDTREEPLUGIN_API UClass* Z_Construct_UClass_UAnyShapedTree_NoRegister();
ARBITRARYSHAPEDTREEPLUGIN_API UClass* Z_Construct_UClass_UAnyShapedTreeNode();
ARBITRARYSHAPEDTREEPLUGIN_API UClass* Z_Construct_UClass_UAnyShapedTreeNode_NoRegister();
ARBITRARYSHAPEDTREEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTreeNodeDescription();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_ArbitraryShapedTreePlugin();
// End Cross Module References

// Begin Class UAnyShapedTreeNode Function AddExtraStruct
struct Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics
{
	struct AnyShapedTreeNode_eventAddExtraStruct_Parms
	{
		FInstancedStruct Extra;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extra_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extra;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::NewProp_Extra = { "Extra", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTreeNode_eventAddExtraStruct_Parms, Extra), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extra_MetaData), NewProp_Extra_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::NewProp_Extra,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTreeNode, nullptr, "AddExtraStruct", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::AnyShapedTreeNode_eventAddExtraStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::AnyShapedTreeNode_eventAddExtraStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTreeNode::execAddExtraStruct)
{
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_Extra);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddExtraStruct(Z_Param_Out_Extra);
	P_NATIVE_END;
}
// End Class UAnyShapedTreeNode Function AddExtraStruct

// Begin Class UAnyShapedTreeNode Function GetActivated
struct Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics
{
	struct AnyShapedTreeNode_eventGetActivated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnyShapedTreeNode_eventGetActivated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnyShapedTreeNode_eventGetActivated_Parms), &Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTreeNode, nullptr, "GetActivated", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::AnyShapedTreeNode_eventGetActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::AnyShapedTreeNode_eventGetActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTreeNode::execGetActivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetActivated();
	P_NATIVE_END;
}
// End Class UAnyShapedTreeNode Function GetActivated

// Begin Class UAnyShapedTreeNode Function GetSourceTree
struct Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics
{
	struct AnyShapedTreeNode_eventGetSourceTree_Parms
	{
		UAnyShapedTree* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTreeNode_eventGetSourceTree_Parms, ReturnValue), Z_Construct_UClass_UAnyShapedTree_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTreeNode, nullptr, "GetSourceTree", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::AnyShapedTreeNode_eventGetSourceTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::AnyShapedTreeNode_eventGetSourceTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTreeNode::execGetSourceTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnyShapedTree**)Z_Param__Result=P_THIS->GetSourceTree();
	P_NATIVE_END;
}
// End Class UAnyShapedTreeNode Function GetSourceTree

// Begin Class UAnyShapedTreeNode Function ObtainAChildCopy
struct Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics
{
	struct AnyShapedTreeNode_eventObtainAChildCopy_Parms
	{
		int32 IndexInChildArray;
		FTreeNodeDescription ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
		{ "ToolTip", "Allow To Mod A Certain Children Effectively" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInChildArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::NewProp_IndexInChildArray = { "IndexInChildArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTreeNode_eventObtainAChildCopy_Parms, IndexInChildArray), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTreeNode_eventObtainAChildCopy_Parms, ReturnValue), Z_Construct_UScriptStruct_FTreeNodeDescription, METADATA_PARAMS(0, nullptr) }; // 1080548668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::NewProp_IndexInChildArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTreeNode, nullptr, "ObtainAChildCopy", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::AnyShapedTreeNode_eventObtainAChildCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::AnyShapedTreeNode_eventObtainAChildCopy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTreeNode::execObtainAChildCopy)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInChildArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTreeNodeDescription*)Z_Param__Result=P_THIS->ObtainAChildCopy(Z_Param_IndexInChildArray);
	P_NATIVE_END;
}
// End Class UAnyShapedTreeNode Function ObtainAChildCopy

// Begin Class UAnyShapedTreeNode Function ObtainAllActivatedChildren
struct Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics
{
	struct AnyShapedTreeNode_eventObtainAllActivatedChildren_Parms
	{
		TArray<UAnyShapedTreeNode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
		{ "ToolTip", "Retrieve all activated TalentTreeNode child nodes (excluding itself)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnyShapedTreeNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTreeNode_eventObtainAllActivatedChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTreeNode, nullptr, "ObtainAllActivatedChildren", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::AnyShapedTreeNode_eventObtainAllActivatedChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::AnyShapedTreeNode_eventObtainAllActivatedChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTreeNode::execObtainAllActivatedChildren)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAnyShapedTreeNode*>*)Z_Param__Result=P_THIS->ObtainAllActivatedChildren();
	P_NATIVE_END;
}
// End Class UAnyShapedTreeNode Function ObtainAllActivatedChildren

// Begin Class UAnyShapedTreeNode Function ObtainParentCopy
struct Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics
{
	struct AnyShapedTreeNode_eventObtainParentCopy_Parms
	{
		FTreeNodeDescription ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
		{ "ToolTip", "Allow To Mod Parent Effectively" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTreeNode_eventObtainParentCopy_Parms, ReturnValue), Z_Construct_UScriptStruct_FTreeNodeDescription, METADATA_PARAMS(0, nullptr) }; // 1080548668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTreeNode, nullptr, "ObtainParentCopy", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::AnyShapedTreeNode_eventObtainParentCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::AnyShapedTreeNode_eventObtainParentCopy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTreeNode::execObtainParentCopy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTreeNodeDescription*)Z_Param__Result=P_THIS->ObtainParentCopy();
	P_NATIVE_END;
}
// End Class UAnyShapedTreeNode Function ObtainParentCopy

// Begin Class UAnyShapedTreeNode Function ObtainSelfCopy
struct Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics
{
	struct AnyShapedTreeNode_eventObtainSelfCopy_Parms
	{
		FTreeNodeDescription ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTreeNode_eventObtainSelfCopy_Parms, ReturnValue), Z_Construct_UScriptStruct_FTreeNodeDescription, METADATA_PARAMS(0, nullptr) }; // 1080548668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTreeNode, nullptr, "ObtainSelfCopy", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::AnyShapedTreeNode_eventObtainSelfCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::AnyShapedTreeNode_eventObtainSelfCopy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTreeNode::execObtainSelfCopy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTreeNodeDescription*)Z_Param__Result=P_THIS->ObtainSelfCopy();
	P_NATIVE_END;
}
// End Class UAnyShapedTreeNode Function ObtainSelfCopy

// Begin Class UAnyShapedTreeNode Function ProcessInformAuto
struct Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics
{
	struct AnyShapedTreeNode_eventProcessInformAuto_Parms
	{
		UAnyShapedTree* TargetTree;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetTree;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::NewProp_TargetTree = { "TargetTree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnyShapedTreeNode_eventProcessInformAuto_Parms, TargetTree), Z_Construct_UClass_UAnyShapedTree_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnyShapedTreeNode_eventProcessInformAuto_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnyShapedTreeNode_eventProcessInformAuto_Parms), &Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::NewProp_TargetTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTreeNode, nullptr, "ProcessInformAuto", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::AnyShapedTreeNode_eventProcessInformAuto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::AnyShapedTreeNode_eventProcessInformAuto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTreeNode::execProcessInformAuto)
{
	P_GET_OBJECT(UAnyShapedTree,Z_Param_TargetTree);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProcessInformAuto(Z_Param_TargetTree);
	P_NATIVE_END;
}
// End Class UAnyShapedTreeNode Function ProcessInformAuto

// Begin Class UAnyShapedTreeNode Function ResetSelfInform
struct Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics
{
	struct AnyShapedTreeNode_eventResetSelfInform_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
		{ "ToolTip", "When creating an object of this class for the second time, if the backup data of the object has already been recorded in the tree, call this function to restore its own data from the backup data" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnyShapedTreeNode_eventResetSelfInform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnyShapedTreeNode_eventResetSelfInform_Parms), &Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTreeNode, nullptr, "ResetSelfInform", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::AnyShapedTreeNode_eventResetSelfInform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::AnyShapedTreeNode_eventResetSelfInform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTreeNode::execResetSelfInform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ResetSelfInform();
	P_NATIVE_END;
}
// End Class UAnyShapedTreeNode Function ResetSelfInform

// Begin Class UAnyShapedTreeNode Function SetActivated
struct Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics
{
	struct AnyShapedTreeNode_eventSetActivated_Parms
	{
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::NewProp_Value_SetBit(void* Obj)
{
	((AnyShapedTreeNode_eventSetActivated_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnyShapedTreeNode_eventSetActivated_Parms), &Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnyShapedTreeNode, nullptr, "SetActivated", nullptr, nullptr, Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::AnyShapedTreeNode_eventSetActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::AnyShapedTreeNode_eventSetActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnyShapedTreeNode::execSetActivated)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActivated(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UAnyShapedTreeNode Function SetActivated

// Begin Class UAnyShapedTreeNode
void UAnyShapedTreeNode::StaticRegisterNativesUAnyShapedTreeNode()
{
	UClass* Class = UAnyShapedTreeNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddExtraStruct", &UAnyShapedTreeNode::execAddExtraStruct },
		{ "GetActivated", &UAnyShapedTreeNode::execGetActivated },
		{ "GetSourceTree", &UAnyShapedTreeNode::execGetSourceTree },
		{ "ObtainAChildCopy", &UAnyShapedTreeNode::execObtainAChildCopy },
		{ "ObtainAllActivatedChildren", &UAnyShapedTreeNode::execObtainAllActivatedChildren },
		{ "ObtainParentCopy", &UAnyShapedTreeNode::execObtainParentCopy },
		{ "ObtainSelfCopy", &UAnyShapedTreeNode::execObtainSelfCopy },
		{ "ProcessInformAuto", &UAnyShapedTreeNode::execProcessInformAuto },
		{ "ResetSelfInform", &UAnyShapedTreeNode::execResetSelfInform },
		{ "SetActivated", &UAnyShapedTreeNode::execSetActivated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnyShapedTreeNode);
UClass* Z_Construct_UClass_UAnyShapedTreeNode_NoRegister()
{
	return UAnyShapedTreeNode::StaticClass();
}
struct Z_Construct_UClass_UAnyShapedTreeNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnyShapedTreeNode.h" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Recorded_MetaData[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
		{ "ToolTip", "When the same encoding has already been recorded, this property will be set to true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexInInfoHelper_MetaData[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "Comment", "//Used to determine whether the same encoding has already been recorded\n" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
		{ "ToolTip", "Used to determine whether the same encoding has already been recorded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LHCode_MetaData[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "Comment", "//As a copy of Index in AlReadyRecorded\n" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
		{ "ToolTip", "As a copy of Index in AlReadyRecorded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfOuter_MetaData[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitNameOuter_MetaData[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTree_MetaData[] = {
		{ "Category", "AnyTree|TreeNode" },
		{ "Comment", "//Automatically set during ProcessInformAuto to indicate which tree this node belongs to\n" },
		{ "ModuleRelativePath", "Public/AnyShapedTreeNode.h" },
		{ "ToolTip", "Automatically set during ProcessInformAuto to indicate which tree this node belongs to" },
	};
#endif // WITH_METADATA
	static void NewProp_Recorded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Recorded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInInfoHelper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LHCode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfOuter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExplicitNameOuter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnyShapedTreeNode_AddExtraStruct, "AddExtraStruct" }, // 2101175879
		{ &Z_Construct_UFunction_UAnyShapedTreeNode_GetActivated, "GetActivated" }, // 3775540792
		{ &Z_Construct_UFunction_UAnyShapedTreeNode_GetSourceTree, "GetSourceTree" }, // 279103328
		{ &Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAChildCopy, "ObtainAChildCopy" }, // 2191540928
		{ &Z_Construct_UFunction_UAnyShapedTreeNode_ObtainAllActivatedChildren, "ObtainAllActivatedChildren" }, // 1267423046
		{ &Z_Construct_UFunction_UAnyShapedTreeNode_ObtainParentCopy, "ObtainParentCopy" }, // 775897840
		{ &Z_Construct_UFunction_UAnyShapedTreeNode_ObtainSelfCopy, "ObtainSelfCopy" }, // 2588483740
		{ &Z_Construct_UFunction_UAnyShapedTreeNode_ProcessInformAuto, "ProcessInformAuto" }, // 2283034203
		{ &Z_Construct_UFunction_UAnyShapedTreeNode_ResetSelfInform, "ResetSelfInform" }, // 795261671
		{ &Z_Construct_UFunction_UAnyShapedTreeNode_SetActivated, "SetActivated" }, // 520325691
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnyShapedTreeNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_Recorded_SetBit(void* Obj)
{
	((UAnyShapedTreeNode*)Obj)->Recorded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_Recorded = { "Recorded", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnyShapedTreeNode), &Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_Recorded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Recorded_MetaData), NewProp_Recorded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_IndexInInfoHelper = { "IndexInInfoHelper", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnyShapedTreeNode, IndexInInfoHelper), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexInInfoHelper_MetaData), NewProp_IndexInInfoHelper_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_LHCode = { "LHCode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnyShapedTreeNode, LHCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LHCode_MetaData), NewProp_LHCode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_SelfOuter = { "SelfOuter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnyShapedTreeNode, SelfOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfOuter_MetaData), NewProp_SelfOuter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_ExplicitNameOuter = { "ExplicitNameOuter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnyShapedTreeNode, ExplicitNameOuter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitNameOuter_MetaData), NewProp_ExplicitNameOuter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_SourceTree = { "SourceTree", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnyShapedTreeNode, SourceTree), Z_Construct_UClass_UAnyShapedTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTree_MetaData), NewProp_SourceTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnyShapedTreeNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_Recorded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_IndexInInfoHelper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_LHCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_SelfOuter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_ExplicitNameOuter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnyShapedTreeNode_Statics::NewProp_SourceTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnyShapedTreeNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnyShapedTreeNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArbitraryShapedTreePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnyShapedTreeNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnyShapedTreeNode_Statics::ClassParams = {
	&UAnyShapedTreeNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnyShapedTreeNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnyShapedTreeNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnyShapedTreeNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnyShapedTreeNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnyShapedTreeNode()
{
	if (!Z_Registration_Info_UClass_UAnyShapedTreeNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnyShapedTreeNode.OuterSingleton, Z_Construct_UClass_UAnyShapedTreeNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnyShapedTreeNode.OuterSingleton;
}
template<> ARBITRARYSHAPEDTREEPLUGIN_API UClass* StaticClass<UAnyShapedTreeNode>()
{
	return UAnyShapedTreeNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnyShapedTreeNode);
// End Class UAnyShapedTreeNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnyShapedTreeNode, UAnyShapedTreeNode::StaticClass, TEXT("UAnyShapedTreeNode"), &Z_Registration_Info_UClass_UAnyShapedTreeNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnyShapedTreeNode), 2348415945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_3232145187(TEXT("/Script/ArbitraryShapedTreePlugin"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
