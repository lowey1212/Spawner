// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAIUltraSkyAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef DAI_ULTRASKY_DAIUltraSkyAttributeSet_generated_h
#error "DAIUltraSkyAttributeSet.generated.h already included, missing '#pragma once' in DAIUltraSkyAttributeSet.h"
#endif
#define DAI_ULTRASKY_DAIUltraSkyAttributeSet_generated_h

#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Cloudiness); \
	DECLARE_FUNCTION(execOnRep_Precipitation); \
	DECLARE_FUNCTION(execOnRep_WindSpeedKph); \
	DECLARE_FUNCTION(execOnRep_Humidity); \
	DECLARE_FUNCTION(execOnRep_TemperatureC);


#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDAIUltraSkyAttributeSet(); \
	friend struct Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UDAIUltraSkyAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DAI_UltraSky"), NO_API) \
	DECLARE_SERIALIZER(UDAIUltraSkyAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TemperatureC=NETFIELD_REP_START, \
		Humidity, \
		WindSpeedKph, \
		Precipitation, \
		Cloudiness, \
		NETFIELD_REP_END=Cloudiness	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UDAIUltraSkyAttributeSet) \
public:


#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAIUltraSkyAttributeSet(UDAIUltraSkyAttributeSet&&); \
	UDAIUltraSkyAttributeSet(const UDAIUltraSkyAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAIUltraSkyAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAIUltraSkyAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDAIUltraSkyAttributeSet) \
	NO_API virtual ~UDAIUltraSkyAttributeSet();


#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_18_PROLOG
#define FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_ULTRASKY_API UClass* StaticClass<class UDAIUltraSkyAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
