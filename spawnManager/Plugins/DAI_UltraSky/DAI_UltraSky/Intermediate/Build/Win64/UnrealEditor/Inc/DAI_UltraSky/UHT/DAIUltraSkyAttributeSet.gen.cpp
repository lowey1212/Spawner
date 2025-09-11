// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyAttributeSet() {}

// Begin Cross Module References
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyAttributeSet();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class UDAIUltraSkyAttributeSet Function OnRep_Cloudiness
struct Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics
{
	struct DAIUltraSkyAttributeSet_eventOnRep_Cloudiness_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyAttributeSet_eventOnRep_Cloudiness_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyAttributeSet, nullptr, "OnRep_Cloudiness", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::DAIUltraSkyAttributeSet_eventOnRep_Cloudiness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::DAIUltraSkyAttributeSet_eventOnRep_Cloudiness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyAttributeSet::execOnRep_Cloudiness)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Cloudiness(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyAttributeSet Function OnRep_Cloudiness

// Begin Class UDAIUltraSkyAttributeSet Function OnRep_Humidity
struct Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics
{
	struct DAIUltraSkyAttributeSet_eventOnRep_Humidity_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyAttributeSet_eventOnRep_Humidity_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyAttributeSet, nullptr, "OnRep_Humidity", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::DAIUltraSkyAttributeSet_eventOnRep_Humidity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::DAIUltraSkyAttributeSet_eventOnRep_Humidity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyAttributeSet::execOnRep_Humidity)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Humidity(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyAttributeSet Function OnRep_Humidity

// Begin Class UDAIUltraSkyAttributeSet Function OnRep_Precipitation
struct Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics
{
	struct DAIUltraSkyAttributeSet_eventOnRep_Precipitation_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyAttributeSet_eventOnRep_Precipitation_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyAttributeSet, nullptr, "OnRep_Precipitation", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::DAIUltraSkyAttributeSet_eventOnRep_Precipitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::DAIUltraSkyAttributeSet_eventOnRep_Precipitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyAttributeSet::execOnRep_Precipitation)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Precipitation(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyAttributeSet Function OnRep_Precipitation

// Begin Class UDAIUltraSkyAttributeSet Function OnRep_TemperatureC
struct Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics
{
	struct DAIUltraSkyAttributeSet_eventOnRep_TemperatureC_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyAttributeSet_eventOnRep_TemperatureC_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyAttributeSet, nullptr, "OnRep_TemperatureC", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::DAIUltraSkyAttributeSet_eventOnRep_TemperatureC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::DAIUltraSkyAttributeSet_eventOnRep_TemperatureC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyAttributeSet::execOnRep_TemperatureC)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TemperatureC(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyAttributeSet Function OnRep_TemperatureC

// Begin Class UDAIUltraSkyAttributeSet Function OnRep_WindSpeedKph
struct Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics
{
	struct DAIUltraSkyAttributeSet_eventOnRep_WindSpeedKph_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyAttributeSet_eventOnRep_WindSpeedKph_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyAttributeSet, nullptr, "OnRep_WindSpeedKph", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::DAIUltraSkyAttributeSet_eventOnRep_WindSpeedKph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::DAIUltraSkyAttributeSet_eventOnRep_WindSpeedKph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyAttributeSet::execOnRep_WindSpeedKph)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WindSpeedKph(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyAttributeSet Function OnRep_WindSpeedKph

// Begin Class UDAIUltraSkyAttributeSet
void UDAIUltraSkyAttributeSet::StaticRegisterNativesUDAIUltraSkyAttributeSet()
{
	UClass* Class = UDAIUltraSkyAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Cloudiness", &UDAIUltraSkyAttributeSet::execOnRep_Cloudiness },
		{ "OnRep_Humidity", &UDAIUltraSkyAttributeSet::execOnRep_Humidity },
		{ "OnRep_Precipitation", &UDAIUltraSkyAttributeSet::execOnRep_Precipitation },
		{ "OnRep_TemperatureC", &UDAIUltraSkyAttributeSet::execOnRep_TemperatureC },
		{ "OnRep_WindSpeedKph", &UDAIUltraSkyAttributeSet::execOnRep_WindSpeedKph },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIUltraSkyAttributeSet);
UClass* Z_Construct_UClass_UDAIUltraSkyAttributeSet_NoRegister()
{
	return UDAIUltraSkyAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic weather attributes suitable for gameplay logic and UI\n" },
#endif
		{ "IncludePath", "DAIUltraSkyAttributeSet.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic weather attributes suitable for gameplay logic and UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureC_MetaData[] = {
		{ "Category", "DAI_UltraSky|Attributes" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ambient temperature in Celsius (replicated)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Humidity_MetaData[] = {
		{ "Category", "DAI_UltraSky|Attributes" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Relative humidity 0..1 (replicated)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindSpeedKph_MetaData[] = {
		{ "Category", "DAI_UltraSky|Attributes" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wind speed in km/h (replicated)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Precipitation_MetaData[] = {
		{ "Category", "DAI_UltraSky|Attributes" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precipitation intensity 0..1 (0 none, 1 storm)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cloudiness_MetaData[] = {
		{ "Category", "DAI_UltraSky|Attributes" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cloud coverage 0..1 proxy for gameplay/UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemperatureC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Humidity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindSpeedKph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Precipitation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cloudiness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Cloudiness, "OnRep_Cloudiness" }, // 2876041712
		{ &Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Humidity, "OnRep_Humidity" }, // 3757045658
		{ &Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_Precipitation, "OnRep_Precipitation" }, // 1084187463
		{ &Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_TemperatureC, "OnRep_TemperatureC" }, // 2351333039
		{ &Z_Construct_UFunction_UDAIUltraSkyAttributeSet_OnRep_WindSpeedKph, "OnRep_WindSpeedKph" }, // 979487267
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIUltraSkyAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::NewProp_TemperatureC = { "TemperatureC", "OnRep_TemperatureC", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyAttributeSet, TemperatureC), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemperatureC_MetaData), NewProp_TemperatureC_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::NewProp_Humidity = { "Humidity", "OnRep_Humidity", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyAttributeSet, Humidity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Humidity_MetaData), NewProp_Humidity_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::NewProp_WindSpeedKph = { "WindSpeedKph", "OnRep_WindSpeedKph", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyAttributeSet, WindSpeedKph), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindSpeedKph_MetaData), NewProp_WindSpeedKph_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::NewProp_Precipitation = { "Precipitation", "OnRep_Precipitation", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyAttributeSet, Precipitation), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Precipitation_MetaData), NewProp_Precipitation_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::NewProp_Cloudiness = { "Cloudiness", "OnRep_Cloudiness", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAIUltraSkyAttributeSet, Cloudiness), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cloudiness_MetaData), NewProp_Cloudiness_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::NewProp_TemperatureC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::NewProp_Humidity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::NewProp_WindSpeedKph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::NewProp_Precipitation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::NewProp_Cloudiness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::ClassParams = {
	&UDAIUltraSkyAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIUltraSkyAttributeSet()
{
	if (!Z_Registration_Info_UClass_UDAIUltraSkyAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIUltraSkyAttributeSet.OuterSingleton, Z_Construct_UClass_UDAIUltraSkyAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIUltraSkyAttributeSet.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<UDAIUltraSkyAttributeSet>()
{
	return UDAIUltraSkyAttributeSet::StaticClass();
}
void UDAIUltraSkyAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TemperatureC(TEXT("TemperatureC"));
	static const FName Name_Humidity(TEXT("Humidity"));
	static const FName Name_WindSpeedKph(TEXT("WindSpeedKph"));
	static const FName Name_Precipitation(TEXT("Precipitation"));
	static const FName Name_Cloudiness(TEXT("Cloudiness"));
	const bool bIsValid = true
		&& Name_TemperatureC == ClassReps[(int32)ENetFields_Private::TemperatureC].Property->GetFName()
		&& Name_Humidity == ClassReps[(int32)ENetFields_Private::Humidity].Property->GetFName()
		&& Name_WindSpeedKph == ClassReps[(int32)ENetFields_Private::WindSpeedKph].Property->GetFName()
		&& Name_Precipitation == ClassReps[(int32)ENetFields_Private::Precipitation].Property->GetFName()
		&& Name_Cloudiness == ClassReps[(int32)ENetFields_Private::Cloudiness].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDAIUltraSkyAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIUltraSkyAttributeSet);
UDAIUltraSkyAttributeSet::~UDAIUltraSkyAttributeSet() {}
// End Class UDAIUltraSkyAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIUltraSkyAttributeSet, UDAIUltraSkyAttributeSet::StaticClass, TEXT("UDAIUltraSkyAttributeSet"), &Z_Registration_Info_UClass_UDAIUltraSkyAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIUltraSkyAttributeSet), 2632519477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_3367969776(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
