// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Map/DAIMapTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAI_HUB_DAIMapTypes_generated_h
#error "DAIMapTypes.generated.h already included, missing '#pragma once' in DAIMapTypes.h"
#endif
#define DAI_HUB_DAIMapTypes_generated_h

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAIPOIDesc_Statics; \
	DAI_HUB_API static class UScriptStruct* StaticStruct();


template<> DAI_HUB_API UScriptStruct* StaticStruct<struct FDAIPOIDesc>();

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAIPOIHandle_Statics; \
	DAI_HUB_API static class UScriptStruct* StaticStruct();


template<> DAI_HUB_API UScriptStruct* StaticStruct<struct FDAIPOIHandle>();

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAISectionId_Statics; \
	DAI_HUB_API static class UScriptStruct* StaticStruct();


template<> DAI_HUB_API UScriptStruct* StaticStruct<struct FDAISectionId>();

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAIPathRequest_Statics; \
	DAI_HUB_API static class UScriptStruct* StaticStruct();


template<> DAI_HUB_API UScriptStruct* StaticStruct<struct FDAIPathRequest>();

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAIPathPoly_Statics; \
	DAI_HUB_API static class UScriptStruct* StaticStruct();


template<> DAI_HUB_API UScriptStruct* StaticStruct<struct FDAIPathPoly>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h


#define FOREACH_ENUM_EDAIPOIVISIBILITY(op) \
	op(EDAIPOIVisibility::Always) \
	op(EDAIPOIVisibility::WhenDiscovered) \
	op(EDAIPOIVisibility::WhenNearby) \
	op(EDAIPOIVisibility::Hidden) 

enum class EDAIPOIVisibility : uint8;
template<> struct TIsUEnumClass<EDAIPOIVisibility> { enum { Value = true }; };
template<> DAI_HUB_API UEnum* StaticEnum<EDAIPOIVisibility>();

#define FOREACH_ENUM_EDAIPATHREFRESHPOLICY(op) \
	op(EDAIPathRefreshPolicy::Never) \
	op(EDAIPathRefreshPolicy::OnChange) \
	op(EDAIPathRefreshPolicy::Always) 

enum class EDAIPathRefreshPolicy : uint8;
template<> struct TIsUEnumClass<EDAIPathRefreshPolicy> { enum { Value = true }; };
template<> DAI_HUB_API UEnum* StaticEnum<EDAIPathRefreshPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
