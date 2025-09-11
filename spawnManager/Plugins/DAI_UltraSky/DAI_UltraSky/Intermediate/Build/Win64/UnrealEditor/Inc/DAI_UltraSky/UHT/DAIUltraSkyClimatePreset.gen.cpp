// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyClimatePreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyClimatePreset() {}

// Begin Cross Module References
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyClimatePreset();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyClimatePreset_NoRegister();
DAI_ULTRASKY_API UScriptStruct* Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin ScriptStruct FDAIUltraSkyWeatherChoice
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAIUltraSkyWeatherChoice;
class UScriptStruct* FDAIUltraSkyWeatherChoice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAIUltraSkyWeatherChoice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAIUltraSkyWeatherChoice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice, (UObject*)Z_Construct_UPackage__Script_DAI_UltraSky(), TEXT("DAIUltraSkyWeatherChoice"));
	}
	return Z_Registration_Info_UScriptStruct_DAIUltraSkyWeatherChoice.OuterSingleton;
}
template<> DAI_ULTRASKY_API UScriptStruct* StaticStruct<FDAIUltraSkyWeatherChoice>()
{
	return FDAIUltraSkyWeatherChoice::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyClimatePreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Biome_MetaData[] = {
		{ "Category", "DAIUltraSkyWeatherChoice" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyClimatePreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biome applied when this weather condition is selected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "DAIUltraSkyWeatherChoice" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyClimatePreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weather condition name (e.g. Clear, Rain, Snow, Storm)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "DAIUltraSkyWeatherChoice" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyClimatePreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Relative selection weight within season (0 disables). Not auto-normalized." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Biome;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Condition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAIUltraSkyWeatherChoice>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::NewProp_Biome = { "Biome", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIUltraSkyWeatherChoice, Biome), Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Biome_MetaData), NewProp_Biome_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIUltraSkyWeatherChoice, Condition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIUltraSkyWeatherChoice, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::NewProp_Biome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
	nullptr,
	&NewStructOps,
	"DAIUltraSkyWeatherChoice",
	Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::PropPointers),
	sizeof(FDAIUltraSkyWeatherChoice),
	alignof(FDAIUltraSkyWeatherChoice),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice()
{
	if (!Z_Registration_Info_UScriptStruct_DAIUltraSkyWeatherChoice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAIUltraSkyWeatherChoice.InnerSingleton, Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAIUltraSkyWeatherChoice.InnerSingleton;
}
// End ScriptStruct FDAIUltraSkyWeatherChoice

// Begin Class UDAIUltraSkyClimatePreset
void UDAIUltraSkyClimatePreset::StaticRegisterNativesUDAIUltraSkyClimatePreset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIUltraSkyClimatePreset);
UClass* Z_Construct_UClass_UDAIUltraSkyClimatePreset_NoRegister()
{
	return UDAIUltraSkyClimatePreset::StaticClass();
}
struct Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Seasons: 0=Spring, 1=Summer, 2=Autumn, 3=Winter\n" },
#endif
		{ "IncludePath", "DAIUltraSkyClimatePreset.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyClimatePreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seasons: 0=Spring, 1=Summer, 2=Autumn, 3=Winter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringChoices_MetaData[] = {
		{ "Category", "DAI_UltraSky|Climate" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyClimatePreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring season weighted weather choices (picked by Weight probability)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummerChoices_MetaData[] = {
		{ "Category", "DAI_UltraSky|Climate" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyClimatePreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Summer season weather choices." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutumnChoices_MetaData[] = {
		{ "Category", "DAI_UltraSky|Climate" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyClimatePreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Autumn/Fall season weather choices." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinterChoices_MetaData[] = {
		{ "Category", "DAI_UltraSky|Climate" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyClimatePreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Winter season weather choices." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpringChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpringChoices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SummerChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SummerChoices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutumnChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutumnChoices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WinterChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WinterChoices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIUltraSkyClimatePreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_SpringChoices_Inner = { "SpringChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice, METADATA_PARAMS(0, nullptr) }; // 2376529447
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_SpringChoices = { "SpringChoices", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyClimatePreset, SpringChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringChoices_MetaData), NewProp_SpringChoices_MetaData) }; // 2376529447
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_SummerChoices_Inner = { "SummerChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice, METADATA_PARAMS(0, nullptr) }; // 2376529447
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_SummerChoices = { "SummerChoices", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyClimatePreset, SummerChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummerChoices_MetaData), NewProp_SummerChoices_MetaData) }; // 2376529447
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_AutumnChoices_Inner = { "AutumnChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice, METADATA_PARAMS(0, nullptr) }; // 2376529447
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_AutumnChoices = { "AutumnChoices", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyClimatePreset, AutumnChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutumnChoices_MetaData), NewProp_AutumnChoices_MetaData) }; // 2376529447
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_WinterChoices_Inner = { "WinterChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice, METADATA_PARAMS(0, nullptr) }; // 2376529447
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_WinterChoices = { "WinterChoices", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyClimatePreset, WinterChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinterChoices_MetaData), NewProp_WinterChoices_MetaData) }; // 2376529447
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_SpringChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_SpringChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_SummerChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_SummerChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_AutumnChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_AutumnChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_WinterChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::NewProp_WinterChoices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::ClassParams = {
	&UDAIUltraSkyClimatePreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIUltraSkyClimatePreset()
{
	if (!Z_Registration_Info_UClass_UDAIUltraSkyClimatePreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIUltraSkyClimatePreset.OuterSingleton, Z_Construct_UClass_UDAIUltraSkyClimatePreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIUltraSkyClimatePreset.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<UDAIUltraSkyClimatePreset>()
{
	return UDAIUltraSkyClimatePreset::StaticClass();
}
UDAIUltraSkyClimatePreset::UDAIUltraSkyClimatePreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIUltraSkyClimatePreset);
UDAIUltraSkyClimatePreset::~UDAIUltraSkyClimatePreset() {}
// End Class UDAIUltraSkyClimatePreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyClimatePreset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDAIUltraSkyWeatherChoice::StaticStruct, Z_Construct_UScriptStruct_FDAIUltraSkyWeatherChoice_Statics::NewStructOps, TEXT("DAIUltraSkyWeatherChoice"), &Z_Registration_Info_UScriptStruct_DAIUltraSkyWeatherChoice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAIUltraSkyWeatherChoice), 2376529447U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIUltraSkyClimatePreset, UDAIUltraSkyClimatePreset::StaticClass, TEXT("UDAIUltraSkyClimatePreset"), &Z_Registration_Info_UClass_UDAIUltraSkyClimatePreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIUltraSkyClimatePreset), 4110681326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyClimatePreset_h_3759969141(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyClimatePreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyClimatePreset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyClimatePreset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyClimatePreset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
