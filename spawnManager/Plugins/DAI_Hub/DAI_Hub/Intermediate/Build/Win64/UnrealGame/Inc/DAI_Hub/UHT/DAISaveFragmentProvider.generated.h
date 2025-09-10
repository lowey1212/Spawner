// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DAISaveFragmentProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAI_HUB_DAISaveFragmentProvider_generated_h
#error "DAISaveFragmentProvider.generated.h already included, missing '#pragma once' in DAISaveFragmentProvider.h"
#endif
#define DAI_HUB_DAISaveFragmentProvider_generated_h

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DAI_HUB_API UDAISaveFragmentProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAISaveFragmentProvider(UDAISaveFragmentProvider&&); \
	UDAISaveFragmentProvider(const UDAISaveFragmentProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAI_HUB_API, UDAISaveFragmentProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAISaveFragmentProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAISaveFragmentProvider) \
	DAI_HUB_API virtual ~UDAISaveFragmentProvider();


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDAISaveFragmentProvider(); \
	friend struct Z_Construct_UClass_UDAISaveFragmentProvider_Statics; \
public: \
	DECLARE_CLASS(UDAISaveFragmentProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DAI_Hub"), DAI_HUB_API) \
	DECLARE_SERIALIZER(UDAISaveFragmentProvider)


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_11_GENERATED_UINTERFACE_BODY() \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDAISaveFragmentProvider() {} \
public: \
	typedef UDAISaveFragmentProvider UClassType; \
	typedef IDAISaveFragmentProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_8_PROLOG
#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_HUB_API UClass* StaticClass<class UDAISaveFragmentProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
