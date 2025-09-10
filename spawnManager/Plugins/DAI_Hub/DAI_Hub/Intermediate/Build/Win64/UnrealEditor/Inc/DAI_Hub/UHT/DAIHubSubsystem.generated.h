// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAIHubSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDAIHubEventPayload;
#ifdef DAI_HUB_DAIHubSubsystem_generated_h
#error "DAIHubSubsystem.generated.h already included, missing '#pragma once' in DAIHubSubsystem.h"
#endif
#define DAI_HUB_DAIHubSubsystem_generated_h

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_19_DELEGATE \
DAI_HUB_API void FDAIHubEventBPDelegate_DelegateWrapper(const FScriptDelegate& DAIHubEventBPDelegate, FDAIHubEventPayload const& Event);


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDAIHubSubsystem(); \
	friend struct Z_Construct_UClass_UDAIHubSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDAIHubSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DAI_Hub"), NO_API) \
	DECLARE_SERIALIZER(UDAIHubSubsystem)


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAIHubSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAIHubSubsystem(UDAIHubSubsystem&&); \
	UDAIHubSubsystem(const UDAIHubSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAIHubSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAIHubSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDAIHubSubsystem) \
	NO_API virtual ~UDAIHubSubsystem();


#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_21_PROLOG
#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAI_HUB_API UClass* StaticClass<class UDAIHubSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
