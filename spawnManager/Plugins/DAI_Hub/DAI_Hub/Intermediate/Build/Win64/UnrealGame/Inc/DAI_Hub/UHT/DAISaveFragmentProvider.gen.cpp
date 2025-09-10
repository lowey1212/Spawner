// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/Interfaces/DAISaveFragmentProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAISaveFragmentProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DAI_HUB_API UClass* Z_Construct_UClass_UDAISaveFragmentProvider();
DAI_HUB_API UClass* Z_Construct_UClass_UDAISaveFragmentProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Interface UDAISaveFragmentProvider
void UDAISaveFragmentProvider::StaticRegisterNativesUDAISaveFragmentProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAISaveFragmentProvider);
UClass* Z_Construct_UClass_UDAISaveFragmentProvider_NoRegister()
{
	return UDAISaveFragmentProvider::StaticClass();
}
struct Z_Construct_UClass_UDAISaveFragmentProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DAISaveFragmentProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDAISaveFragmentProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAISaveFragmentProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAISaveFragmentProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAISaveFragmentProvider_Statics::ClassParams = {
	&UDAISaveFragmentProvider::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAISaveFragmentProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAISaveFragmentProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAISaveFragmentProvider()
{
	if (!Z_Registration_Info_UClass_UDAISaveFragmentProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAISaveFragmentProvider.OuterSingleton, Z_Construct_UClass_UDAISaveFragmentProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAISaveFragmentProvider.OuterSingleton;
}
template<> DAI_HUB_API UClass* StaticClass<UDAISaveFragmentProvider>()
{
	return UDAISaveFragmentProvider::StaticClass();
}
UDAISaveFragmentProvider::UDAISaveFragmentProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAISaveFragmentProvider);
UDAISaveFragmentProvider::~UDAISaveFragmentProvider() {}
// End Interface UDAISaveFragmentProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAISaveFragmentProvider, UDAISaveFragmentProvider::StaticClass, TEXT("UDAISaveFragmentProvider"), &Z_Registration_Info_UClass_UDAISaveFragmentProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAISaveFragmentProvider), 4191000570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_1424279374(TEXT("/Script/DAI_Hub"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISaveFragmentProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
