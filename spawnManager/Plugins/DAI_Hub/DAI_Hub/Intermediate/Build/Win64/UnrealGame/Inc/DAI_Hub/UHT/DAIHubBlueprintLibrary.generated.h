// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAIHubBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDAIHubSubsystem;
class UObject;
struct FGameplayTag;
struct FGuid;
#ifdef DAI_HUB_DAIHubBlueprintLibrary_generated_h
#error "DAIHubBlueprintLibrary.generated.h already included, missing '#pragma once' in DAIHubBlueprintLibrary.h"
#endif
#define DAI_HUB_DAIHubBlueprintLibrary_generated_h

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFactionEventTopics); \
	DECLARE_FUNCTION(execGetDiscoveredServices); \
	DECLARE_FUNCTION(execGetPerfBudget); \
	DECLARE_FUNCTION(execGetRemainingPerfBudget); \
	DECLARE_FUNCTION(execUnsubscribeFromTopic); \
	DECLARE_FUNCTION(execSubscribeToTopic); \
	DECLARE_FUNCTION(execRequestSave); \
	DECLARE_FUNCTION(execDespawn); \
	DECLARE_FUNCTION(execRequestSpawn); \
	DECLARE_FUNCTION(execReleasePerfBudget); \
	DECLARE_FUNCTION(execAcquirePerfBudget); \
	DECLARE_FUNCTION(execGetHub);


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDAIHubBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDAIHubBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDAIHubBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DAI_Hub"), NO_API) \
	DECLARE_SERIALIZER(UDAIHubBlueprintLibrary)


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAIHubBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAIHubBlueprintLibrary(UDAIHubBlueprintLibrary&&); \
	UDAIHubBlueprintLibrary(const UDAIHubBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAIHubBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAIHubBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAIHubBlueprintLibrary) \
	NO_API virtual ~UDAIHubBlueprintLibrary();


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_9_PROLOG
#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_HUB_API UClass* StaticClass<class UDAIHubBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
