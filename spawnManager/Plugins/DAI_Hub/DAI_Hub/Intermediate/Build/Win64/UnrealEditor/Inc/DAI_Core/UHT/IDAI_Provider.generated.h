// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAI/Core/Interfaces/IDAI_Provider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAI_CORE_IDAI_Provider_generated_h
#error "IDAI_Provider.generated.h already included, missing '#pragma once' in IDAI_Provider.h"
#endif
#define DAI_CORE_IDAI_Provider_generated_h

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Provider_h_4_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAI_Provider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAI_Provider(UDAI_Provider&&); \
	UDAI_Provider(const UDAI_Provider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAI_Provider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAI_Provider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAI_Provider) \
	NO_API virtual ~UDAI_Provider();


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Provider_h_4_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDAI_Provider(); \
	friend struct Z_Construct_UClass_UDAI_Provider_Statics; \
public: \
	DECLARE_CLASS(UDAI_Provider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DAI_Core"), NO_API) \
	DECLARE_SERIALIZER(UDAI_Provider)


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Provider_h_4_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Provider_h_4_GENERATED_UINTERFACE_BODY() \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Provider_h_4_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Provider_h_4_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDAI_Provider() {} \
public: \
	typedef UDAI_Provider UClassType; \
	typedef IDAI_Provider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Provider_h_4_PROLOG
#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Provider_h_5_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Provider_h_4_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_CORE_API UClass* StaticClass<class UDAI_Provider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Provider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
