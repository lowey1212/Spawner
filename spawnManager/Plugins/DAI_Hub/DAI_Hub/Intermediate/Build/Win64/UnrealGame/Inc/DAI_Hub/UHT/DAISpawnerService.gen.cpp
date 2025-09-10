// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/Interfaces/DAISpawnerService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAISpawnerService() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DAI_HUB_API UClass* Z_Construct_UClass_UDAISpawnerService();
DAI_HUB_API UClass* Z_Construct_UClass_UDAISpawnerService_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Interface UDAISpawnerService
void UDAISpawnerService::StaticRegisterNativesUDAISpawnerService()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAISpawnerService);
UClass* Z_Construct_UClass_UDAISpawnerService_NoRegister()
{
	return UDAISpawnerService::StaticClass();
}
struct Z_Construct_UClass_UDAISpawnerService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DAISpawnerService.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDAISpawnerService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAISpawnerService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAISpawnerService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAISpawnerService_Statics::ClassParams = {
	&UDAISpawnerService::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAISpawnerService_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAISpawnerService_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAISpawnerService()
{
	if (!Z_Registration_Info_UClass_UDAISpawnerService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAISpawnerService.OuterSingleton, Z_Construct_UClass_UDAISpawnerService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAISpawnerService.OuterSingleton;
}
template<> DAI_HUB_API UClass* StaticClass<UDAISpawnerService>()
{
	return UDAISpawnerService::StaticClass();
}
UDAISpawnerService::UDAISpawnerService(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAISpawnerService);
UDAISpawnerService::~UDAISpawnerService() {}
// End Interface UDAISpawnerService

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISpawnerService_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAISpawnerService, UDAISpawnerService::StaticClass, TEXT("UDAISpawnerService"), &Z_Registration_Info_UClass_UDAISpawnerService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAISpawnerService), 3387707526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISpawnerService_h_3789162095(TEXT("/Script/DAI_Hub"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISpawnerService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAISpawnerService_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
