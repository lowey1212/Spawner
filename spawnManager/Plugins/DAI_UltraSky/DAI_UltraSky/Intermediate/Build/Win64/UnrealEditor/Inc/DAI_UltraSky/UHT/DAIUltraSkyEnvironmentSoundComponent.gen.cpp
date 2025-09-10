// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyEnvironmentSoundComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyEnvironmentSoundComponent() {}

// Begin Cross Module References
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyActor_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_NoRegister();
DAI_ULTRASKY_API UScriptStruct* Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin ScriptStruct FUltraSkyEnvSoundEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UltraSkyEnvSoundEntry;
class UScriptStruct* FUltraSkyEnvSoundEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UltraSkyEnvSoundEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UltraSkyEnvSoundEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry, (UObject*)Z_Construct_UPackage__Script_DAI_UltraSky(), TEXT("UltraSkyEnvSoundEntry"));
	}
	return Z_Registration_Info_UScriptStruct_UltraSkyEnvSoundEntry.OuterSingleton;
}
template<> DAI_ULTRASKY_API UScriptStruct* StaticStruct<FUltraSkyEnvSoundEntry>()
{
	return FUltraSkyEnvSoundEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyEnvironmentSoundComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "UltraSkyEnvSoundEntry" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyEnvironmentSoundComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weather condition name this sound applies to (e.g. Clear, Rain, Snow, Storm)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "UltraSkyEnvSoundEntry" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyEnvironmentSoundComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to loop while its Condition is active. NULL means ignored." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Condition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUltraSkyEnvSoundEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUltraSkyEnvSoundEntry, Condition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUltraSkyEnvSoundEntry, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::NewProp_Sound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
	nullptr,
	&NewStructOps,
	"UltraSkyEnvSoundEntry",
	Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::PropPointers),
	sizeof(FUltraSkyEnvSoundEntry),
	alignof(FUltraSkyEnvSoundEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry()
{
	if (!Z_Registration_Info_UScriptStruct_UltraSkyEnvSoundEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UltraSkyEnvSoundEntry.InnerSingleton, Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UltraSkyEnvSoundEntry.InnerSingleton;
}
// End ScriptStruct FUltraSkyEnvSoundEntry

// Begin Class UDAIUltraSkyEnvironmentSoundComponent
void UDAIUltraSkyEnvironmentSoundComponent::StaticRegisterNativesUDAIUltraSkyEnvironmentSoundComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIUltraSkyEnvironmentSoundComponent);
UClass* Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_NoRegister()
{
	return UDAIUltraSkyEnvironmentSoundComponent::StaticClass();
}
struct Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "IncludePath", "DAIUltraSkyEnvironmentSoundComponent.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyEnvironmentSoundComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "UltraSky|EnvSound" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyEnvironmentSoundComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false the component does nothing (no updates, no playback)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UltraSky_MetaData[] = {
		{ "Category", "UltraSky|EnvSound" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyEnvironmentSoundComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UltraSky actor providing current weather condition. Auto-found if not set at BeginPlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossfadeSeconds_MetaData[] = {
		{ "Category", "UltraSky|EnvSound" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyEnvironmentSoundComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds to fade between old and new condition loop (0 = immediate switch)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[] = {
		{ "Category", "UltraSky|EnvSound" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyEnvironmentSoundComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-condition looping ambience entries. First match used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAudio_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyEnvironmentSoundComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently playing condition loop." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadingOutAudio_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyEnvironmentSoundComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previous loop fading out during crossfade." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UltraSky;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossfadeSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sounds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadingOutAudio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIUltraSkyEnvironmentSoundComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UDAIUltraSkyEnvironmentSoundComponent*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDAIUltraSkyEnvironmentSoundComponent), &Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_UltraSky = { "UltraSky", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyEnvironmentSoundComponent, UltraSky), Z_Construct_UClass_ADAIUltraSkyActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UltraSky_MetaData), NewProp_UltraSky_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_CrossfadeSeconds = { "CrossfadeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyEnvironmentSoundComponent, CrossfadeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossfadeSeconds_MetaData), NewProp_CrossfadeSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_Sounds_Inner = { "Sounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry, METADATA_PARAMS(0, nullptr) }; // 4234727462
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyEnvironmentSoundComponent, Sounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sounds_MetaData), NewProp_Sounds_MetaData) }; // 4234727462
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_ActiveAudio = { "ActiveAudio", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyEnvironmentSoundComponent, ActiveAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAudio_MetaData), NewProp_ActiveAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_FadingOutAudio = { "FadingOutAudio", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyEnvironmentSoundComponent, FadingOutAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadingOutAudio_MetaData), NewProp_FadingOutAudio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_UltraSky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_CrossfadeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_Sounds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_Sounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_ActiveAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::NewProp_FadingOutAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::ClassParams = {
	&UDAIUltraSkyEnvironmentSoundComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent()
{
	if (!Z_Registration_Info_UClass_UDAIUltraSkyEnvironmentSoundComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIUltraSkyEnvironmentSoundComponent.OuterSingleton, Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIUltraSkyEnvironmentSoundComponent.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<UDAIUltraSkyEnvironmentSoundComponent>()
{
	return UDAIUltraSkyEnvironmentSoundComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIUltraSkyEnvironmentSoundComponent);
UDAIUltraSkyEnvironmentSoundComponent::~UDAIUltraSkyEnvironmentSoundComponent() {}
// End Class UDAIUltraSkyEnvironmentSoundComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyEnvironmentSoundComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUltraSkyEnvSoundEntry::StaticStruct, Z_Construct_UScriptStruct_FUltraSkyEnvSoundEntry_Statics::NewStructOps, TEXT("UltraSkyEnvSoundEntry"), &Z_Registration_Info_UScriptStruct_UltraSkyEnvSoundEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUltraSkyEnvSoundEntry), 4234727462U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIUltraSkyEnvironmentSoundComponent, UDAIUltraSkyEnvironmentSoundComponent::StaticClass, TEXT("UDAIUltraSkyEnvironmentSoundComponent"), &Z_Registration_Info_UClass_UDAIUltraSkyEnvironmentSoundComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIUltraSkyEnvironmentSoundComponent), 4285894142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyEnvironmentSoundComponent_h_2224977134(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyEnvironmentSoundComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyEnvironmentSoundComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyEnvironmentSoundComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyEnvironmentSoundComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
