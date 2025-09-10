// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/DAIHubDeveloperSettings.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIHubDeveloperSettings() {}

// Begin Cross Module References
DAI_HUB_API UClass* Z_Construct_UClass_UDAIHubDeveloperSettings();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIHubDeveloperSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Class UDAIHubDeveloperSettings
void UDAIHubDeveloperSettings::StaticRegisterNativesUDAIHubDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIHubDeveloperSettings);
UClass* Z_Construct_UClass_UDAIHubDeveloperSettings_NoRegister()
{
	return UDAIHubDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UDAIHubDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "DAI Hub" },
		{ "IncludePath", "DAIHubDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/DAIHubDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBudgets_MetaData[] = {
		{ "Category", "Budgets" },
		{ "ModuleRelativePath", "Public/DAIHubDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default perf budgets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/DAIHubDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable hub debug logs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultBudgets_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBudgets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultBudgets;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIHubDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::NewProp_DefaultBudgets_ValueProp = { "DefaultBudgets", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::NewProp_DefaultBudgets_Key_KeyProp = { "DefaultBudgets_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::NewProp_DefaultBudgets = { "DefaultBudgets", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIHubDeveloperSettings, DefaultBudgets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBudgets_MetaData), NewProp_DefaultBudgets_MetaData) }; // 1298103297
void Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((UDAIHubDeveloperSettings*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDAIHubDeveloperSettings), &Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::NewProp_DefaultBudgets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::NewProp_DefaultBudgets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::NewProp_DefaultBudgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::NewProp_bDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::ClassParams = {
	&UDAIHubDeveloperSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIHubDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UDAIHubDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIHubDeveloperSettings.OuterSingleton, Z_Construct_UClass_UDAIHubDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIHubDeveloperSettings.OuterSingleton;
}
template<> DAI_HUB_API UClass* StaticClass<UDAIHubDeveloperSettings>()
{
	return UDAIHubDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIHubDeveloperSettings);
UDAIHubDeveloperSettings::~UDAIHubDeveloperSettings() {}
// End Class UDAIHubDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIHubDeveloperSettings, UDAIHubDeveloperSettings::StaticClass, TEXT("UDAIHubDeveloperSettings"), &Z_Registration_Info_UClass_UDAIHubDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIHubDeveloperSettings), 2737876503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubDeveloperSettings_h_2300076329(TEXT("/Script/DAI_Hub"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
