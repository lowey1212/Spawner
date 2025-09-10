// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Map/IDAIMapService.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAI_HUB_IDAIMapService_generated_h
#error "IDAIMapService.generated.h already included, missing '#pragma once' in IDAIMapService.h"
#endif
#define DAI_HUB_IDAIMapService_generated_h

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAIMapService(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAIMapService(UDAIMapService&&); \
	UDAIMapService(const UDAIMapService&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAIMapService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAIMapService); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAIMapService) \
	NO_API virtual ~UDAIMapService();


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDAIMapService(); \
	friend struct Z_Construct_UClass_UDAIMapService_Statics; \
public: \
	DECLARE_CLASS(UDAIMapService, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DAI_Hub"), NO_API) \
	DECLARE_SERIALIZER(UDAIMapService)


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_14_GENERATED_UINTERFACE_BODY() \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDAIMapService() {} \
public: \
	typedef UDAIMapService UClassType; \
	typedef IDAIMapService ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_11_PROLOG
#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_HUB_API UClass* StaticClass<class UDAIMapService>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
