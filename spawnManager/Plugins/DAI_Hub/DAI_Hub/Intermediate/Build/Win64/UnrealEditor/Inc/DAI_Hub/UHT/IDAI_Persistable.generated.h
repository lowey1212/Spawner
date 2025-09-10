// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAI/Core/Interfaces/IDAI_Persistable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAI_HUB_IDAI_Persistable_generated_h
#error "IDAI_Persistable.generated.h already included, missing '#pragma once' in IDAI_Persistable.h"
#endif
#define DAI_HUB_IDAI_Persistable_generated_h

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Persistable_h_4_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAI_Persistable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAI_Persistable(UDAI_Persistable&&); \
	UDAI_Persistable(const UDAI_Persistable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAI_Persistable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAI_Persistable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAI_Persistable) \
	NO_API virtual ~UDAI_Persistable();


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Persistable_h_4_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDAI_Persistable(); \
	friend struct Z_Construct_UClass_UDAI_Persistable_Statics; \
public: \
	DECLARE_CLASS(UDAI_Persistable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DAI_Hub"), NO_API) \
	DECLARE_SERIALIZER(UDAI_Persistable)


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Persistable_h_4_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Persistable_h_4_GENERATED_UINTERFACE_BODY() \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Persistable_h_4_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Persistable_h_4_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDAI_Persistable() {} \
public: \
	typedef UDAI_Persistable UClassType; \
	typedef IDAI_Persistable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Persistable_h_4_PROLOG
#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Persistable_h_5_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Persistable_h_4_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_HUB_API UClass* StaticClass<class UDAI_Persistable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Persistable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
