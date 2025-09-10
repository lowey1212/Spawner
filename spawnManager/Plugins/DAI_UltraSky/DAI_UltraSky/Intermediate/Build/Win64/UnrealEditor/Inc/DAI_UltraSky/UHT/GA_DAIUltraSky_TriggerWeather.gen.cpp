// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/GA_DAIUltraSky_TriggerWeather.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_DAIUltraSky_TriggerWeather() {}

// Begin Cross Module References
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class UGA_DAIUltraSky_TriggerWeather
void UGA_DAIUltraSky_TriggerWeather::StaticRegisterNativesUGA_DAIUltraSky_TriggerWeather()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_DAIUltraSky_TriggerWeather);
UClass* Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_NoRegister()
{
	return UGA_DAIUltraSky_TriggerWeather::StaticClass();
}
struct Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GA_DAIUltraSky_TriggerWeather.h" },
		{ "ModuleRelativePath", "Public/GA_DAIUltraSky_TriggerWeather.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionName_MetaData[] = {
		{ "Category", "UltraSky|Ability" },
		{ "ModuleRelativePath", "Public/GA_DAIUltraSky_TriggerWeather.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weather condition to set (leave None to only change biome)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBiome_MetaData[] = {
		{ "Category", "UltraSky|Ability" },
		{ "ModuleRelativePath", "Public/GA_DAIUltraSky_TriggerWeather.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biome to apply (optional)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomeBlendSeconds_MetaData[] = {
		{ "Category", "UltraSky|Ability" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GA_DAIUltraSky_TriggerWeather.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds to blend into TargetBiome if provided." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConditionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetBiome;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BiomeBlendSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_DAIUltraSky_TriggerWeather>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::NewProp_ConditionName = { "ConditionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_DAIUltraSky_TriggerWeather, ConditionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionName_MetaData), NewProp_ConditionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::NewProp_TargetBiome = { "TargetBiome", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_DAIUltraSky_TriggerWeather, TargetBiome), Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBiome_MetaData), NewProp_TargetBiome_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::NewProp_BiomeBlendSeconds = { "BiomeBlendSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_DAIUltraSky_TriggerWeather, BiomeBlendSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomeBlendSeconds_MetaData), NewProp_BiomeBlendSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::NewProp_ConditionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::NewProp_TargetBiome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::NewProp_BiomeBlendSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::ClassParams = {
	&UGA_DAIUltraSky_TriggerWeather::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather()
{
	if (!Z_Registration_Info_UClass_UGA_DAIUltraSky_TriggerWeather.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_DAIUltraSky_TriggerWeather.OuterSingleton, Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_DAIUltraSky_TriggerWeather.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<UGA_DAIUltraSky_TriggerWeather>()
{
	return UGA_DAIUltraSky_TriggerWeather::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_DAIUltraSky_TriggerWeather);
UGA_DAIUltraSky_TriggerWeather::~UGA_DAIUltraSky_TriggerWeather() {}
// End Class UGA_DAIUltraSky_TriggerWeather

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_GA_DAIUltraSky_TriggerWeather_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_DAIUltraSky_TriggerWeather, UGA_DAIUltraSky_TriggerWeather::StaticClass, TEXT("UGA_DAIUltraSky_TriggerWeather"), &Z_Registration_Info_UClass_UGA_DAIUltraSky_TriggerWeather, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_DAIUltraSky_TriggerWeather), 4050838441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_GA_DAIUltraSky_TriggerWeather_h_2334046633(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_GA_DAIUltraSky_TriggerWeather_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_GA_DAIUltraSky_TriggerWeather_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
