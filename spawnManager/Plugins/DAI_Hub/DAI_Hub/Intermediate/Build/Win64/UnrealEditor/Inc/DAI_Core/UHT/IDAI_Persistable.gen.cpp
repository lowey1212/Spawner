// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Core/Public/DAI/Core/Interfaces/IDAI_Persistable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDAI_Persistable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DAI_CORE_API UClass* Z_Construct_UClass_UDAI_Persistable();
DAI_CORE_API UClass* Z_Construct_UClass_UDAI_Persistable_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Core();
// End Cross Module References

// Begin Interface UDAI_Persistable
void UDAI_Persistable::StaticRegisterNativesUDAI_Persistable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAI_Persistable);
UClass* Z_Construct_UClass_UDAI_Persistable_NoRegister()
{
	return UDAI_Persistable::StaticClass();
}
struct Z_Construct_UClass_UDAI_Persistable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAI/Core/Interfaces/IDAI_Persistable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDAI_Persistable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAI_Persistable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAI_Persistable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAI_Persistable_Statics::ClassParams = {
	&UDAI_Persistable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAI_Persistable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAI_Persistable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAI_Persistable()
{
	if (!Z_Registration_Info_UClass_UDAI_Persistable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAI_Persistable.OuterSingleton, Z_Construct_UClass_UDAI_Persistable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAI_Persistable.OuterSingleton;
}
template<> DAI_CORE_API UClass* StaticClass<UDAI_Persistable>()
{
	return UDAI_Persistable::StaticClass();
}
UDAI_Persistable::UDAI_Persistable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAI_Persistable);
UDAI_Persistable::~UDAI_Persistable() {}
// End Interface UDAI_Persistable

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Persistable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAI_Persistable, UDAI_Persistable::StaticClass, TEXT("UDAI_Persistable"), &Z_Registration_Info_UClass_UDAI_Persistable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAI_Persistable), 170636960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Persistable_h_3892316649(TEXT("/Script/DAI_Core"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Persistable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Interfaces_IDAI_Persistable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
