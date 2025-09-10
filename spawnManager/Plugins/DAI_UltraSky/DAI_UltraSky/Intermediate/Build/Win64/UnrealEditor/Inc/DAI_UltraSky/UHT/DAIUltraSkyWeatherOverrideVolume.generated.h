// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAIUltraSkyWeatherOverrideVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAI_ULTRASKY_DAIUltraSkyWeatherOverrideVolume_generated_h
#error "DAIUltraSkyWeatherOverrideVolume.generated.h already included, missing '#pragma once' in DAIUltraSkyWeatherOverrideVolume.h"
#endif
#define DAI_ULTRASKY_DAIUltraSkyWeatherOverrideVolume_generated_h

#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADAIUltraSkyWeatherOverrideVolume(); \
	friend struct Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics; \
public: \
	DECLARE_CLASS(ADAIUltraSkyWeatherOverrideVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DAI_UltraSky"), NO_API) \
	DECLARE_SERIALIZER(ADAIUltraSkyWeatherOverrideVolume)


#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAIUltraSkyWeatherOverrideVolume(ADAIUltraSkyWeatherOverrideVolume&&); \
	ADAIUltraSkyWeatherOverrideVolume(const ADAIUltraSkyWeatherOverrideVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADAIUltraSkyWeatherOverrideVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADAIUltraSkyWeatherOverrideVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADAIUltraSkyWeatherOverrideVolume) \
	NO_API virtual ~ADAIUltraSkyWeatherOverrideVolume();


#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_16_PROLOG
#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_19_INCLASS_NO_PURE_DECLS \
	FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_ULTRASKY_API UClass* StaticClass<class ADAIUltraSkyWeatherOverrideVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h


#define FOREACH_ENUM_EDAIULTRASKYOVERRIDEMODE(op) \
	op(EDAIUltraSkyOverrideMode::Disabled) \
	op(EDAIUltraSkyOverrideMode::SinglePreset) 

enum class EDAIUltraSkyOverrideMode : uint8;
template<> struct TIsUEnumClass<EDAIUltraSkyOverrideMode> { enum { Value = true }; };
template<> DAI_ULTRASKY_API UEnum* StaticEnum<EDAIUltraSkyOverrideMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
