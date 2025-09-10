// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Core/Public/DAI/Core/Subsys/DAIWorldSubsystemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIWorldSubsystemBase() {}

// Begin Cross Module References
DAI_CORE_API UClass* Z_Construct_UClass_UDAIWorldSubsystemBase();
DAI_CORE_API UClass* Z_Construct_UClass_UDAIWorldSubsystemBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_DAI_Core();
// End Cross Module References

// Begin Class UDAIWorldSubsystemBase
void UDAIWorldSubsystemBase::StaticRegisterNativesUDAIWorldSubsystemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIWorldSubsystemBase);
UClass* Z_Construct_UClass_UDAIWorldSubsystemBase_NoRegister()
{
	return UDAIWorldSubsystemBase::StaticClass();
}
struct Z_Construct_UClass_UDAIWorldSubsystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DAI/Core/Subsys/DAIWorldSubsystemBase.h" },
		{ "ModuleRelativePath", "Public/DAI/Core/Subsys/DAIWorldSubsystemBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIWorldSubsystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAIWorldSubsystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIWorldSubsystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIWorldSubsystemBase_Statics::ClassParams = {
	&UDAIWorldSubsystemBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIWorldSubsystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIWorldSubsystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIWorldSubsystemBase()
{
	if (!Z_Registration_Info_UClass_UDAIWorldSubsystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIWorldSubsystemBase.OuterSingleton, Z_Construct_UClass_UDAIWorldSubsystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIWorldSubsystemBase.OuterSingleton;
}
template<> DAI_CORE_API UClass* StaticClass<UDAIWorldSubsystemBase>()
{
	return UDAIWorldSubsystemBase::StaticClass();
}
UDAIWorldSubsystemBase::UDAIWorldSubsystemBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIWorldSubsystemBase);
UDAIWorldSubsystemBase::~UDAIWorldSubsystemBase() {}
// End Class UDAIWorldSubsystemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Subsys_DAIWorldSubsystemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIWorldSubsystemBase, UDAIWorldSubsystemBase::StaticClass, TEXT("UDAIWorldSubsystemBase"), &Z_Registration_Info_UClass_UDAIWorldSubsystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIWorldSubsystemBase), 564020536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Subsys_DAIWorldSubsystemBase_h_1612878406(TEXT("/Script/DAI_Core"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Subsys_DAIWorldSubsystemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Subsys_DAIWorldSubsystemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
