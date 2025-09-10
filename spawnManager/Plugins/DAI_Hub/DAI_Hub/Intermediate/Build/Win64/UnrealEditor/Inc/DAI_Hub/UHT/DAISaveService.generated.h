// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DAISaveService.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAI_HUB_DAISaveService_generated_h
#error "DAISaveService.generated.h already included, missing '#pragma once' in DAISaveService.h"
#endif
#define DAI_HUB_DAISaveService_generated_h

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveService_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DAI_HUB_API UDAISaveService(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAISaveService(UDAISaveService&&); \
	UDAISaveService(const UDAISaveService&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAI_HUB_API, UDAISaveService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAISaveService); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAISaveService) \
	DAI_HUB_API virtual ~UDAISaveService();


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveService_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDAISaveService(); \
	friend struct Z_Construct_UClass_UDAISaveService_Statics; \
public: \
	DECLARE_CLASS(UDAISaveService, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DAI_Hub"), DAI_HUB_API) \
	DECLARE_SERIALIZER(UDAISaveService)


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveService_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveService_h_11_GENERATED_UINTERFACE_BODY() \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveService_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveService_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDAISaveService() {} \
public: \
	typedef UDAISaveService UClassType; \
	typedef IDAISaveService ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveService_h_8_PROLOG
#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveService_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveService_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_HUB_API UClass* StaticClass<class UDAISaveService>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveService_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
