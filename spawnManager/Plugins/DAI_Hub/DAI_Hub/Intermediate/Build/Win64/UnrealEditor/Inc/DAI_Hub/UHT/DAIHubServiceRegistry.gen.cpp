// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/DAI/Hub/DAIHubServiceRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIHubServiceRegistry() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIHubServiceRegistry();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIHubServiceRegistry_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Class UDAIHubServiceRegistry
void UDAIHubServiceRegistry::StaticRegisterNativesUDAIHubServiceRegistry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIHubServiceRegistry);
UClass* Z_Construct_UClass_UDAIHubServiceRegistry_NoRegister()
{
	return UDAIHubServiceRegistry::StaticClass();
}
struct Z_Construct_UClass_UDAIHubServiceRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DAI/Hub/DAIHubServiceRegistry.h" },
		{ "ModuleRelativePath", "Public/DAI/Hub/DAIHubServiceRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[] = {
		{ "ModuleRelativePath", "Public/DAI/Hub/DAIHubServiceRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Services_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Services_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Services;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIHubServiceRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAIHubServiceRegistry_Statics::NewProp_Services_ValueProp = { "Services", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDAIHubServiceRegistry_Statics::NewProp_Services_Key_KeyProp = { "Services_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDAIHubServiceRegistry_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIHubServiceRegistry, Services), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Services_MetaData), NewProp_Services_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAIHubServiceRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIHubServiceRegistry_Statics::NewProp_Services_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIHubServiceRegistry_Statics::NewProp_Services_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIHubServiceRegistry_Statics::NewProp_Services,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubServiceRegistry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAIHubServiceRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubServiceRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIHubServiceRegistry_Statics::ClassParams = {
	&UDAIHubServiceRegistry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDAIHubServiceRegistry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubServiceRegistry_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubServiceRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIHubServiceRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIHubServiceRegistry()
{
	if (!Z_Registration_Info_UClass_UDAIHubServiceRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIHubServiceRegistry.OuterSingleton, Z_Construct_UClass_UDAIHubServiceRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIHubServiceRegistry.OuterSingleton;
}
template<> DAI_HUB_API UClass* StaticClass<UDAIHubServiceRegistry>()
{
	return UDAIHubServiceRegistry::StaticClass();
}
UDAIHubServiceRegistry::UDAIHubServiceRegistry() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIHubServiceRegistry);
UDAIHubServiceRegistry::~UDAIHubServiceRegistry() {}
// End Class UDAIHubServiceRegistry

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Hub_DAIHubServiceRegistry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIHubServiceRegistry, UDAIHubServiceRegistry::StaticClass, TEXT("UDAIHubServiceRegistry"), &Z_Registration_Info_UClass_UDAIHubServiceRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIHubServiceRegistry), 3808749307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Hub_DAIHubServiceRegistry_h_3876006406(TEXT("/Script/DAI_Hub"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Hub_DAIHubServiceRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Hub_DAIHubServiceRegistry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
