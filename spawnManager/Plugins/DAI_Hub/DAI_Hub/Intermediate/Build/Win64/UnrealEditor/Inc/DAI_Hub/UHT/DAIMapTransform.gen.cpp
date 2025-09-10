// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/Interfaces/Map/DAIMapTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIMapTransform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DAI_HUB_API UScriptStruct* Z_Construct_UScriptStruct_FDAIMapTransform();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin ScriptStruct FDAIMapTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAIMapTransform;
class UScriptStruct* FDAIMapTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAIMapTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAIMapTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAIMapTransform, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("DAIMapTransform"));
	}
	return Z_Registration_Info_UScriptStruct_DAIMapTransform.OuterSingleton;
}
template<> DAI_HUB_API UScriptStruct* StaticStruct<FDAIMapTransform>()
{
	return FDAIMapTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAIMapTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOrigin_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldExtent_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NorthRotation_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetersPerPixel_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NorthRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MetersPerPixel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAIMapTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIMapTransform_Statics::NewProp_WorldOrigin = { "WorldOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIMapTransform, WorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOrigin_MetaData), NewProp_WorldOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIMapTransform_Statics::NewProp_WorldExtent = { "WorldExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIMapTransform, WorldExtent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldExtent_MetaData), NewProp_WorldExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDAIMapTransform_Statics::NewProp_NorthRotation = { "NorthRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIMapTransform, NorthRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NorthRotation_MetaData), NewProp_NorthRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDAIMapTransform_Statics::NewProp_MetersPerPixel = { "MetersPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIMapTransform, MetersPerPixel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetersPerPixel_MetaData), NewProp_MetersPerPixel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAIMapTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIMapTransform_Statics::NewProp_WorldOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIMapTransform_Statics::NewProp_WorldExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIMapTransform_Statics::NewProp_NorthRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIMapTransform_Statics::NewProp_MetersPerPixel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIMapTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAIMapTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	&NewStructOps,
	"DAIMapTransform",
	Z_Construct_UScriptStruct_FDAIMapTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIMapTransform_Statics::PropPointers),
	sizeof(FDAIMapTransform),
	alignof(FDAIMapTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIMapTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAIMapTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAIMapTransform()
{
	if (!Z_Registration_Info_UScriptStruct_DAIMapTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAIMapTransform.InnerSingleton, Z_Construct_UScriptStruct_FDAIMapTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAIMapTransform.InnerSingleton;
}
// End ScriptStruct FDAIMapTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDAIMapTransform::StaticStruct, Z_Construct_UScriptStruct_FDAIMapTransform_Statics::NewStructOps, TEXT("DAIMapTransform"), &Z_Registration_Info_UScriptStruct_DAIMapTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAIMapTransform), 2728833568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTransform_h_261755327(TEXT("/Script/DAI_Hub"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
