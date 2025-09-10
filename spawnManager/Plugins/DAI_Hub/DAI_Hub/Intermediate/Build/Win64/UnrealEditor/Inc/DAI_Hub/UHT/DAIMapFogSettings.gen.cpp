// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/Interfaces/Map/DAIMapFogSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIMapFogSettings() {}

// Begin Cross Module References
DAI_HUB_API UEnum* Z_Construct_UEnum_DAI_Hub_EFogMode();
DAI_HUB_API UScriptStruct* Z_Construct_UScriptStruct_FDAIFogConfig();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Enum EFogMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFogMode;
static UEnum* EFogMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFogMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFogMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAI_Hub_EFogMode, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("EFogMode"));
	}
	return Z_Registration_Info_UEnum_EFogMode.OuterSingleton;
}
template<> DAI_HUB_API UEnum* StaticEnum<EFogMode>()
{
	return EFogMode_StaticEnum();
}
struct Z_Construct_UEnum_DAI_Hub_EFogMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Mixed.DisplayName", "Mixed" },
		{ "Mixed.Name", "EFogMode::Mixed" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapFogSettings.h" },
		{ "PerPlayer.DisplayName", "Per Player" },
		{ "PerPlayer.Name", "EFogMode::PerPlayer" },
		{ "Shared.DisplayName", "Shared" },
		{ "Shared.Name", "EFogMode::Shared" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFogMode::PerPlayer", (int64)EFogMode::PerPlayer },
		{ "EFogMode::Shared", (int64)EFogMode::Shared },
		{ "EFogMode::Mixed", (int64)EFogMode::Mixed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAI_Hub_EFogMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	"EFogMode",
	"EFogMode",
	Z_Construct_UEnum_DAI_Hub_EFogMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Hub_EFogMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Hub_EFogMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DAI_Hub_EFogMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DAI_Hub_EFogMode()
{
	if (!Z_Registration_Info_UEnum_EFogMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFogMode.InnerSingleton, Z_Construct_UEnum_DAI_Hub_EFogMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFogMode.InnerSingleton;
}
// End Enum EFogMode

// Begin ScriptStruct FDAIFogConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAIFogConfig;
class UScriptStruct* FDAIFogConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAIFogConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAIFogConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAIFogConfig, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("DAIFogConfig"));
	}
	return Z_Registration_Info_UScriptStruct_DAIFogConfig.OuterSingleton;
}
template<> DAI_HUB_API UScriptStruct* StaticStruct<FDAIFogConfig>()
{
	return FDAIFogConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAIFogConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapFogSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Fog" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapFogSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenAlpha_MetaData[] = {
		{ "Category", "Fog" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapFogSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusEnable_MetaData[] = {
		{ "Category", "Fog" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapFogSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusMeters_MetaData[] = {
		{ "Category", "Fog" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapFogSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelMapTexture_MetaData[] = {
		{ "Category", "Fog" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapFogSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HiddenAlpha;
	static void NewProp_RadiusEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RadiusEnable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusMeters;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LabelMapTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAIFogConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIFogConfig, Mode), Z_Construct_UEnum_DAI_Hub_EFogMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2153090275
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_HiddenAlpha = { "HiddenAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIFogConfig, HiddenAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenAlpha_MetaData), NewProp_HiddenAlpha_MetaData) };
void Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_RadiusEnable_SetBit(void* Obj)
{
	((FDAIFogConfig*)Obj)->RadiusEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_RadiusEnable = { "RadiusEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDAIFogConfig), &Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_RadiusEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusEnable_MetaData), NewProp_RadiusEnable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_RadiusMeters = { "RadiusMeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIFogConfig, RadiusMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusMeters_MetaData), NewProp_RadiusMeters_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_LabelMapTexture = { "LabelMapTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIFogConfig, LabelMapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelMapTexture_MetaData), NewProp_LabelMapTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAIFogConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_HiddenAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_RadiusEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_RadiusMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewProp_LabelMapTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIFogConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAIFogConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	&NewStructOps,
	"DAIFogConfig",
	Z_Construct_UScriptStruct_FDAIFogConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIFogConfig_Statics::PropPointers),
	sizeof(FDAIFogConfig),
	alignof(FDAIFogConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIFogConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAIFogConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAIFogConfig()
{
	if (!Z_Registration_Info_UScriptStruct_DAIFogConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAIFogConfig.InnerSingleton, Z_Construct_UScriptStruct_FDAIFogConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAIFogConfig.InnerSingleton;
}
// End ScriptStruct FDAIFogConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapFogSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFogMode_StaticEnum, TEXT("EFogMode"), &Z_Registration_Info_UEnum_EFogMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2153090275U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDAIFogConfig::StaticStruct, Z_Construct_UScriptStruct_FDAIFogConfig_Statics::NewStructOps, TEXT("DAIFogConfig"), &Z_Registration_Info_UScriptStruct_DAIFogConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAIFogConfig), 874145194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapFogSettings_h_2642583351(TEXT("/Script/DAI_Hub"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapFogSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapFogSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapFogSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapFogSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
