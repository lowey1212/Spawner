// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/DAI/Core/Interfaces/IDAI_Provider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDAI_Provider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DAI_HUB_API UClass* Z_Construct_UClass_UDAI_Provider();
DAI_HUB_API UClass* Z_Construct_UClass_UDAI_Provider_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Interface UDAI_Provider
void UDAI_Provider::StaticRegisterNativesUDAI_Provider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAI_Provider);
UClass* Z_Construct_UClass_UDAI_Provider_NoRegister()
{
	return UDAI_Provider::StaticClass();
}
struct Z_Construct_UClass_UDAI_Provider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DAI/Core/Interfaces/IDAI_Provider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDAI_Provider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAI_Provider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAI_Provider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAI_Provider_Statics::ClassParams = {
	&UDAI_Provider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAI_Provider_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAI_Provider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAI_Provider()
{
	if (!Z_Registration_Info_UClass_UDAI_Provider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAI_Provider.OuterSingleton, Z_Construct_UClass_UDAI_Provider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAI_Provider.OuterSingleton;
}
template<> DAI_HUB_API UClass* StaticClass<UDAI_Provider>()
{
	return UDAI_Provider::StaticClass();
}
UDAI_Provider::UDAI_Provider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAI_Provider);
UDAI_Provider::~UDAI_Provider() {}
// End Interface UDAI_Provider

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Provider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAI_Provider, UDAI_Provider::StaticClass, TEXT("UDAI_Provider"), &Z_Registration_Info_UClass_UDAI_Provider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAI_Provider), 1641682183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Provider_h_1177927684(TEXT("/Script/DAI_Hub"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Provider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAI_Core_Interfaces_IDAI_Provider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
