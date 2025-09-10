// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyBiomeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyBiomeData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyBiomeData();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class UDAIUltraSkyBiomeData
void UDAIUltraSkyBiomeData::StaticRegisterNativesUDAIUltraSkyBiomeData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIUltraSkyBiomeData);
UClass* Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister()
{
	return UDAIUltraSkyBiomeData::StaticClass();
}
struct Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DAIUltraSkyBiomeData.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomeName_MetaData[] = {
		{ "Category", "Biome" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display/debug name for this biome." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCloudCoverage_MetaData[] = {
		{ "Category", "Biome|Sky" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target cloud coverage when biome fully applied (0 clear, 1 overcast)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCloudDensity_MetaData[] = {
		{ "Category", "Biome|Sky" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target cloud density shaping clouds (0 thin, 1 thick)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFogDensity_MetaData[] = {
		{ "Category", "Biome|Fog" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target exponential height fog density override." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParamCollection_MetaData[] = {
		{ "Category", "Biome|Materials" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional MPC providing scalar/vector parameters for materials." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPCScalarOverrides_MetaData[] = {
		{ "Category", "Biome|Materials" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scalar parameter overrides applied when biome fully blended in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPCVectorOverrides_MetaData[] = {
		{ "Category", "Biome|Materials" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector (linear color) overrides applied when biome fully blended in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionFX_MetaData[] = {
		{ "Category", "Biome|FX" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of weather condition name -> Niagara system to spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedBlendSeconds_MetaData[] = {
		{ "Category", "Biome" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBiomeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suggested seconds to blend when entering this biome." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BiomeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetCloudCoverage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetCloudDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetFogDensity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialParamCollection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MPCScalarOverrides_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MPCScalarOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MPCScalarOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MPCVectorOverrides_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MPCVectorOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MPCVectorOverrides;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConditionFX_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConditionFX_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ConditionFX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SuggestedBlendSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIUltraSkyBiomeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_BiomeName = { "BiomeName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyBiomeData, BiomeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomeName_MetaData), NewProp_BiomeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_TargetCloudCoverage = { "TargetCloudCoverage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyBiomeData, TargetCloudCoverage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCloudCoverage_MetaData), NewProp_TargetCloudCoverage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_TargetCloudDensity = { "TargetCloudDensity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyBiomeData, TargetCloudDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCloudDensity_MetaData), NewProp_TargetCloudDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_TargetFogDensity = { "TargetFogDensity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyBiomeData, TargetFogDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFogDensity_MetaData), NewProp_TargetFogDensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MaterialParamCollection = { "MaterialParamCollection", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyBiomeData, MaterialParamCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParamCollection_MetaData), NewProp_MaterialParamCollection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCScalarOverrides_ValueProp = { "MPCScalarOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCScalarOverrides_Key_KeyProp = { "MPCScalarOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCScalarOverrides = { "MPCScalarOverrides", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyBiomeData, MPCScalarOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPCScalarOverrides_MetaData), NewProp_MPCScalarOverrides_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCVectorOverrides_ValueProp = { "MPCVectorOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCVectorOverrides_Key_KeyProp = { "MPCVectorOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCVectorOverrides = { "MPCVectorOverrides", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyBiomeData, MPCVectorOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPCVectorOverrides_MetaData), NewProp_MPCVectorOverrides_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_ConditionFX_ValueProp = { "ConditionFX", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_ConditionFX_Key_KeyProp = { "ConditionFX_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_ConditionFX = { "ConditionFX", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyBiomeData, ConditionFX), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionFX_MetaData), NewProp_ConditionFX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_SuggestedBlendSeconds = { "SuggestedBlendSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyBiomeData, SuggestedBlendSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedBlendSeconds_MetaData), NewProp_SuggestedBlendSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_BiomeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_TargetCloudCoverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_TargetCloudDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_TargetFogDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MaterialParamCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCScalarOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCScalarOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCScalarOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCVectorOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCVectorOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_MPCVectorOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_ConditionFX_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_ConditionFX_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_ConditionFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::NewProp_SuggestedBlendSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::ClassParams = {
	&UDAIUltraSkyBiomeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIUltraSkyBiomeData()
{
	if (!Z_Registration_Info_UClass_UDAIUltraSkyBiomeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIUltraSkyBiomeData.OuterSingleton, Z_Construct_UClass_UDAIUltraSkyBiomeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIUltraSkyBiomeData.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<UDAIUltraSkyBiomeData>()
{
	return UDAIUltraSkyBiomeData::StaticClass();
}
UDAIUltraSkyBiomeData::UDAIUltraSkyBiomeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIUltraSkyBiomeData);
UDAIUltraSkyBiomeData::~UDAIUltraSkyBiomeData() {}
// End Class UDAIUltraSkyBiomeData

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBiomeData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIUltraSkyBiomeData, UDAIUltraSkyBiomeData::StaticClass, TEXT("UDAIUltraSkyBiomeData"), &Z_Registration_Info_UClass_UDAIUltraSkyBiomeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIUltraSkyBiomeData), 619168943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBiomeData_h_1048324253(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBiomeData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBiomeData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
