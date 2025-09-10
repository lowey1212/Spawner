// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyBiomeVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyBiomeVolume() {}

// Begin Cross Module References
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyBiomeVolume();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyBiomeVolume_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class ADAIUltraSkyBiomeVolume
void ADAIUltraSkyBiomeVolume::StaticRegisterNativesADAIUltraSkyBiomeVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAIUltraSkyBiomeVolume);
UClass* Z_Construct_UClass_ADAIUltraSkyBiomeVolume_NoRegister()
{
	return ADAIUltraSkyBiomeVolume::StaticClass();
}
struct Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "DAIUltraSkyBiomeVolume.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Biome_MetaData[] = {
		{ "Category", "UltraSky|Biome" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biome data asset applied while actor inside volume." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "UltraSky|Biome" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher priority wins when volumes overlap." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Biome;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAIUltraSkyBiomeVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::NewProp_Biome = { "Biome", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyBiomeVolume, Biome), Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Biome_MetaData), NewProp_Biome_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyBiomeVolume, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::NewProp_Biome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::ClassParams = {
	&ADAIUltraSkyBiomeVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADAIUltraSkyBiomeVolume()
{
	if (!Z_Registration_Info_UClass_ADAIUltraSkyBiomeVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAIUltraSkyBiomeVolume.OuterSingleton, Z_Construct_UClass_ADAIUltraSkyBiomeVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADAIUltraSkyBiomeVolume.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<ADAIUltraSkyBiomeVolume>()
{
	return ADAIUltraSkyBiomeVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADAIUltraSkyBiomeVolume);
ADAIUltraSkyBiomeVolume::~ADAIUltraSkyBiomeVolume() {}
// End Class ADAIUltraSkyBiomeVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBiomeVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADAIUltraSkyBiomeVolume, ADAIUltraSkyBiomeVolume::StaticClass, TEXT("ADAIUltraSkyBiomeVolume"), &Z_Registration_Info_UClass_ADAIUltraSkyBiomeVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAIUltraSkyBiomeVolume), 974952903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBiomeVolume_h_1916394526(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBiomeVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBiomeVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
