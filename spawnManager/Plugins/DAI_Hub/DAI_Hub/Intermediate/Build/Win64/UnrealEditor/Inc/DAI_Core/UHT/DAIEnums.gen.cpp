// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Core/Public/DAI/Core/DAIEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIEnums() {}

// Begin Cross Module References
DAI_CORE_API UEnum* Z_Construct_UEnum_DAI_Core_ELoadPriority();
DAI_CORE_API UEnum* Z_Construct_UEnum_DAI_Core_EQuestState();
DAI_CORE_API UEnum* Z_Construct_UEnum_DAI_Core_ESpawnReason();
UPackage* Z_Construct_UPackage__Script_DAI_Core();
// End Cross Module References

// Begin Enum EQuestState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestState;
static UEnum* EQuestState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuestState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuestState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAI_Core_EQuestState, (UObject*)Z_Construct_UPackage__Script_DAI_Core(), TEXT("EQuestState"));
	}
	return Z_Registration_Info_UEnum_EQuestState.OuterSingleton;
}
template<> DAI_CORE_API UEnum* StaticEnum<EQuestState>()
{
	return EQuestState_StaticEnum();
}
struct Z_Construct_UEnum_DAI_Core_EQuestState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Name", "EQuestState::Active" },
		{ "BlueprintType", "true" },
		{ "Completed.Name", "EQuestState::Completed" },
		{ "Failed.Name", "EQuestState::Failed" },
		{ "Inactive.Name", "EQuestState::Inactive" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIEnums.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuestState::Inactive", (int64)EQuestState::Inactive },
		{ "EQuestState::Active", (int64)EQuestState::Active },
		{ "EQuestState::Completed", (int64)EQuestState::Completed },
		{ "EQuestState::Failed", (int64)EQuestState::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAI_Core_EQuestState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DAI_Core,
	nullptr,
	"EQuestState",
	"EQuestState",
	Z_Construct_UEnum_DAI_Core_EQuestState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Core_EQuestState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Core_EQuestState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DAI_Core_EQuestState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DAI_Core_EQuestState()
{
	if (!Z_Registration_Info_UEnum_EQuestState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestState.InnerSingleton, Z_Construct_UEnum_DAI_Core_EQuestState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuestState.InnerSingleton;
}
// End Enum EQuestState

// Begin Enum ESpawnReason
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpawnReason;
static UEnum* ESpawnReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpawnReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpawnReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAI_Core_ESpawnReason, (UObject*)Z_Construct_UPackage__Script_DAI_Core(), TEXT("ESpawnReason"));
	}
	return Z_Registration_Info_UEnum_ESpawnReason.OuterSingleton;
}
template<> DAI_CORE_API UEnum* StaticEnum<ESpawnReason>()
{
	return ESpawnReason_StaticEnum();
}
struct Z_Construct_UEnum_DAI_Core_ESpawnReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dynamic.Name", "ESpawnReason::Dynamic" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIEnums.h" },
		{ "Refill.Name", "ESpawnReason::Refill" },
		{ "Scripted.Name", "ESpawnReason::Scripted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpawnReason::Scripted", (int64)ESpawnReason::Scripted },
		{ "ESpawnReason::Dynamic", (int64)ESpawnReason::Dynamic },
		{ "ESpawnReason::Refill", (int64)ESpawnReason::Refill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAI_Core_ESpawnReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DAI_Core,
	nullptr,
	"ESpawnReason",
	"ESpawnReason",
	Z_Construct_UEnum_DAI_Core_ESpawnReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Core_ESpawnReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Core_ESpawnReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DAI_Core_ESpawnReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DAI_Core_ESpawnReason()
{
	if (!Z_Registration_Info_UEnum_ESpawnReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpawnReason.InnerSingleton, Z_Construct_UEnum_DAI_Core_ESpawnReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpawnReason.InnerSingleton;
}
// End Enum ESpawnReason

// Begin Enum ELoadPriority
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadPriority;
static UEnum* ELoadPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELoadPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELoadPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAI_Core_ELoadPriority, (UObject*)Z_Construct_UPackage__Script_DAI_Core(), TEXT("ELoadPriority"));
	}
	return Z_Registration_Info_UEnum_ELoadPriority.OuterSingleton;
}
template<> DAI_CORE_API UEnum* StaticEnum<ELoadPriority>()
{
	return ELoadPriority_StaticEnum();
}
struct Z_Construct_UEnum_DAI_Core_ELoadPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "ELoadPriority::High" },
		{ "Low.Name", "ELoadPriority::Low" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIEnums.h" },
		{ "Normal.Name", "ELoadPriority::Normal" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELoadPriority::Low", (int64)ELoadPriority::Low },
		{ "ELoadPriority::Normal", (int64)ELoadPriority::Normal },
		{ "ELoadPriority::High", (int64)ELoadPriority::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAI_Core_ELoadPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DAI_Core,
	nullptr,
	"ELoadPriority",
	"ELoadPriority",
	Z_Construct_UEnum_DAI_Core_ELoadPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Core_ELoadPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Core_ELoadPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DAI_Core_ELoadPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DAI_Core_ELoadPriority()
{
	if (!Z_Registration_Info_UEnum_ELoadPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadPriority.InnerSingleton, Z_Construct_UEnum_DAI_Core_ELoadPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELoadPriority.InnerSingleton;
}
// End Enum ELoadPriority

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_DAIEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQuestState_StaticEnum, TEXT("EQuestState"), &Z_Registration_Info_UEnum_EQuestState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1600629612U) },
		{ ESpawnReason_StaticEnum, TEXT("ESpawnReason"), &Z_Registration_Info_UEnum_ESpawnReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1936396697U) },
		{ ELoadPriority_StaticEnum, TEXT("ELoadPriority"), &Z_Registration_Info_UEnum_ELoadPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1907687876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_DAIEnums_h_2694195224(TEXT("/Script/DAI_Core"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_DAIEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_DAIEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
