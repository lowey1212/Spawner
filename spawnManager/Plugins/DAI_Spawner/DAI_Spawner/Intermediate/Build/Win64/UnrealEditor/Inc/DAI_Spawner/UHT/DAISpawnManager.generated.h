// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAISpawnManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DAI_SPAWNER_DAISpawnManager_generated_h
#error "DAISpawnManager.generated.h already included, missing '#pragma once' in DAISpawnManager.h"
#endif
#define DAI_SPAWNER_DAISpawnManager_generated_h

#define FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnEntry_Statics; \
	DAI_SPAWNER_API static class UScriptStruct* StaticStruct();


template<> DAI_SPAWNER_API UScriptStruct* StaticStruct<struct FSpawnEntry>();

#define FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleSpawnedActorDestroyed); \
	DECLARE_FUNCTION(execGetSpawnLocation); \
	DECLARE_FUNCTION(execSpawnActors);


#define FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADAISpawnManager(); \
	friend struct Z_Construct_UClass_ADAISpawnManager_Statics; \
public: \
	DECLARE_CLASS(ADAISpawnManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DAI_Spawner"), NO_API) \
	DECLARE_SERIALIZER(ADAISpawnManager)


#define FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_90_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAISpawnManager(ADAISpawnManager&&); \
	ADAISpawnManager(const ADAISpawnManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADAISpawnManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADAISpawnManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADAISpawnManager) \
	NO_API virtual ~ADAISpawnManager();


#define FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_87_PROLOG
#define FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_90_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_SPAWNER_API UClass* StaticClass<class ADAISpawnManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h


#define FOREACH_ENUM_ESPAWNAREASHAPE(op) \
	op(ESpawnAreaShape::Circle) \
	op(ESpawnAreaShape::Square) \
	op(ESpawnAreaShape::Curve) 

enum class ESpawnAreaShape : uint8;
template<> struct TIsUEnumClass<ESpawnAreaShape> { enum { Value = true }; };
template<> DAI_SPAWNER_API UEnum* StaticEnum<ESpawnAreaShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
