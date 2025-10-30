// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnyShapedTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTreeNodeDescription;
#ifdef ARBITRARYSHAPEDTREEPLUGIN_AnyShapedTree_generated_h
#error "AnyShapedTree.generated.h already included, missing '#pragma once' in AnyShapedTree.h"
#endif
#define ARBITRARYSHAPEDTREEPLUGIN_AnyShapedTree_generated_h

#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTreeNodeDescriptionPtr_Statics; \
	ARBITRARYSHAPEDTREEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> ARBITRARYSHAPEDTREEPLUGIN_API UScriptStruct* StaticStruct<struct FTreeNodeDescriptionPtr>();

#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTreeNodeDescription_Statics; \
	ARBITRARYSHAPEDTREEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> ARBITRARYSHAPEDTREEPLUGIN_API UScriptStruct* StaticStruct<struct FTreeNodeDescription>();

#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetTree); \
	DECLARE_FUNCTION(execGetAllActivatedChildrenStruct); \
	DECLARE_FUNCTION(execGetRoot); \
	DECLARE_FUNCTION(execGetAlreadyRecorded);


#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnyShapedTree(); \
	friend struct Z_Construct_UClass_UAnyShapedTree_Statics; \
public: \
	DECLARE_CLASS(UAnyShapedTree, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbitraryShapedTreePlugin"), NO_API) \
	DECLARE_SERIALIZER(UAnyShapedTree)


#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnyShapedTree(UAnyShapedTree&&); \
	UAnyShapedTree(const UAnyShapedTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnyShapedTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnyShapedTree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnyShapedTree)


#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_97_PROLOG
#define FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_100_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARBITRARYSHAPEDTREEPLUGIN_API UClass* StaticClass<class UAnyShapedTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ArbitraryShapedTreePlugin_Source_ArbitraryShapedTreePlugin_Public_AnyShapedTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
