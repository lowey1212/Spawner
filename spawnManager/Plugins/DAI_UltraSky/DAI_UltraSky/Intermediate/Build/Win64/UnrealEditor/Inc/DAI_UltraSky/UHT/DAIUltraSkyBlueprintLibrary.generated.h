// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAIUltraSkyBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADAIUltraSkyActor;
class UObject;
#ifdef DAI_ULTRASKY_DAIUltraSkyBlueprintLibrary_generated_h
#error "DAIUltraSkyBlueprintLibrary.generated.h already included, missing '#pragma once' in DAIUltraSkyBlueprintLibrary.h"
#endif
#define DAI_ULTRASKY_DAIUltraSkyBlueprintLibrary_generated_h

#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDAI_ForceUltraSkyBiomeByName); \
	DECLARE_FUNCTION(execDAI_SetUltraSkySnowThresholds); \
	DECLARE_FUNCTION(execDAI_GetUltraSkyWindDirection); \
	DECLARE_FUNCTION(execDAI_GetUltraSkyIsStorming); \
	DECLARE_FUNCTION(execDAI_GetUltraSkyIsPrecipitating); \
	DECLARE_FUNCTION(execDAI_GetUltraSkyBiome); \
	DECLARE_FUNCTION(execDAI_GetUltraSkyWetness); \
	DECLARE_FUNCTION(execDAI_ForceUltraSkyCondition); \
	DECLARE_FUNCTION(execDAI_GetUltraSkyWindIntensity); \
	DECLARE_FUNCTION(execDAI_GetUltraSkySnowAccum); \
	DECLARE_FUNCTION(execDAI_GetUltraSkyCondition); \
	DECLARE_FUNCTION(execDAI_GetUltraSkyTimeOfDay); \
	DECLARE_FUNCTION(execDAI_GetUltraSkyActorFromService); \
	DECLARE_FUNCTION(execDAI_SetUltraSkyDayLength); \
	DECLARE_FUNCTION(execDAI_SetUltraSkyTime);


#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDAIUltraSkyBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDAIUltraSkyBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DAI_UltraSky"), NO_API) \
	DECLARE_SERIALIZER(UDAIUltraSkyBlueprintLibrary)


#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAIUltraSkyBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAIUltraSkyBlueprintLibrary(UDAIUltraSkyBlueprintLibrary&&); \
	UDAIUltraSkyBlueprintLibrary(const UDAIUltraSkyBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAIUltraSkyBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAIUltraSkyBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAIUltraSkyBlueprintLibrary) \
	NO_API virtual ~UDAIUltraSkyBlueprintLibrary();


#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_19_PROLOG
#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_ULTRASKY_API UClass* StaticClass<class UDAIUltraSkyBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
