// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Core/Public/DAI/Core/Interfaces/IDAI_FactionAware.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDAI_FactionAware() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DAI_CORE_API UClass* Z_Construct_UClass_UDAI_FactionAware();
DAI_CORE_API UClass* Z_Construct_UClass_UDAI_FactionAware_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Core();
// End Cross Module References

// Begin Interface UDAI_FactionAware
void UDAI_FactionAware::StaticRegisterNativesUDAI_FactionAware()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAI_FactionAware);
UClass* Z_Construct_UClass_UDAI_FactionAware_NoRegister()
{
	return UDAI_FactionAware::StaticClass();
}
struct Z_Construct_UClass_UDAI_FactionAware_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAI/Core/Interfaces/IDAI_FactionAware.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDAI_FactionAware>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAI_FactionAware_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAI_FactionAware_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAI_FactionAware_Statics::ClassParams = {
	&UDAI_FactionAware::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAI_FactionAware_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAI_FactionAware_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAI_FactionAware()
{
	if (!Z_Registration_Info_UClass_UDAI_FactionAware.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAI_FactionAware.OuterSingleton, Z_Construct_UClass_UDAI_FactionAware_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAI_FactionAware.OuterSingleton;
}
template<> DAI_CORE_API UClass* StaticClass<UDAI_FactionAware>()
{
	return UDAI_FactionAware::StaticClass();
}
UDAI_FactionAware::UDAI_FactionAware(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAI_FactionAware);
UDAI_FactionAware::~UDAI_FactionAware() {}
// End Interface UDAI_FactionAware

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_FactionAware_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAI_FactionAware, UDAI_FactionAware::StaticClass, TEXT("UDAI_FactionAware"), &Z_Registration_Info_UClass_UDAI_FactionAware, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAI_FactionAware), 174838323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_FactionAware_h_102969080(TEXT("/Script/DAI_Core"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_FactionAware_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_FactionAware_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
