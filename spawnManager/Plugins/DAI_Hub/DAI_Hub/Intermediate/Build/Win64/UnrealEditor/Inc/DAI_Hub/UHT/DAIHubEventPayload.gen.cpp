// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/DAIHubEventPayload.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIHubEventPayload() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DAI_HUB_API UScriptStruct* Z_Construct_UScriptStruct_FDAIHubEventPayload();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin ScriptStruct FDAIHubEventPayload
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAIHubEventPayload;
class UScriptStruct* FDAIHubEventPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAIHubEventPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAIHubEventPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAIHubEventPayload, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("DAIHubEventPayload"));
	}
	return Z_Registration_Info_UScriptStruct_DAIHubEventPayload.OuterSingleton;
}
template<> DAI_HUB_API UScriptStruct* StaticStruct<FDAIHubEventPayload>()
{
	return FDAIHubEventPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAIHubEventPayload.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[] = {
		{ "Categories", "Hub.Topic" },
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_Topic" },
		{ "ModuleRelativePath", "Public/DAIHubEventPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Topic. Visible in Blueprints." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_Sender" },
		{ "ModuleRelativePath", "Public/DAIHubEventPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Who sent this event (usually the object raising it)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_Instigator" },
		{ "ModuleRelativePath", "Public/DAIHubEventPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Who initiated this event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_Time" },
		{ "ModuleRelativePath", "Public/DAIHubEventPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game time when the event was raised." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_Reason" },
		{ "ModuleRelativePath", "Public/DAIHubEventPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reason for the event if any." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_Result" },
		{ "ModuleRelativePath", "Public/DAIHubEventPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result tag for the event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_Strength" },
		{ "ModuleRelativePath", "Public/DAIHubEventPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional strength value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_Velocity" },
		{ "ModuleRelativePath", "Public/DAIHubEventPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional velocity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_Context" },
		{ "ModuleRelativePath", "Public/DAIHubEventPayload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contextual tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Topic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAIHubEventPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIHubEventPayload, Topic), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topic_MetaData), NewProp_Topic_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIHubEventPayload, Sender), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sender_MetaData), NewProp_Sender_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIHubEventPayload, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIHubEventPayload, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIHubEventPayload, Reason), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIHubEventPayload, Result), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIHubEventPayload, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIHubEventPayload, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIHubEventPayload, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Sender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewProp_ContextTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	&NewStructOps,
	"DAIHubEventPayload",
	Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::PropPointers),
	sizeof(FDAIHubEventPayload),
	alignof(FDAIHubEventPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAIHubEventPayload()
{
	if (!Z_Registration_Info_UScriptStruct_DAIHubEventPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAIHubEventPayload.InnerSingleton, Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAIHubEventPayload.InnerSingleton;
}
// End ScriptStruct FDAIHubEventPayload

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubEventPayload_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDAIHubEventPayload::StaticStruct, Z_Construct_UScriptStruct_FDAIHubEventPayload_Statics::NewStructOps, TEXT("DAIHubEventPayload"), &Z_Registration_Info_UScriptStruct_DAIHubEventPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAIHubEventPayload), 2619084842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubEventPayload_h_3643197158(TEXT("/Script/DAI_Hub"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubEventPayload_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubEventPayload_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
