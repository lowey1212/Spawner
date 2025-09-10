// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAIUltraSkyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDAIUltraSkyBiomeData;
#ifdef DAI_ULTRASKY_DAIUltraSkyActor_generated_h
#error "DAIUltraSkyActor.generated.h already included, missing '#pragma once' in DAIUltraSkyActor.h"
#endif
#define DAI_ULTRASKY_DAIUltraSkyActor_generated_h

#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_237_DELEGATE \
static void FOnFootprintStamped_DelegateWrapper(const FMulticastScriptDelegate& OnFootprintStamped, FVector Location, float Strength);


#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStampFootprintAtLocation); \
	DECLARE_FUNCTION(execIsSnowDeepEnoughForFootprints); \
	DECLARE_FUNCTION(execSetDayLengthSeconds); \
	DECLARE_FUNCTION(execSetTimeOfDay); \
	DECLARE_FUNCTION(execEditorApplySelectedPreset); \
	DECLARE_FUNCTION(execEditorRecaptureSkylight); \
	DECLARE_FUNCTION(execForceCondition); \
	DECLARE_FUNCTION(execForceApplyBiome);


#if WITH_EDITOR
#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execEditorRemoveFootprintAppliers); \
	DECLARE_FUNCTION(execEditorCreateFootprintDemo); \
	DECLARE_FUNCTION(execEditorCreateUltraSkySamples);
#else // WITH_EDITOR
#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADAIUltraSkyActor(); \
	friend struct Z_Construct_UClass_ADAIUltraSkyActor_Statics; \
public: \
	DECLARE_CLASS(ADAIUltraSkyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DAI_UltraSky"), NO_API) \
	DECLARE_SERIALIZER(ADAIUltraSkyActor)


#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAIUltraSkyActor(ADAIUltraSkyActor&&); \
	ADAIUltraSkyActor(const ADAIUltraSkyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADAIUltraSkyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADAIUltraSkyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADAIUltraSkyActor) \
	NO_API virtual ~ADAIUltraSkyActor();


#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_30_PROLOG
#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_33_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_ULTRASKY_API UClass* StaticClass<class ADAIUltraSkyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
