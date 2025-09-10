// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/Interfaces/Map/IDAIMapService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDAIMapService() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIMapService();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIMapService_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Interface UDAIMapService
void UDAIMapService::StaticRegisterNativesUDAIMapService()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIMapService);
UClass* Z_Construct_UClass_UDAIMapService_NoRegister()
{
	return UDAIMapService::StaticClass();
}
struct Z_Construct_UClass_UDAIMapService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/IDAIMapService.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDAIMapService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAIMapService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIMapService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIMapService_Statics::ClassParams = {
	&UDAIMapService::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIMapService_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIMapService_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIMapService()
{
	if (!Z_Registration_Info_UClass_UDAIMapService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIMapService.OuterSingleton, Z_Construct_UClass_UDAIMapService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIMapService.OuterSingleton;
}
template<> DAI_HUB_API UClass* StaticClass<UDAIMapService>()
{
	return UDAIMapService::StaticClass();
}
UDAIMapService::UDAIMapService(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIMapService);
UDAIMapService::~UDAIMapService() {}
// End Interface UDAIMapService

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIMapService, UDAIMapService::StaticClass, TEXT("UDAIMapService"), &Z_Registration_Info_UClass_UDAIMapService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIMapService), 839622598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_2193100749(TEXT("/Script/DAI_Hub"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_IDAIMapService_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
