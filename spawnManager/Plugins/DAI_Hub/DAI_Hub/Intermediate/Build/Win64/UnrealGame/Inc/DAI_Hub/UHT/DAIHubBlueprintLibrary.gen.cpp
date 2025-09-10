// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/DAIHubBlueprintLibrary.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIHubBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIHubBlueprintLibrary();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIHubBlueprintLibrary_NoRegister();
DAI_HUB_API UClass* Z_Construct_UClass_UDAIHubSubsystem_NoRegister();
DAI_HUB_API UFunction* Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Class UDAIHubBlueprintLibrary Function AcquirePerfBudget
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics
{
	struct DAIHubBlueprintLibrary_eventAcquirePerfBudget_Parms
	{
		UObject* WorldContextObject;
		FGameplayTag Channel;
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_AcquirePerfBudget" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reserve, release, or read the performance /n budget for a channel." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventAcquirePerfBudget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventAcquirePerfBudget_Parms, Channel), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventAcquirePerfBudget_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAIHubBlueprintLibrary_eventAcquirePerfBudget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIHubBlueprintLibrary_eventAcquirePerfBudget_Parms), &Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "AcquirePerfBudget", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::DAIHubBlueprintLibrary_eventAcquirePerfBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::DAIHubBlueprintLibrary_eventAcquirePerfBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execAcquirePerfBudget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_Channel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDAIHubBlueprintLibrary::AcquirePerfBudget(Z_Param_WorldContextObject,Z_Param_Channel,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function AcquirePerfBudget

// Begin Class UDAIHubBlueprintLibrary Function Despawn
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics
{
	struct DAIHubBlueprintLibrary_eventDespawn_Parms
	{
		UObject* WorldContextObject;
		FGuid SpawnHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_Despawn" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Despawn a previously spawned actor." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventDespawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::NewProp_SpawnHandle = { "SpawnHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventDespawn_Parms, SpawnHandle), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::NewProp_SpawnHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "Despawn", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::DAIHubBlueprintLibrary_eventDespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::DAIHubBlueprintLibrary_eventDespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execDespawn)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGuid,Z_Param_SpawnHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIHubBlueprintLibrary::Despawn(Z_Param_WorldContextObject,Z_Param_SpawnHandle);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function Despawn

// Begin Class UDAIHubBlueprintLibrary Function GetDiscoveredServices
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics
{
	struct DAIHubBlueprintLibrary_eventGetDiscoveredServices_Parms
	{
		UObject* WorldContextObject;
		TArray<FString> OutServiceNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub|Dev" },
		{ "DisplayName", "DAI_GetDiscoveredServices" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutServiceNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutServiceNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetDiscoveredServices_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::NewProp_OutServiceNames_Inner = { "OutServiceNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::NewProp_OutServiceNames = { "OutServiceNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetDiscoveredServices_Parms, OutServiceNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::NewProp_OutServiceNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::NewProp_OutServiceNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "GetDiscoveredServices", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::DAIHubBlueprintLibrary_eventGetDiscoveredServices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::DAIHubBlueprintLibrary_eventGetDiscoveredServices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execGetDiscoveredServices)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutServiceNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIHubBlueprintLibrary::GetDiscoveredServices(Z_Param_WorldContextObject,Z_Param_Out_OutServiceNames);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function GetDiscoveredServices

// Begin Class UDAIHubBlueprintLibrary Function GetFactionEventTopics
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics
{
	struct DAIHubBlueprintLibrary_eventGetFactionEventTopics_Parms
	{
		UObject* WorldContextObject;
		TArray<FGameplayTag> OutTopics;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub|Dev" },
		{ "DisplayName", "DAI_GetFactionEventTopics" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTopics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTopics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetFactionEventTopics_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::NewProp_OutTopics_Inner = { "OutTopics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::NewProp_OutTopics = { "OutTopics", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetFactionEventTopics_Parms, OutTopics), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::NewProp_OutTopics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::NewProp_OutTopics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "GetFactionEventTopics", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::DAIHubBlueprintLibrary_eventGetFactionEventTopics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::DAIHubBlueprintLibrary_eventGetFactionEventTopics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execGetFactionEventTopics)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_OutTopics);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIHubBlueprintLibrary::GetFactionEventTopics(Z_Param_WorldContextObject,Z_Param_Out_OutTopics);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function GetFactionEventTopics

// Begin Class UDAIHubBlueprintLibrary Function GetHub
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics
{
	struct DAIHubBlueprintLibrary_eventGetHub_Parms
	{
		UObject* WorldContextObject;
		UDAIHubSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_GetHub" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Hub." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetHub_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetHub_Parms, ReturnValue), Z_Construct_UClass_UDAIHubSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "GetHub", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::DAIHubBlueprintLibrary_eventGetHub_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::DAIHubBlueprintLibrary_eventGetHub_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execGetHub)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDAIHubSubsystem**)Z_Param__Result=UDAIHubBlueprintLibrary::GetHub(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function GetHub

// Begin Class UDAIHubBlueprintLibrary Function GetPerfBudget
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics
{
	struct DAIHubBlueprintLibrary_eventGetPerfBudget_Parms
	{
		UObject* WorldContextObject;
		FGameplayTag Channel;
		float OutLimit;
		float OutUsed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_GetPerfBudget" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Perf Budget." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetPerfBudget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetPerfBudget_Parms, Channel), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::NewProp_OutLimit = { "OutLimit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetPerfBudget_Parms, OutLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::NewProp_OutUsed = { "OutUsed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetPerfBudget_Parms, OutUsed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::NewProp_OutLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::NewProp_OutUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "GetPerfBudget", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::DAIHubBlueprintLibrary_eventGetPerfBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::DAIHubBlueprintLibrary_eventGetPerfBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execGetPerfBudget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_Channel);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLimit);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutUsed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIHubBlueprintLibrary::GetPerfBudget(Z_Param_WorldContextObject,Z_Param_Channel,Z_Param_Out_OutLimit,Z_Param_Out_OutUsed);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function GetPerfBudget

// Begin Class UDAIHubBlueprintLibrary Function GetRemainingPerfBudget
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics
{
	struct DAIHubBlueprintLibrary_eventGetRemainingPerfBudget_Parms
	{
		UObject* WorldContextObject;
		FGameplayTag Channel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_GetRemainingPerfBudget" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Remaining Perf Budget." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetRemainingPerfBudget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetRemainingPerfBudget_Parms, Channel), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventGetRemainingPerfBudget_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "GetRemainingPerfBudget", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::DAIHubBlueprintLibrary_eventGetRemainingPerfBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::DAIHubBlueprintLibrary_eventGetRemainingPerfBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execGetRemainingPerfBudget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIHubBlueprintLibrary::GetRemainingPerfBudget(Z_Param_WorldContextObject,Z_Param_Channel);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function GetRemainingPerfBudget

// Begin Class UDAIHubBlueprintLibrary Function ReleasePerfBudget
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics
{
	struct DAIHubBlueprintLibrary_eventReleasePerfBudget_Parms
	{
		UObject* WorldContextObject;
		FGameplayTag Channel;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_ReleasePerfBudget" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove or release release perf budget." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventReleasePerfBudget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventReleasePerfBudget_Parms, Channel), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventReleasePerfBudget_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "ReleasePerfBudget", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::DAIHubBlueprintLibrary_eventReleasePerfBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::DAIHubBlueprintLibrary_eventReleasePerfBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execReleasePerfBudget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_Channel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIHubBlueprintLibrary::ReleasePerfBudget(Z_Param_WorldContextObject,Z_Param_Channel,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function ReleasePerfBudget

// Begin Class UDAIHubBlueprintLibrary Function RequestSave
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics
{
	struct DAIHubBlueprintLibrary_eventRequestSave_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_RequestSave" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a save operation." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventRequestSave_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "RequestSave", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::DAIHubBlueprintLibrary_eventRequestSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::DAIHubBlueprintLibrary_eventRequestSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execRequestSave)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIHubBlueprintLibrary::RequestSave(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function RequestSave

// Begin Class UDAIHubBlueprintLibrary Function RequestSpawn
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics
{
	struct DAIHubBlueprintLibrary_eventRequestSpawn_Parms
	{
		UObject* WorldContextObject;
		FGameplayTag SpawnTag;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_RequestSpawn" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a spawn by tag." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventRequestSpawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::NewProp_SpawnTag = { "SpawnTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventRequestSpawn_Parms, SpawnTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventRequestSpawn_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::NewProp_SpawnTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "RequestSpawn", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::DAIHubBlueprintLibrary_eventRequestSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::DAIHubBlueprintLibrary_eventRequestSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execRequestSpawn)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_SpawnTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UDAIHubBlueprintLibrary::RequestSpawn(Z_Param_WorldContextObject,Z_Param_SpawnTag);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function RequestSpawn

// Begin Class UDAIHubBlueprintLibrary Function SubscribeToTopic
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics
{
	struct DAIHubBlueprintLibrary_eventSubscribeToTopic_Parms
	{
		UObject* WorldContextObject;
		FGameplayTag Topic;
		FScriptDelegate Handler;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Handler" },
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_SubscribeToTopic" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribe to a hub topic." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Topic;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Handler;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventSubscribeToTopic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventSubscribeToTopic_Parms, Topic), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::NewProp_Handler = { "Handler", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventSubscribeToTopic_Parms, Handler), Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handler_MetaData), NewProp_Handler_MetaData) }; // 124776312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventSubscribeToTopic_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::NewProp_Topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::NewProp_Handler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "SubscribeToTopic", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::DAIHubBlueprintLibrary_eventSubscribeToTopic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::DAIHubBlueprintLibrary_eventSubscribeToTopic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execSubscribeToTopic)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_Topic);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Handler);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UDAIHubBlueprintLibrary::SubscribeToTopic(Z_Param_WorldContextObject,Z_Param_Topic,FDAIHubEventBPDelegate(Z_Param_Out_Handler));
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function SubscribeToTopic

// Begin Class UDAIHubBlueprintLibrary Function UnsubscribeFromTopic
struct Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics
{
	struct DAIHubBlueprintLibrary_eventUnsubscribeFromTopic_Parms
	{
		UObject* WorldContextObject;
		FGuid Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI|Hub" },
		{ "DisplayName", "DAI_UnsubscribeFromTopic" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unsubscribe from a hub topic." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventUnsubscribeFromTopic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIHubBlueprintLibrary_eventUnsubscribeFromTopic_Parms, Handle), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIHubBlueprintLibrary, nullptr, "UnsubscribeFromTopic", nullptr, nullptr, Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::DAIHubBlueprintLibrary_eventUnsubscribeFromTopic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::DAIHubBlueprintLibrary_eventUnsubscribeFromTopic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIHubBlueprintLibrary::execUnsubscribeFromTopic)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGuid,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIHubBlueprintLibrary::UnsubscribeFromTopic(Z_Param_WorldContextObject,Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UDAIHubBlueprintLibrary Function UnsubscribeFromTopic

// Begin Class UDAIHubBlueprintLibrary
void UDAIHubBlueprintLibrary::StaticRegisterNativesUDAIHubBlueprintLibrary()
{
	UClass* Class = UDAIHubBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcquirePerfBudget", &UDAIHubBlueprintLibrary::execAcquirePerfBudget },
		{ "Despawn", &UDAIHubBlueprintLibrary::execDespawn },
		{ "GetDiscoveredServices", &UDAIHubBlueprintLibrary::execGetDiscoveredServices },
		{ "GetFactionEventTopics", &UDAIHubBlueprintLibrary::execGetFactionEventTopics },
		{ "GetHub", &UDAIHubBlueprintLibrary::execGetHub },
		{ "GetPerfBudget", &UDAIHubBlueprintLibrary::execGetPerfBudget },
		{ "GetRemainingPerfBudget", &UDAIHubBlueprintLibrary::execGetRemainingPerfBudget },
		{ "ReleasePerfBudget", &UDAIHubBlueprintLibrary::execReleasePerfBudget },
		{ "RequestSave", &UDAIHubBlueprintLibrary::execRequestSave },
		{ "RequestSpawn", &UDAIHubBlueprintLibrary::execRequestSpawn },
		{ "SubscribeToTopic", &UDAIHubBlueprintLibrary::execSubscribeToTopic },
		{ "UnsubscribeFromTopic", &UDAIHubBlueprintLibrary::execUnsubscribeFromTopic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIHubBlueprintLibrary);
UClass* Z_Construct_UClass_UDAIHubBlueprintLibrary_NoRegister()
{
	return UDAIHubBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UDAIHubBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DAIHubBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DAIHubBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_AcquirePerfBudget, "AcquirePerfBudget" }, // 1866955223
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_Despawn, "Despawn" }, // 1531427549
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetDiscoveredServices, "GetDiscoveredServices" }, // 3407496212
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetFactionEventTopics, "GetFactionEventTopics" }, // 2467632452
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetHub, "GetHub" }, // 3853656671
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetPerfBudget, "GetPerfBudget" }, // 1431431569
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_GetRemainingPerfBudget, "GetRemainingPerfBudget" }, // 1206026217
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_ReleasePerfBudget, "ReleasePerfBudget" }, // 3255944938
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSave, "RequestSave" }, // 1283194786
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_RequestSpawn, "RequestSpawn" }, // 3500971637
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_SubscribeToTopic, "SubscribeToTopic" }, // 1944038711
		{ &Z_Construct_UFunction_UDAIHubBlueprintLibrary_UnsubscribeFromTopic, "UnsubscribeFromTopic" }, // 1685731796
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIHubBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAIHubBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIHubBlueprintLibrary_Statics::ClassParams = {
	&UDAIHubBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIHubBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIHubBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIHubBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UDAIHubBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIHubBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDAIHubBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIHubBlueprintLibrary.OuterSingleton;
}
template<> DAI_HUB_API UClass* StaticClass<UDAIHubBlueprintLibrary>()
{
	return UDAIHubBlueprintLibrary::StaticClass();
}
UDAIHubBlueprintLibrary::UDAIHubBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIHubBlueprintLibrary);
UDAIHubBlueprintLibrary::~UDAIHubBlueprintLibrary() {}
// End Class UDAIHubBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIHubBlueprintLibrary, UDAIHubBlueprintLibrary::StaticClass, TEXT("UDAIHubBlueprintLibrary"), &Z_Registration_Info_UClass_UDAIHubBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIHubBlueprintLibrary), 961980009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_1204289459(TEXT("/Script/DAI_Hub"),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_DAIHubBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
