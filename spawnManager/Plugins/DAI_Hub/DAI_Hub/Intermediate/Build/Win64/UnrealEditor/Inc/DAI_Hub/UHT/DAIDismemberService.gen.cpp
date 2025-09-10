// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/Interfaces/DAIDismemberService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIDismemberService() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIDismemberService();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIDismemberService_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Interface UDAIDismemberService
void UDAIDismemberService::StaticRegisterNativesUDAIDismemberService()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIDismemberService);
UClass* Z_Construct_UClass_UDAIDismemberService_NoRegister()
{
	return UDAIDismemberService::StaticClass();
}
struct Z_Construct_UClass_UDAIDismemberService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/DAIDismemberService.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDAIDismemberService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAIDismemberService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIDismemberService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIDismemberService_Statics::ClassParams = {
	&UDAIDismemberService::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIDismemberService_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIDismemberService_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIDismemberService()
{
	if (!Z_Registration_Info_UClass_UDAIDismemberService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIDismemberService.OuterSingleton, Z_Construct_UClass_UDAIDismemberService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIDismemberService.OuterSingleton;
}
template<> DAI_HUB_API UClass* StaticClass<UDAIDismemberService>()
{
	return UDAIDismemberService::StaticClass();
}
UDAIDismemberService::UDAIDismemberService(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIDismemberService);
UDAIDismemberService::~UDAIDismemberService() {}
// End Interface UDAIDismemberService

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIDismemberService_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIDismemberService, UDAIDismemberService::StaticClass, TEXT("UDAIDismemberService"), &Z_Registration_Info_UClass_UDAIDismemberService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIDismemberService), 2053313815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIDismemberService_h_2939662961(TEXT("/Script/DAI_Hub"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIDismemberService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_DAIDismemberService_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
