// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/DAIHubSubsystem.h"
#include "DAI_Hub/Public/DAIHubEventPayload.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIHubSubsystem() {}

// Begin Cross Module References
DAI_HUB_API UClass* Z_Construct_UClass_UDAIHubSubsystem();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIHubSubsystem_NoRegister();
DAI_HUB_API UFunction* Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature();
DAI_HUB_API UScriptStruct* Z_Construct_UScriptStruct_FDAIHubEventPayload();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Delegate FDAIHubEventBPDelegate
struct Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics
{
	struct _Script_DAI_Hub_eventDAIHubEventBPDelegate_Parms
	{
		FDAIHubEventPayload Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dynamic delegate used for Blueprint subscriptions to hub events\n" },
#endif
		{ "ModuleRelativePath", "Public/DAIHubSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate used for Blueprint subscriptions to hub events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DAI_Hub_eventDAIHubEventBPDelegate_Parms, Event), Z_Construct_UScriptStruct_FDAIHubEventPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 2619084842
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DAI_Hub, nullptr, "DAIHubEventBPDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::_Script_DAI_Hub_eventDAIHubEventBPDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::_Script_DAI_Hub_eventDAIHubEventBPDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDAIHubEventBPDelegate_DelegateWrapper(const FScriptDelegate& DAIHubEventBPDelegate, FDAIHubEventPayload const& Event)
{
	struct _Script_DAI_Hub_eventDAIHubEventBPDelegate_Parms
	{
		FDAIHubEventPayload Event;
	};
	_Script_DAI_Hub_eventDAIHubEventBPDelegate_Parms Parms;
	Parms.Event=Event;
	DAIHubEventBPDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDAIHubEventBPDelegate

// Begin Class UDAIHubSubsystem
void UDAIHubSubsystem::StaticRegisterNativesUDAIHubSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIHubSubsystem);
UClass* Z_Construct_UClass_UDAIHubSubsystem_NoRegister()
{
	return UDAIHubSubsystem::StaticClass();
}
struct Z_Construct_UClass_UDAIHubSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DAIHubSubsystem.h" },
		{ "ModuleRelativePath", "Public/DAIHubSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIHubSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAIHubSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIHubSubsystem_Statics::ClassParams = {
	&UDAIHubSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIHubSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIHubSubsystem()
{
	if (!Z_Registration_Info_UClass_UDAIHubSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIHubSubsystem.OuterSingleton, Z_Construct_UClass_UDAIHubSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIHubSubsystem.OuterSingleton;
}
template<> DAI_HUB_API UClass* StaticClass<UDAIHubSubsystem>()
{
	return UDAIHubSubsystem::StaticClass();
}
UDAIHubSubsystem::UDAIHubSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIHubSubsystem);
UDAIHubSubsystem::~UDAIHubSubsystem() {}
// End Class UDAIHubSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIHubSubsystem, UDAIHubSubsystem::StaticClass, TEXT("UDAIHubSubsystem"), &Z_Registration_Info_UClass_UDAIHubSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIHubSubsystem), 3594775000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_1895442497(TEXT("/Script/DAI_Hub"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
