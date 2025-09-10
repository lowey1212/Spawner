// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Core/Public/DAI/Core/Subsys/DAIGameSubsystemBase.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIGameSubsystemBase() {}

// Begin Cross Module References
DAI_CORE_API UClass* Z_Construct_UClass_UDAIGameSubsystemBase();
DAI_CORE_API UClass* Z_Construct_UClass_UDAIGameSubsystemBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_DAI_Core();
// End Cross Module References

// Begin Class UDAIGameSubsystemBase
void UDAIGameSubsystemBase::StaticRegisterNativesUDAIGameSubsystemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIGameSubsystemBase);
UClass* Z_Construct_UClass_UDAIGameSubsystemBase_NoRegister()
{
	return UDAIGameSubsystemBase::StaticClass();
}
struct Z_Construct_UClass_UDAIGameSubsystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DAI/Core/Subsys/DAIGameSubsystemBase.h" },
		{ "ModuleRelativePath", "Public/DAI/Core/Subsys/DAIGameSubsystemBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIGameSubsystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAIGameSubsystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIGameSubsystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIGameSubsystemBase_Statics::ClassParams = {
	&UDAIGameSubsystemBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIGameSubsystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIGameSubsystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIGameSubsystemBase()
{
	if (!Z_Registration_Info_UClass_UDAIGameSubsystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIGameSubsystemBase.OuterSingleton, Z_Construct_UClass_UDAIGameSubsystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIGameSubsystemBase.OuterSingleton;
}
template<> DAI_CORE_API UClass* StaticClass<UDAIGameSubsystemBase>()
{
	return UDAIGameSubsystemBase::StaticClass();
}
UDAIGameSubsystemBase::UDAIGameSubsystemBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIGameSubsystemBase);
UDAIGameSubsystemBase::~UDAIGameSubsystemBase() {}
// End Class UDAIGameSubsystemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Subsys_DAIGameSubsystemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIGameSubsystemBase, UDAIGameSubsystemBase::StaticClass, TEXT("UDAIGameSubsystemBase"), &Z_Registration_Info_UClass_UDAIGameSubsystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIGameSubsystemBase), 3008348904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Subsys_DAIGameSubsystemBase_h_611028929(TEXT("/Script/DAI_Core"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Subsys_DAIGameSubsystemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_Subsys_DAIGameSubsystemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
