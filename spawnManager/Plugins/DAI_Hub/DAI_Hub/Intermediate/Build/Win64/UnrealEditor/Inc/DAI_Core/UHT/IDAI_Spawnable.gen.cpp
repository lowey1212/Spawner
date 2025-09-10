// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Core/Public/DAI/Core/Interfaces/IDAI_Spawnable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDAI_Spawnable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DAI_CORE_API UClass* Z_Construct_UClass_UDAI_Spawnable();
DAI_CORE_API UClass* Z_Construct_UClass_UDAI_Spawnable_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Core();
// End Cross Module References

// Begin Interface UDAI_Spawnable
void UDAI_Spawnable::StaticRegisterNativesUDAI_Spawnable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAI_Spawnable);
UClass* Z_Construct_UClass_UDAI_Spawnable_NoRegister()
{
	return UDAI_Spawnable::StaticClass();
}
struct Z_Construct_UClass_UDAI_Spawnable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAI/Core/Interfaces/IDAI_Spawnable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDAI_Spawnable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAI_Spawnable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAI_Spawnable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAI_Spawnable_Statics::ClassParams = {
	&UDAI_Spawnable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAI_Spawnable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAI_Spawnable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAI_Spawnable()
{
	if (!Z_Registration_Info_UClass_UDAI_Spawnable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAI_Spawnable.OuterSingleton, Z_Construct_UClass_UDAI_Spawnable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAI_Spawnable.OuterSingleton;
}
template<> DAI_CORE_API UClass* StaticClass<UDAI_Spawnable>()
{
	return UDAI_Spawnable::StaticClass();
}
UDAI_Spawnable::UDAI_Spawnable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAI_Spawnable);
UDAI_Spawnable::~UDAI_Spawnable() {}
// End Interface UDAI_Spawnable

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Spawnable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAI_Spawnable, UDAI_Spawnable::StaticClass, TEXT("UDAI_Spawnable"), &Z_Registration_Info_UClass_UDAI_Spawnable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAI_Spawnable), 933185472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Spawnable_h_410963691(TEXT("/Script/DAI_Core"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Spawnable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Spawnable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
