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

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_ForceUltraSkyBiomeByName
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyBiomeByName_Parms
	{
		const UObject* WorldContextObject;
		FName BiomeAssetName;
		float BlendSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyBiomeByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::NewProp_BiomeAssetName = { "BiomeAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyBiomeByName_Parms, BiomeAssetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::NewProp_BlendSeconds = { "BlendSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyBiomeByName_Parms, BlendSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyBiomeByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyBiomeByName_Parms), &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::NewProp_BiomeAssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::NewProp_BlendSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_ForceUltraSkyBiomeByName", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyBiomeByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyBiomeByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_ForceUltraSkyBiomeByName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_BiomeAssetName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_ForceUltraSkyBiomeByName(Z_Param_WorldContextObject,Z_Param_BiomeAssetName,Z_Param_BlendSeconds);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_ForceUltraSkyBiomeByName

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_ForceUltraSkyCondition
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyCondition_Parms
	{
		const UObject* WorldContextObject;
		FName ConditionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyCondition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::NewProp_ConditionName = { "ConditionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyCondition_Parms, ConditionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::NewProp_ConditionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_ForceUltraSkyCondition", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_ForceUltraSkyCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_ForceUltraSkyCondition)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_ConditionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIUltraSkyBlueprintLibrary::DAI_ForceUltraSkyCondition(Z_Param_WorldContextObject,Z_Param_ConditionName);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_ForceUltraSkyCondition

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyActorFromService
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyActorFromService_Parms
	{
		const UObject* WorldContextObject;
		ADAIUltraSkyActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyActorFromService_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyActorFromService_Parms, ReturnValue), Z_Construct_UClass_ADAIUltraSkyActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_GetUltraSkyActorFromService", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyActorFromService_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyActorFromService_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyActorFromService)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADAIUltraSkyActor**)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyActorFromService(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyActorFromService

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyBiome
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyBiome_Parms
	{
		const UObject* WorldContextObject;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyBiome_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyBiome_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_GetUltraSkyBiome", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyBiome_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyBiome_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyBiome)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyBiome(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyBiome

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyCondition
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyCondition_Parms
	{
		const UObject* WorldContextObject;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyCondition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyCondition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_GetUltraSkyCondition", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyCondition)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyCondition(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyCondition

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyIsPrecipitating
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsPrecipitating_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsPrecipitating_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsPrecipitating_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsPrecipitating_Parms), &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_GetUltraSkyIsPrecipitating", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsPrecipitating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsPrecipitating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyIsPrecipitating)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyIsPrecipitating(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyIsPrecipitating

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyIsStorming
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsStorming_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsStorming_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsStorming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsStorming_Parms), &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_GetUltraSkyIsStorming", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsStorming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyIsStorming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyIsStorming)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyIsStorming(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyIsStorming

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkySnowAccum
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkySnowAccum_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkySnowAccum_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkySnowAccum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_GetUltraSkySnowAccum", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkySnowAccum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkySnowAccum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkySnowAccum)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkySnowAccum(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkySnowAccum

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyTimeOfDay
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyTimeOfDay_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyTimeOfDay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyTimeOfDay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_GetUltraSkyTimeOfDay", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyTimeOfDay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyTimeOfDay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyTimeOfDay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyTimeOfDay(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyTimeOfDay

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyWetness
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWetness_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWetness_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWetness_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_GetUltraSkyWetness", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWetness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWetness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyWetness)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyWetness(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyWetness

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyWindDirection
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWindDirection_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWindDirection_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWindDirection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_GetUltraSkyWindDirection", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWindDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWindDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyWindDirection)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyWindDirection(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyWindDirection

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyWindIntensity
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWindIntensity_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWindIntensity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWindIntensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_GetUltraSkyWindIntensity", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWindIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_GetUltraSkyWindIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyWindIntensity)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyWindIntensity(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_GetUltraSkyWindIntensity

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_SetUltraSkyDayLength
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkyDayLength_Parms
	{
		ADAIUltraSkyActor* UltraSky;
		float DayLengthSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UltraSky;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DayLengthSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::NewProp_UltraSky = { "UltraSky", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkyDayLength_Parms, UltraSky), Z_Construct_UClass_ADAIUltraSkyActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::NewProp_DayLengthSeconds = { "DayLengthSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkyDayLength_Parms, DayLengthSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::NewProp_UltraSky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::NewProp_DayLengthSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_SetUltraSkyDayLength", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkyDayLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkyDayLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_SetUltraSkyDayLength)
{
	P_GET_OBJECT(ADAIUltraSkyActor,Z_Param_UltraSky);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DayLengthSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIUltraSkyBlueprintLibrary::DAI_SetUltraSkyDayLength(Z_Param_UltraSky,Z_Param_DayLengthSeconds);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_SetUltraSkyDayLength

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_SetUltraSkySnowThresholds
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkySnowThresholds_Parms
	{
		const UObject* WorldContextObject;
		TArray<float> Thresholds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Service" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkySnowThresholds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::NewProp_Thresholds_Inner = { "Thresholds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::NewProp_Thresholds = { "Thresholds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkySnowThresholds_Parms, Thresholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thresholds_MetaData), NewProp_Thresholds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::NewProp_Thresholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::NewProp_Thresholds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_SetUltraSkySnowThresholds", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkySnowThresholds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkySnowThresholds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_SetUltraSkySnowThresholds)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(float,Z_Param_Out_Thresholds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIUltraSkyBlueprintLibrary::DAI_SetUltraSkySnowThresholds(Z_Param_WorldContextObject,Z_Param_Out_Thresholds);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_SetUltraSkySnowThresholds

// Begin Class UDAIUltraSkyBlueprintLibrary Function DAI_SetUltraSkyTime
struct Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics
{
	struct DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkyTime_Parms
	{
		ADAIUltraSkyActor* UltraSky;
		float TimeOfDay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UltraSky;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::NewProp_UltraSky = { "UltraSky", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkyTime_Parms, UltraSky), Z_Construct_UClass_ADAIUltraSkyActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkyTime_Parms, TimeOfDay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::NewProp_UltraSky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::NewProp_TimeOfDay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, nullptr, "DAI_SetUltraSkyTime", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkyTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::DAIUltraSkyBlueprintLibrary_eventDAI_SetUltraSkyTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyBlueprintLibrary::execDAI_SetUltraSkyTime)
{
	P_GET_OBJECT(ADAIUltraSkyActor,Z_Param_UltraSky);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfDay);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIUltraSkyBlueprintLibrary::DAI_SetUltraSkyTime(Z_Param_UltraSky,Z_Param_TimeOfDay);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyBlueprintLibrary Function DAI_SetUltraSkyTime

// Begin Class UDAIUltraSkyBlueprintLibrary
void UDAIUltraSkyBlueprintLibrary::StaticRegisterNativesUDAIUltraSkyBlueprintLibrary()
{
	UClass* Class = UDAIUltraSkyBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DAI_ForceUltraSkyBiomeByName", &UDAIUltraSkyBlueprintLibrary::execDAI_ForceUltraSkyBiomeByName },
		{ "DAI_ForceUltraSkyCondition", &UDAIUltraSkyBlueprintLibrary::execDAI_ForceUltraSkyCondition },
		{ "DAI_GetUltraSkyActorFromService", &UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyActorFromService },
		{ "DAI_GetUltraSkyBiome", &UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyBiome },
		{ "DAI_GetUltraSkyCondition", &UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyCondition },
		{ "DAI_GetUltraSkyIsPrecipitating", &UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyIsPrecipitating },
		{ "DAI_GetUltraSkyIsStorming", &UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyIsStorming },
		{ "DAI_GetUltraSkySnowAccum", &UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkySnowAccum },
		{ "DAI_GetUltraSkyTimeOfDay", &UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyTimeOfDay },
		{ "DAI_GetUltraSkyWetness", &UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyWetness },
		{ "DAI_GetUltraSkyWindDirection", &UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyWindDirection },
		{ "DAI_GetUltraSkyWindIntensity", &UDAIUltraSkyBlueprintLibrary::execDAI_GetUltraSkyWindIntensity },
		{ "DAI_SetUltraSkyDayLength", &UDAIUltraSkyBlueprintLibrary::execDAI_SetUltraSkyDayLength },
		{ "DAI_SetUltraSkySnowThresholds", &UDAIUltraSkyBlueprintLibrary::execDAI_SetUltraSkySnowThresholds },
		{ "DAI_SetUltraSkyTime", &UDAIUltraSkyBlueprintLibrary::execDAI_SetUltraSkyTime },
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
		{ "BlueprintType", "true" },
		{ "IncludePath", "DAIUltraSkyBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyBiomeByName, "DAI_ForceUltraSkyBiomeByName" }, // 2231164915
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_ForceUltraSkyCondition, "DAI_ForceUltraSkyCondition" }, // 2829920217
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyActorFromService, "DAI_GetUltraSkyActorFromService" }, // 686704413
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyBiome, "DAI_GetUltraSkyBiome" }, // 1446698658
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyCondition, "DAI_GetUltraSkyCondition" }, // 1533249747
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsPrecipitating, "DAI_GetUltraSkyIsPrecipitating" }, // 788613791
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyIsStorming, "DAI_GetUltraSkyIsStorming" }, // 2008813457
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkySnowAccum, "DAI_GetUltraSkySnowAccum" }, // 2521852138
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyTimeOfDay, "DAI_GetUltraSkyTimeOfDay" }, // 3473042975
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWetness, "DAI_GetUltraSkyWetness" }, // 1330398737
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindDirection, "DAI_GetUltraSkyWindDirection" }, // 892885403
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_GetUltraSkyWindIntensity, "DAI_GetUltraSkyWindIntensity" }, // 1167253019
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyDayLength, "DAI_SetUltraSkyDayLength" }, // 3109481276
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkySnowThresholds, "DAI_SetUltraSkySnowThresholds" }, // 1108038386
		{ &Z_Construct_UFunction_UDAIUltraSkyBlueprintLibrary_DAI_SetUltraSkyTime, "DAI_SetUltraSkyTime" }, // 1648378333
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
		{ Z_Construct_UClass_UDAIUltraSkyBlueprintLibrary, UDAIUltraSkyBlueprintLibrary::StaticClass, TEXT("UDAIUltraSkyBlueprintLibrary"), &Z_Registration_Info_UClass_UDAIUltraSkyBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIUltraSkyBlueprintLibrary), 2549715637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_1968519490(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
