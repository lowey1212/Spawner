// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Map/DAIMapFogSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAI_HUB_DAIMapFogSettings_generated_h
#error "DAIMapFogSettings.generated.h already included, missing '#pragma once' in DAIMapFogSettings.h"
#endif
#define DAI_HUB_DAIMapFogSettings_generated_h

#define FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapFogSettings_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAIFogConfig_Statics; \
	DAI_HUB_API static class UScriptStruct* StaticStruct();


template<> DAI_HUB_API UScriptStruct* StaticStruct<struct FDAIFogConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapFogSettings_h


#define FOREACH_ENUM_EFOGMODE(op) \
	op(EFogMode::PerPlayer) \
	op(EFogMode::Shared) \
	op(EFogMode::Mixed) 

enum class EFogMode : uint8;
template<> struct TIsUEnumClass<EFogMode> { enum { Value = true }; };
template<> DAI_HUB_API UEnum* StaticEnum<EFogMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
