// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyWeatherOverrideVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyWeatherOverrideVolume() {}

// Begin Cross Module References
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister();
DAI_ULTRASKY_API UEnum* Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Enum EDAIUltraSkyOverrideMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDAIUltraSkyOverrideMode;
static UEnum* EDAIUltraSkyOverrideMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDAIUltraSkyOverrideMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDAIUltraSkyOverrideMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode, (UObject*)Z_Construct_UPackage__Script_DAI_UltraSky(), TEXT("EDAIUltraSkyOverrideMode"));
	}
	return Z_Registration_Info_UEnum_EDAIUltraSkyOverrideMode.OuterSingleton;
}
template<> DAI_ULTRASKY_API UEnum* StaticEnum<EDAIUltraSkyOverrideMode>()
{
	return EDAIUltraSkyOverrideMode_StaticEnum();
}
struct Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EDAIUltraSkyOverrideMode::Disabled" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyWeatherOverrideVolume.h" },
		{ "SinglePreset.DisplayName", "Single Preset" },
		{ "SinglePreset.Name", "EDAIUltraSkyOverrideMode::SinglePreset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDAIUltraSkyOverrideMode::Disabled", (int64)EDAIUltraSkyOverrideMode::Disabled },
		{ "EDAIUltraSkyOverrideMode::SinglePreset", (int64)EDAIUltraSkyOverrideMode::SinglePreset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DAI_UltraSky,
	nullptr,
	"EDAIUltraSkyOverrideMode",
	"EDAIUltraSkyOverrideMode",
	Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode()
{
	if (!Z_Registration_Info_UEnum_EDAIUltraSkyOverrideMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDAIUltraSkyOverrideMode.InnerSingleton, Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDAIUltraSkyOverrideMode.InnerSingleton;
}
// End Enum EDAIUltraSkyOverrideMode

// Begin Class ADAIUltraSkyWeatherOverrideVolume
void ADAIUltraSkyWeatherOverrideVolume::StaticRegisterNativesADAIUltraSkyWeatherOverrideVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAIUltraSkyWeatherOverrideVolume);
UClass* Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_NoRegister()
{
	return ADAIUltraSkyWeatherOverrideVolume::StaticClass();
}
struct Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "DAIUltraSkyWeatherOverrideVolume.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyWeatherOverrideVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "UltraSky|Override" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyWeatherOverrideVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override mode; Disabled ignores volume, SinglePreset applies specified biome/condition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "UltraSky|Override" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyWeatherOverrideVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Priority when multiple override volumes overlap (higher wins)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBiome_MetaData[] = {
		{ "Category", "UltraSky|Override" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyWeatherOverrideVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biome to force while inside (used when Mode=SinglePreset)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideCondition_MetaData[] = {
		{ "Category", "UltraSky|Override" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyWeatherOverrideVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weather condition name to force while inside (optional)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterBlendSeconds_MetaData[] = {
		{ "Category", "UltraSky|Override" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyWeatherOverrideVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds to blend in override on volume enter." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitBlendSeconds_MetaData[] = {
		{ "Category", "UltraSky|Override" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyWeatherOverrideVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds to blend out override on volume exit." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideBiome;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideCondition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterBlendSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitBlendSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAIUltraSkyWeatherOverrideVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyWeatherOverrideVolume, Mode), Z_Construct_UEnum_DAI_UltraSky_EDAIUltraSkyOverrideMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1854040550
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyWeatherOverrideVolume, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_OverrideBiome = { "OverrideBiome", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyWeatherOverrideVolume, OverrideBiome), Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideBiome_MetaData), NewProp_OverrideBiome_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_OverrideCondition = { "OverrideCondition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyWeatherOverrideVolume, OverrideCondition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideCondition_MetaData), NewProp_OverrideCondition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_EnterBlendSeconds = { "EnterBlendSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyWeatherOverrideVolume, EnterBlendSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterBlendSeconds_MetaData), NewProp_EnterBlendSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_ExitBlendSeconds = { "ExitBlendSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyWeatherOverrideVolume, ExitBlendSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitBlendSeconds_MetaData), NewProp_ExitBlendSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_OverrideBiome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_OverrideCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_EnterBlendSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::NewProp_ExitBlendSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::ClassParams = {
	&ADAIUltraSkyWeatherOverrideVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume()
{
	if (!Z_Registration_Info_UClass_ADAIUltraSkyWeatherOverrideVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAIUltraSkyWeatherOverrideVolume.OuterSingleton, Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADAIUltraSkyWeatherOverrideVolume.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<ADAIUltraSkyWeatherOverrideVolume>()
{
	return ADAIUltraSkyWeatherOverrideVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADAIUltraSkyWeatherOverrideVolume);
ADAIUltraSkyWeatherOverrideVolume::~ADAIUltraSkyWeatherOverrideVolume() {}
// End Class ADAIUltraSkyWeatherOverrideVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDAIUltraSkyOverrideMode_StaticEnum, TEXT("EDAIUltraSkyOverrideMode"), &Z_Registration_Info_UEnum_EDAIUltraSkyOverrideMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1854040550U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADAIUltraSkyWeatherOverrideVolume, ADAIUltraSkyWeatherOverrideVolume::StaticClass, TEXT("ADAIUltraSkyWeatherOverrideVolume"), &Z_Registration_Info_UClass_ADAIUltraSkyWeatherOverrideVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAIUltraSkyWeatherOverrideVolume), 827372491U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_1020303892(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyWeatherOverrideVolume_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
