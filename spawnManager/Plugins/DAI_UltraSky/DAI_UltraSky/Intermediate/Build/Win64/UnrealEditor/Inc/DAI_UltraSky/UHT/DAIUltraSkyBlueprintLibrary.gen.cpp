// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyActor_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class UDAIUltraSkyBlueprintLibrary Function ForceUltraSkyBiomeByName
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventForceUltraSkyBiomeByName_Parms
	{
		const UObject* WorldContextObject;
		FName BiomeAssetName;
		float BlendSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "CPP_Default_BlendSeconds", "0.000000" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BiomeAssetName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventForceUltraSkyBiomeByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::NewProp_BiomeAssetName = { "BiomeAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventForceUltraSkyBiomeByName_Parms, BiomeAssetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::NewProp_BlendSeconds = { "BlendSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventForceUltraSkyBiomeByName_Parms, BlendSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAIUltraSkyBlueprintLibrary_eventForceUltraSkyBiomeByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIUltraSkyBlueprintLibrary_eventForceUltraSkyBiomeByName_Parms), &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::NewProp_BiomeAssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::NewProp_BlendSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "ForceUltraSkyBiomeByName", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::DAIUltraSkyBlueprintLibrary_eventForceUltraSkyBiomeByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::DAIUltraSkyBlueprintLibrary_eventForceUltraSkyBiomeByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execForceUltraSkyBiomeByName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_BiomeAssetName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::ForceUltraSkyBiomeByName(Z_Param_WorldContextObject,Z_Param_BiomeAssetName,Z_Param_BlendSeconds);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function ForceUltraSkyBiomeByName

// Begin Class UDAIUltraSkyBlueprintLibrary Function ForceUltraSkyCondition
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventForceUltraSkyCondition_Parms
	{
		const UObject* WorldContextObject;
		FName ConditionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConditionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventForceUltraSkyCondition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::NewProp_ConditionName = { "ConditionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventForceUltraSkyCondition_Parms, ConditionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::NewProp_ConditionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "ForceUltraSkyCondition", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::DAIUltraSkyBlueprintLibrary_eventForceUltraSkyCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::DAIUltraSkyBlueprintLibrary_eventForceUltraSkyCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execForceUltraSkyCondition)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_ConditionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIUltraSkyBlueprintLibrary::ForceUltraSkyCondition(Z_Param_WorldContextObject,Z_Param_ConditionName);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function ForceUltraSkyCondition

// Begin Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyActorFromService
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventGetUltraSkyActorFromService_Parms
	{
		const UObject* WorldContextObject;
		ADAIUltraSkyActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Find the first Ultra Sky actor in the world.\n" },
#endif
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find the first Ultra Sky actor in the world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyActorFromService_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyActorFromService_Parms, ReturnValue), Z_Construct_UClass_ADAIUltraSkyActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "GetUltraSkyActorFromService", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyActorFromService_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyActorFromService_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execGetUltraSkyActorFromService)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADAIUltraSkyActor**)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::GetUltraSkyActorFromService(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyActorFromService

// Begin Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyBiome
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventGetUltraSkyBiome_Parms
	{
		const UObject* WorldContextObject;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyBiome_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyBiome_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "GetUltraSkyBiome", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyBiome_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyBiome_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execGetUltraSkyBiome)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::GetUltraSkyBiome(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyBiome

// Begin Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyCondition
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventGetUltraSkyCondition_Parms
	{
		const UObject* WorldContextObject;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyCondition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyCondition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "GetUltraSkyCondition", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execGetUltraSkyCondition)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::GetUltraSkyCondition(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyCondition

// Begin Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyIsPrecipitating
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsPrecipitating_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsPrecipitating_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsPrecipitating_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsPrecipitating_Parms), &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "GetUltraSkyIsPrecipitating", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsPrecipitating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsPrecipitating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execGetUltraSkyIsPrecipitating)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::GetUltraSkyIsPrecipitating(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyIsPrecipitating

// Begin Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyIsStorming
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsStorming_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsStorming_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsStorming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsStorming_Parms), &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "GetUltraSkyIsStorming", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsStorming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyIsStorming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execGetUltraSkyIsStorming)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::GetUltraSkyIsStorming(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyIsStorming

// Begin Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkySnowAccum
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventGetUltraSkySnowAccum_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkySnowAccum_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkySnowAccum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "GetUltraSkySnowAccum", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkySnowAccum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkySnowAccum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execGetUltraSkySnowAccum)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::GetUltraSkySnowAccum(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkySnowAccum

// Begin Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyTimeOfDay
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventGetUltraSkyTimeOfDay_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyTimeOfDay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyTimeOfDay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "GetUltraSkyTimeOfDay", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyTimeOfDay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyTimeOfDay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execGetUltraSkyTimeOfDay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::GetUltraSkyTimeOfDay(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyTimeOfDay

// Begin Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyWetness
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWetness_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWetness_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWetness_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "GetUltraSkyWetness", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWetness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWetness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execGetUltraSkyWetness)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::GetUltraSkyWetness(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyWetness

// Begin Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyWindDirection
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWindDirection_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWindDirection_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWindDirection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "GetUltraSkyWindDirection", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWindDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWindDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execGetUltraSkyWindDirection)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::GetUltraSkyWindDirection(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyWindDirection

// Begin Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyWindIntensity
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWindIntensity_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWindIntensity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWindIntensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "GetUltraSkyWindIntensity", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWindIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::DAIUltraSkyBlueprintLibrary_eventGetUltraSkyWindIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execGetUltraSkyWindIntensity)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::GetUltraSkyWindIntensity(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function GetUltraSkyWindIntensity

// Begin Class UDAIUltraSkyBlueprintLibrary Function SetUltraSkyDayLength
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventSetUltraSkyDayLength_Parms
	{
		ADAIUltraSkyActor* UltraSky;
		float DayLengthSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UltraSky;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DayLengthSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::NewProp_UltraSky = { "UltraSky", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventSetUltraSkyDayLength_Parms, UltraSky), Z_Construct_UClass_ADAIUltraSkyActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::NewProp_DayLengthSeconds = { "DayLengthSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventSetUltraSkyDayLength_Parms, DayLengthSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::NewProp_UltraSky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::NewProp_DayLengthSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "SetUltraSkyDayLength", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::DAIUltraSkyBlueprintLibrary_eventSetUltraSkyDayLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::DAIUltraSkyBlueprintLibrary_eventSetUltraSkyDayLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execSetUltraSkyDayLength)
{
	P_GET_OBJECT(ADAIUltraSkyActor,Z_Param_UltraSky);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DayLengthSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIUltraSkyBlueprintLibrary::SetUltraSkyDayLength(Z_Param_UltraSky,Z_Param_DayLengthSeconds);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function SetUltraSkyDayLength

// Begin Class UDAIUltraSkyBlueprintLibrary Function SetUltraSkySnowThresholds
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventSetUltraSkySnowThresholds_Parms
	{
		const UObject* WorldContextObject;
		TArray<float> Thresholds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Service" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thresholds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thresholds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Thresholds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventSetUltraSkySnowThresholds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::NewProp_Thresholds_Inner = { "Thresholds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::NewProp_Thresholds = { "Thresholds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventSetUltraSkySnowThresholds_Parms, Thresholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thresholds_MetaData), NewProp_Thresholds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::NewProp_Thresholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::NewProp_Thresholds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "SetUltraSkySnowThresholds", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::DAIUltraSkyBlueprintLibrary_eventSetUltraSkySnowThresholds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::DAIUltraSkyBlueprintLibrary_eventSetUltraSkySnowThresholds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execSetUltraSkySnowThresholds)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(float,Z_Param_Out_Thresholds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIUltraSkyBlueprintLibrary::SetUltraSkySnowThresholds(Z_Param_WorldContextObject,Z_Param_Out_Thresholds);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function SetUltraSkySnowThresholds

// Begin Class UDAIUltraSkyBlueprintLibrary Function SetUltraSkyTime
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventSetUltraSkyTime_Parms
	{
		ADAIUltraSkyActor* UltraSky;
		float TimeOfDay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UltraSky;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::NewProp_UltraSky = { "UltraSky", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventSetUltraSkyTime_Parms, UltraSky), Z_Construct_UClass_ADAIUltraSkyActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventSetUltraSkyTime_Parms, TimeOfDay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::NewProp_UltraSky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::NewProp_TimeOfDay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "SetUltraSkyTime", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::DAIUltraSkyBlueprintLibrary_eventSetUltraSkyTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::DAIUltraSkyBlueprintLibrary_eventSetUltraSkyTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execSetUltraSkyTime)
{
	P_GET_OBJECT(ADAIUltraSkyActor,Z_Param_UltraSky);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfDay);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIUltraSkyBlueprintLibrary::SetUltraSkyTime(Z_Param_UltraSky,Z_Param_TimeOfDay);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function SetUltraSkyTime

// Begin Class UDAIUltraSkyBlueprintLibrary
void UDAIUltraSkyBlueprintLibrary::StaticRegisterNativesUDAIUltraSkyBlueprintLibrary()
{
	UClass* Class = UDAIUltraSkyBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceUltraSkyBiomeByName", &UDAIUltraSkyBlueprintLibrary::execForceUltraSkyBiomeByName },
		{ "ForceUltraSkyCondition", &UDAIUltraSkyBlueprintLibrary::execForceUltraSkyCondition },
		{ "GetUltraSkyActorFromService", &UDAIUltraSkyBlueprintLibrary::execGetUltraSkyActorFromService },
		{ "GetUltraSkyBiome", &UDAIUltraSkyBlueprintLibrary::execGetUltraSkyBiome },
		{ "GetUltraSkyCondition", &UDAIUltraSkyBlueprintLibrary::execGetUltraSkyCondition },
		{ "GetUltraSkyIsPrecipitating", &UDAIUltraSkyBlueprintLibrary::execGetUltraSkyIsPrecipitating },
		{ "GetUltraSkyIsStorming", &UDAIUltraSkyBlueprintLibrary::execGetUltraSkyIsStorming },
		{ "GetUltraSkySnowAccum", &UDAIUltraSkyBlueprintLibrary::execGetUltraSkySnowAccum },
		{ "GetUltraSkyTimeOfDay", &UDAIUltraSkyBlueprintLibrary::execGetUltraSkyTimeOfDay },
		{ "GetUltraSkyWetness", &UDAIUltraSkyBlueprintLibrary::execGetUltraSkyWetness },
		{ "GetUltraSkyWindDirection", &UDAIUltraSkyBlueprintLibrary::execGetUltraSkyWindDirection },
		{ "GetUltraSkyWindIntensity", &UDAIUltraSkyBlueprintLibrary::execGetUltraSkyWindIntensity },
		{ "SetUltraSkyDayLength", &UDAIUltraSkyBlueprintLibrary::execSetUltraSkyDayLength },
		{ "SetUltraSkySnowThresholds", &UDAIUltraSkyBlueprintLibrary::execSetUltraSkySnowThresholds },
		{ "SetUltraSkyTime", &UDAIUltraSkyBlueprintLibrary::execSetUltraSkyTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIUltraSkyBlueprintLibrary);
UClass* Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary_NoRegister()
{
	return UDAIUltraSkyBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DAIUltraSkyBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyBiomeByName, "ForceUltraSkyBiomeByName" }, // 3423877237
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_ForceUltraSkyCondition, "ForceUltraSkyCondition" }, // 2595898550
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyActorFromService, "GetUltraSkyActorFromService" }, // 3182488133
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyBiome, "GetUltraSkyBiome" }, // 1157760987
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyCondition, "GetUltraSkyCondition" }, // 20224665
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsPrecipitating, "GetUltraSkyIsPrecipitating" }, // 700911344
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyIsStorming, "GetUltraSkyIsStorming" }, // 1335407031
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkySnowAccum, "GetUltraSkySnowAccum" }, // 18507859
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyTimeOfDay, "GetUltraSkyTimeOfDay" }, // 1223824397
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWetness, "GetUltraSkyWetness" }, // 1198204632
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindDirection, "GetUltraSkyWindDirection" }, // 908878142
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_GetUltraSkyWindIntensity, "GetUltraSkyWindIntensity" }, // 3194400607
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyDayLength, "SetUltraSkyDayLength" }, // 1764084600
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkySnowThresholds, "SetUltraSkySnowThresholds" }, // 2781131688
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_SetUltraSkyTime, "SetUltraSkyTime" }, // 303809733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIUltraSkyBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary_Statics::ClassParams = {
	&UDAIUltraSkyBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UDAIUltraSkyBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIUltraSkyBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIUltraSkyBlueprintLibrary.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<UDAIUltraSkyBlueprintLibrary>()
{
	return UDAIUltraSkyBlueprintLibrary::StaticClass();
}
UDAIUltraSkyBlueprintLibrary::UDAIUltraSkyBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIUltraSkyBlueprintLibrary);
UDAIUltraSkyBlueprintLibrary::~UDAIUltraSkyBlueprintLibrary() {}
// End Class UDAIUltraSkyBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, UDAIUltraSkyBlueprintLibrary::StaticClass, TEXT("UDAIUltraSkyBlueprintLibrary"), &Z_Registration_Info_UClass_UDAIUltraSkyBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIUltraSkyBlueprintLibrary), 3649864371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_4230622375(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
