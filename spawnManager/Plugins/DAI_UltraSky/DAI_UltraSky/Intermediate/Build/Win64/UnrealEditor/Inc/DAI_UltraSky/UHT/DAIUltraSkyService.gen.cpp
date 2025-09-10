// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/Interfaces/DAIUltraSkyService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyService() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyService();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyService_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Interface UDAIUltraSkyService
void UDAIUltraSkyService::StaticRegisterNativesUDAIUltraSkyService()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIUltraSkyService);
UClass* Z_Construct_UClass_UDAIUltraSkyService_NoRegister()
{
	return UDAIUltraSkyService::StaticClass();
}
struct Z_Construct_UClass_UDAIUltraSkyService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/DAIUltraSkyService.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDAIUltraSkyService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAIUltraSkyService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIUltraSkyService_Statics::ClassParams = {
	&UDAIUltraSkyService::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyService_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIUltraSkyService_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIUltraSkyService()
{
	if (!Z_Registration_Info_UClass_UDAIUltraSkyService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIUltraSkyService.OuterSingleton, Z_Construct_UClass_UDAIUltraSkyService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIUltraSkyService.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<UDAIUltraSkyService>()
{
	return UDAIUltraSkyService::StaticClass();
}
UDAIUltraSkyService::UDAIUltraSkyService(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIUltraSkyService);
UDAIUltraSkyService::~UDAIUltraSkyService() {}
// End Interface UDAIUltraSkyService

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_Interfaces_DAIUltraSkyService_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIUltraSkyService, UDAIUltraSkyService::StaticClass, TEXT("UDAIUltraSkyService"), &Z_Registration_Info_UClass_UDAIUltraSkyService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIUltraSkyService), 3264961282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_Interfaces_DAIUltraSkyService_h_2575684779(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_Interfaces_DAIUltraSkyService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_Interfaces_DAIUltraSkyService_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
