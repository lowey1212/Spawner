// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyRadialStorm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyRadialStorm() {}

// Begin Cross Module References
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyRadialStorm();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyRadialStorm_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class ADAIUltraSkyRadialStorm
void ADAIUltraSkyRadialStorm::StaticRegisterNativesADAIUltraSkyRadialStorm()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAIUltraSkyRadialStorm);
UClass* Z_Construct_UClass_ADAIUltraSkyRadialStorm_NoRegister()
{
	return ADAIUltraSkyRadialStorm::StaticClass();
}
struct Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DAIUltraSkyRadialStorm.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyRadialStorm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[] = {
		{ "Category", "UltraSky|Storm" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyRadialStorm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outer radius of storm influence (world units)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerFraction_MetaData[] = {
		{ "Category", "UltraSky|Storm" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyRadialStorm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inner radius fraction used for eye/calm zone calculations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StormBiome_MetaData[] = {
		{ "Category", "UltraSky|Storm" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyRadialStorm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biome to apply while inside storm radius (optional)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StormCondition_MetaData[] = {
		{ "Category", "UltraSky|Storm" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyRadialStorm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weather condition name forced while inside storm (e.g. Storm, Rain)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "UltraSky|Storm" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyRadialStorm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Priority when multiple storms overlap (higher wins)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerFraction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StormBiome;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StormCondition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAIUltraSkyRadialStorm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyRadialStorm, OuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterRadius_MetaData), NewProp_OuterRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::NewProp_InnerFraction = { "InnerFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyRadialStorm, InnerFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerFraction_MetaData), NewProp_InnerFraction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::NewProp_StormBiome = { "StormBiome", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyRadialStorm, StormBiome), Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StormBiome_MetaData), NewProp_StormBiome_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::NewProp_StormCondition = { "StormCondition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyRadialStorm, StormCondition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StormCondition_MetaData), NewProp_StormCondition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyRadialStorm, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::NewProp_OuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::NewProp_InnerFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::NewProp_StormBiome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::NewProp_StormCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::ClassParams = {
	&ADAIUltraSkyRadialStorm::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::Class_MetaDataParams), Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADAIUltraSkyRadialStorm()
{
	if (!Z_Registration_Info_UClass_ADAIUltraSkyRadialStorm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAIUltraSkyRadialStorm.OuterSingleton, Z_Construct_UClass_ADAIUltraSkyRadialStorm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADAIUltraSkyRadialStorm.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<ADAIUltraSkyRadialStorm>()
{
	return ADAIUltraSkyRadialStorm::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADAIUltraSkyRadialStorm);
ADAIUltraSkyRadialStorm::~ADAIUltraSkyRadialStorm() {}
// End Class ADAIUltraSkyRadialStorm

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyRadialStorm_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADAIUltraSkyRadialStorm, ADAIUltraSkyRadialStorm::StaticClass, TEXT("ADAIUltraSkyRadialStorm"), &Z_Registration_Info_UClass_ADAIUltraSkyRadialStorm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAIUltraSkyRadialStorm), 428728080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyRadialStorm_h_255107170(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyRadialStorm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyRadialStorm_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
