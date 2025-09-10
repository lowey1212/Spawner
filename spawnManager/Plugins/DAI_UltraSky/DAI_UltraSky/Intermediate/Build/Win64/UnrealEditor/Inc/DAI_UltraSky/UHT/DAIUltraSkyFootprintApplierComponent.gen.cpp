// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyFootprintApplierComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyFootprintApplierComponent() {}

// Begin Cross Module References
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyFootprintMask_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class UDAIUltraSkyFootprintApplierComponent Function ApplyNow
struct Z_Construct_UFunction_UDAIUltraSkyFootprintApplierComponent_ApplyNow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Footprints" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintApplierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyFootprintApplierComponent_ApplyNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent, nullptr, "ApplyNow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyFootprintApplierComponent_ApplyNow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyFootprintApplierComponent_ApplyNow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDAIUltraSkyFootprintApplierComponent_ApplyNow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyFootprintApplierComponent_ApplyNow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyFootprintApplierComponent::execApplyNow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyNow();
	P_NATIVE_END;
}
// End Class UDAIUltraSkyFootprintApplierComponent Function ApplyNow

// Begin Class UDAIUltraSkyFootprintApplierComponent
void UDAIUltraSkyFootprintApplierComponent::StaticRegisterNativesUDAIUltraSkyFootprintApplierComponent()
{
	UClass* Class = UDAIUltraSkyFootprintApplierComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyNow", &UDAIUltraSkyFootprintApplierComponent::execApplyNow },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIUltraSkyFootprintApplierComponent);
UClass* Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_NoRegister()
{
	return UDAIUltraSkyFootprintApplierComponent::StaticClass();
}
struct Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "IncludePath", "DAIUltraSkyFootprintApplierComponent.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintApplierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureParamName_MetaData[] = {
		{ "Category", "UltraSky|Footprints" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintApplierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material parameter name that will receive the footprint mask render target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootprintMask_MetaData[] = {
		{ "Category", "UltraSky|Footprints" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintApplierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicit footprint mask actor to sample. If unset and AutoFind enabled a nearby one is searched each refresh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFindNearestMask_MetaData[] = {
		{ "Category", "UltraSky|Footprints" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintApplierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true and no FootprintMask assigned the component finds nearest mask actor periodically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMID_MetaData[] = {
		{ "Category", "UltraSky|Footprints" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintApplierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true create per-mesh MID so parameter assignment is isolated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefreshInterval_MetaData[] = {
		{ "Category", "UltraSky|Footprints" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintApplierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds between automatic re-apply (rebind) passes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParamName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FootprintMask;
	static void NewProp_bAutoFindNearestMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFindNearestMask;
	static void NewProp_bCreateMID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDAIUltraSkyFootprintApplierComponent_ApplyNow, "ApplyNow" }, // 683817582
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIUltraSkyFootprintApplierComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_TextureParamName = { "TextureParamName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyFootprintApplierComponent, TextureParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureParamName_MetaData), NewProp_TextureParamName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_FootprintMask = { "FootprintMask", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyFootprintApplierComponent, FootprintMask), Z_Construct_UClass_ADAIUltraSkyFootprintMask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootprintMask_MetaData), NewProp_FootprintMask_MetaData) };
void Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_bAutoFindNearestMask_SetBit(void* Obj)
{
	((UDAIUltraSkyFootprintApplierComponent*)Obj)->bAutoFindNearestMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_bAutoFindNearestMask = { "bAutoFindNearestMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDAIUltraSkyFootprintApplierComponent), &Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_bAutoFindNearestMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFindNearestMask_MetaData), NewProp_bAutoFindNearestMask_MetaData) };
void Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_bCreateMID_SetBit(void* Obj)
{
	((UDAIUltraSkyFootprintApplierComponent*)Obj)->bCreateMID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_bCreateMID = { "bCreateMID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDAIUltraSkyFootprintApplierComponent), &Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_bCreateMID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateMID_MetaData), NewProp_bCreateMID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_RefreshInterval = { "RefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyFootprintApplierComponent, RefreshInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefreshInterval_MetaData), NewProp_RefreshInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_TextureParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_FootprintMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_bAutoFindNearestMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_bCreateMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::NewProp_RefreshInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::ClassParams = {
	&UDAIUltraSkyFootprintApplierComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent()
{
	if (!Z_Registration_Info_UClass_UDAIUltraSkyFootprintApplierComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIUltraSkyFootprintApplierComponent.OuterSingleton, Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIUltraSkyFootprintApplierComponent.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<UDAIUltraSkyFootprintApplierComponent>()
{
	return UDAIUltraSkyFootprintApplierComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIUltraSkyFootprintApplierComponent);
UDAIUltraSkyFootprintApplierComponent::~UDAIUltraSkyFootprintApplierComponent() {}
// End Class UDAIUltraSkyFootprintApplierComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyFootprintApplierComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIUltraSkyFootprintApplierComponent, UDAIUltraSkyFootprintApplierComponent::StaticClass, TEXT("UDAIUltraSkyFootprintApplierComponent"), &Z_Registration_Info_UClass_UDAIUltraSkyFootprintApplierComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIUltraSkyFootprintApplierComponent), 3509861283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyFootprintApplierComponent_h_2743502929(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyFootprintApplierComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyFootprintApplierComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
