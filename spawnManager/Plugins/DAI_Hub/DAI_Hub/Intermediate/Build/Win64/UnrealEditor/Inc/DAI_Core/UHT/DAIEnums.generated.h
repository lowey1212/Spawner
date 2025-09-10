// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAI/Core/DAIEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAI_CORE_DAIEnums_generated_h
#error "DAIEnums.generated.h already included, missing '#pragma once' in DAIEnums.h"
#endif
#define DAI_CORE_DAIEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_DAIEnums_h


#define FOREACH_ENUM_EQUESTSTATE(op) \
	op(EQuestState::Inactive) \
	op(EQuestState::Active) \
	op(EQuestState::Completed) \
	op(EQuestState::Failed) 

enum class EQuestState : uint8;
template<> struct TIsUEnumClass<EQuestState> { enum { Value = true }; };
template<> DAI_CORE_API UEnum* StaticEnum<EQuestState>();

#define FOREACH_ENUM_ESPAWNREASON(op) \
	op(ESpawnReason::Scripted) \
	op(ESpawnReason::Dynamic) \
	op(ESpawnReason::Refill) 

enum class ESpawnReason : uint8;
template<> struct TIsUEnumClass<ESpawnReason> { enum { Value = true }; };
template<> DAI_CORE_API UEnum* StaticEnum<ESpawnReason>();

#define FOREACH_ENUM_ELOADPRIORITY(op) \
	op(ELoadPriority::Low) \
	op(ELoadPriority::Normal) \
	op(ELoadPriority::High) 

enum class ELoadPriority : uint8;
template<> struct TIsUEnumClass<ELoadPriority> { enum { Value = true }; };
template<> DAI_CORE_API UEnum* StaticEnum<ELoadPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
