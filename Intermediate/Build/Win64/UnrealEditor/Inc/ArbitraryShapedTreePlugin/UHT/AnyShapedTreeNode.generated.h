// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnyShapedTreeNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnyShapedTree;
class UAnyShapedTreeNode;
struct FInstancedStruct;
struct FTreeNodeDescription;
#ifdef ARBITRARYSHAPEDTREEPLUGIN_AnyShapedTreeNode_generated_h
#error "AnyShapedTreeNode.generated.h already included, missing '#pragma once' in AnyShapedTreeNode.h"
#endif
#define ARBITRARYSHAPEDTREEPLUGIN_AnyShapedTreeNode_generated_h

#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddExtraStruct); \
	DECLARE_FUNCTION(execProcessInformAuto); \
	DECLARE_FUNCTION(execResetSelfInform); \
	DECLARE_FUNCTION(execSetActivated); \
	DECLARE_FUNCTION(execGetActivated); \
	DECLARE_FUNCTION(execObtainAllActivatedChildren); \
	DECLARE_FUNCTION(execObtainAChildCopy); \
	DECLARE_FUNCTION(execObtainParentCopy); \
	DECLARE_FUNCTION(execObtainSelfCopy); \
	DECLARE_FUNCTION(execGetSourceTree);


#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnyShapedTreeNode(); \
	friend struct Z_Construct_UClass_UAnyShapedTreeNode_Statics; \
public: \
	DECLARE_CLASS(UAnyShapedTreeNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbitraryShapedTreePlugin"), NO_API) \
	DECLARE_SERIALIZER(UAnyShapedTreeNode)


#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnyShapedTreeNode(UAnyShapedTreeNode&&); \
	UAnyShapedTreeNode(const UAnyShapedTreeNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnyShapedTreeNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnyShapedTreeNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnyShapedTreeNode)


#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_14_PROLOG
#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARBITRARYSHAPEDTREEPLUGIN_API UClass* StaticClass<class UAnyShapedTreeNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTreeNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
