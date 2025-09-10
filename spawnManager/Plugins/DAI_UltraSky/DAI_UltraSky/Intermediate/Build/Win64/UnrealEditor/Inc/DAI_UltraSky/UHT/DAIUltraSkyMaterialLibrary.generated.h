// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAIUltraSkyMaterialLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADAIUltraSkyFootprintMask;
class UTextureRenderTarget2D;
#ifdef DAI_ULTRASKY_DAIUltraSkyMaterialLibrary_generated_h
#error "DAIUltraSkyMaterialLibrary.generated.h already included, missing '#pragma once' in DAIUltraSkyMaterialLibrary.h"
#endif
#define DAI_ULTRASKY_DAIUltraSkyMaterialLibrary_generated_h

#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetScalarOnActorMaterials); \
	DECLARE_FUNCTION(execApplyFootprintMaskToActorMaterials); \
	DECLARE_FUNCTION(execGetFootprintMaskRT);


#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDAIUltraSkyMaterialLibrary(); \
	friend struct Z_Construct_UClass_UDAIUltraSkyMaterialLibrary_Statics; \
public: \
	DECLARE_CLASS(UDAIUltraSkyMaterialLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DAI_UltraSky"), NO_API) \
	DECLARE_SERIALIZER(UDAIUltraSkyMaterialLibrary)


#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAIUltraSkyMaterialLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAIUltraSkyMaterialLibrary(UDAIUltraSkyMaterialLibrary&&); \
	UDAIUltraSkyMaterialLibrary(const UDAIUltraSkyMaterialLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAIUltraSkyMaterialLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAIUltraSkyMaterialLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAIUltraSkyMaterialLibrary) \
	NO_API virtual ~UDAIUltraSkyMaterialLibrary();


#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_11_PROLOG
#define FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_ULTRASKY_API UClass* StaticClass<class UDAIUltraSkyMaterialLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
