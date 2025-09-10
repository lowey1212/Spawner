// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DAIQuestService.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAI_HUB_DAIQuestService_generated_h
#error "DAIQuestService.generated.h already included, missing '#pragma once' in DAIQuestService.h"
#endif
#define DAI_HUB_DAIQuestService_generated_h

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIQuestService_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DAI_HUB_API UDAIQuestService(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAIQuestService(UDAIQuestService&&); \
	UDAIQuestService(const UDAIQuestService&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAI_HUB_API, UDAIQuestService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAIQuestService); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAIQuestService) \
	DAI_HUB_API virtual ~UDAIQuestService();


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIQuestService_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDAIQuestService(); \
	friend struct Z_Construct_UClass_UDAIQuestService_Statics; \
public: \
	DECLARE_CLASS(UDAIQuestService, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DAI_Hub"), DAI_HUB_API) \
	DECLARE_SERIALIZER(UDAIQuestService)


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIQuestService_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIQuestService_h_10_GENERATED_UINTERFACE_BODY() \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIQuestService_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIQuestService_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDAIQuestService() {} \
public: \
	typedef UDAIQuestService UClassType; \
	typedef IDAIQuestService ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIQuestService_h_7_PROLOG
#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIQuestService_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIQuestService_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_HUB_API UClass* StaticClass<class UDAIQuestService>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIQuestService_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
