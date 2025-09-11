// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyFootprintMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyFootprintMask() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyActor_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyFootprintMask();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyFootprintMask_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class ADAIUltraSkyFootprintMask Function ClearMask
struct Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics
{
	struct DAIUltraSkyFootprintMask_eventClearMask_Parms
	{
		FLinearColor ClearColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "CPP_Default_ClearColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyFootprintMask_eventClearMask_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColor_MetaData), NewProp_ClearColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::NewProp_ClearColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyFootprintMask, nullptr, "ClearMask", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::DAIUltraSkyFootprintMask_eventClearMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::DAIUltraSkyFootprintMask_eventClearMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyFootprintMask::execClearMask)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ClearColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMask(Z_Param_Out_ClearColor);
	P_NATIVE_END;
}
// End Class ADAIUltraSkyFootprintMask Function ClearMask

// Begin Class ADAIUltraSkyFootprintMask Function ContainsPoint
struct Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics
{
	struct DAIUltraSkyFootprintMask_eventContainsPoint_Parms
	{
		FVector WorldLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyFootprintMask_eventContainsPoint_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
void Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAIUltraSkyFootprintMask_eventContainsPoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIUltraSkyFootprintMask_eventContainsPoint_Parms), &Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyFootprintMask, nullptr, "ContainsPoint", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::DAIUltraSkyFootprintMask_eventContainsPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::DAIUltraSkyFootprintMask_eventContainsPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyFootprintMask::execContainsPoint)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsPoint(Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// End Class ADAIUltraSkyFootprintMask Function ContainsPoint

// Begin Class ADAIUltraSkyFootprintMask Function GetMaskRenderTarget
struct Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics
{
	struct DAIUltraSkyFootprintMask_eventGetMaskRenderTarget_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyFootprintMask_eventGetMaskRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyFootprintMask, nullptr, "GetMaskRenderTarget", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::DAIUltraSkyFootprintMask_eventGetMaskRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::DAIUltraSkyFootprintMask_eventGetMaskRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyFootprintMask::execGetMaskRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetMaskRenderTarget();
	P_NATIVE_END;
}
// End Class ADAIUltraSkyFootprintMask Function GetMaskRenderTarget

// Begin Class ADAIUltraSkyFootprintMask Function InitializeRenderTarget
struct Z_Construct_UFunction_ADAIUltraSkyFootprintMask_InitializeRenderTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_InitializeRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyFootprintMask, nullptr, "InitializeRenderTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_InitializeRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyFootprintMask_InitializeRenderTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAIUltraSkyFootprintMask_InitializeRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyFootprintMask_InitializeRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyFootprintMask::execInitializeRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeRenderTarget();
	P_NATIVE_END;
}
// End Class ADAIUltraSkyFootprintMask Function InitializeRenderTarget

// Begin Class ADAIUltraSkyFootprintMask Function StampAtWorldLocation
struct Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics
{
	struct DAIUltraSkyFootprintMask_eventStampAtWorldLocation_Parms
	{
		FVector WorldLocation;
		float Strength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyFootprintMask_eventStampAtWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyFootprintMask_eventStampAtWorldLocation_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyFootprintMask, nullptr, "StampAtWorldLocation", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::DAIUltraSkyFootprintMask_eventStampAtWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::DAIUltraSkyFootprintMask_eventStampAtWorldLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyFootprintMask::execStampAtWorldLocation)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StampAtWorldLocation(Z_Param_WorldLocation,Z_Param_Strength);
	P_NATIVE_END;
}
// End Class ADAIUltraSkyFootprintMask Function StampAtWorldLocation

// Begin Class ADAIUltraSkyFootprintMask
void ADAIUltraSkyFootprintMask::StaticRegisterNativesADAIUltraSkyFootprintMask()
{
	UClass* Class = ADAIUltraSkyFootprintMask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearMask", &ADAIUltraSkyFootprintMask::execClearMask },
		{ "ContainsPoint", &ADAIUltraSkyFootprintMask::execContainsPoint },
		{ "GetMaskRenderTarget", &ADAIUltraSkyFootprintMask::execGetMaskRenderTarget },
		{ "InitializeRenderTarget", &ADAIUltraSkyFootprintMask::execInitializeRenderTarget },
		{ "StampAtWorldLocation", &ADAIUltraSkyFootprintMask::execStampAtWorldLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAIUltraSkyFootprintMask);
UClass* Z_Construct_UClass_ADAIUltraSkyFootprintMask_NoRegister()
{
	return ADAIUltraSkyFootprintMask::StaticClass();
}
struct Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DAIUltraSkyFootprintMask.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World space XY bounds defining where footprints can accumulate (Z ignored)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskRT_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render target storing accumulated footprint intensity (black none -> white full)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTResolution_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "64" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolution of MaskRT (higher = sharper but more cost)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UltraSky_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UltraSky actor used to receive footprint placement events." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StampRadiusWorld_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of a single footprint stamp in world units." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StampFalloff_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soft edge falloff (0 hard edge, 1 very soft)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StampMaterial_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material used each stamp pass to composite new footprint into MaskRT." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMaterial_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional material applied each tick to fade existing footprints." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param_PrevMask_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameter name on stamp/fade materials for previous frame mask texture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param_CenterUV_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameter name for stamp center UV (0-1)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param_Radius_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameter name for stamp radius in UV units." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param_Strength_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameter name for stamp intensity (multiplier)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param_Falloff_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameter name for stamp falloff curve control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param_FadeAmount_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameter name for per-tick fade amount scalar." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoFade_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable continuous fade of older footprints each tick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadePerSecond_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount (0-1) of existing mask removed per second when auto fade enabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearOnBeginPlay_MetaData[] = {
		{ "Category", "DAI_UltraSky|FootprintMask" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true the render target is cleared at BeginPlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StampMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime dynamic instance of StampMaterial." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DAIUltraSkyFootprintMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime dynamic instance of FadeMaterial." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskRT;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RTResolution;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UltraSky;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StampRadiusWorld;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StampFalloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StampMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadeMaterial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Param_PrevMask;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Param_CenterUV;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Param_Radius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Param_Strength;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Param_Falloff;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Param_FadeAmount;
	static void NewProp_bEnableAutoFade_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadePerSecond;
	static void NewProp_bClearOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearOnBeginPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StampMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadeMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ClearMask, "ClearMask" }, // 2525083771
		{ &Z_Construct_UFunction_ADAIUltraSkyFootprintMask_ContainsPoint, "ContainsPoint" }, // 3378083521
		{ &Z_Construct_UFunction_ADAIUltraSkyFootprintMask_GetMaskRenderTarget, "GetMaskRenderTarget" }, // 1660912794
		{ &Z_Construct_UFunction_ADAIUltraSkyFootprintMask_InitializeRenderTarget, "InitializeRenderTarget" }, // 2657805860
		{ &Z_Construct_UFunction_ADAIUltraSkyFootprintMask_StampAtWorldLocation, "StampAtWorldLocation" }, // 1096544182
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAIUltraSkyFootprintMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, Bounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_MaskRT = { "MaskRT", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, MaskRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskRT_MetaData), NewProp_MaskRT_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_RTResolution = { "RTResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, RTResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTResolution_MetaData), NewProp_RTResolution_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_UltraSky = { "UltraSky", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, UltraSky), Z_Construct_UClass_ADAIUltraSkyActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UltraSky_MetaData), NewProp_UltraSky_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_StampRadiusWorld = { "StampRadiusWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, StampRadiusWorld), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StampRadiusWorld_MetaData), NewProp_StampRadiusWorld_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_StampFalloff = { "StampFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, StampFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StampFalloff_MetaData), NewProp_StampFalloff_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_StampMaterial = { "StampMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, StampMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StampMaterial_MetaData), NewProp_StampMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_FadeMaterial = { "FadeMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, FadeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMaterial_MetaData), NewProp_FadeMaterial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_PrevMask = { "Param_PrevMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, Param_PrevMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param_PrevMask_MetaData), NewProp_Param_PrevMask_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_CenterUV = { "Param_CenterUV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, Param_CenterUV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param_CenterUV_MetaData), NewProp_Param_CenterUV_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_Radius = { "Param_Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, Param_Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param_Radius_MetaData), NewProp_Param_Radius_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_Strength = { "Param_Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, Param_Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param_Strength_MetaData), NewProp_Param_Strength_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_Falloff = { "Param_Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, Param_Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param_Falloff_MetaData), NewProp_Param_Falloff_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_FadeAmount = { "Param_FadeAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, Param_FadeAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param_FadeAmount_MetaData), NewProp_Param_FadeAmount_MetaData) };
void Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_bEnableAutoFade_SetBit(void* Obj)
{
	((ADAIUltraSkyFootprintMask*)Obj)->bEnableAutoFade = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_bEnableAutoFade = { "bEnableAutoFade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAIUltraSkyFootprintMask), &Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_bEnableAutoFade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutoFade_MetaData), NewProp_bEnableAutoFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_FadePerSecond = { "FadePerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, FadePerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadePerSecond_MetaData), NewProp_FadePerSecond_MetaData) };
void Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_bClearOnBeginPlay_SetBit(void* Obj)
{
	((ADAIUltraSkyFootprintMask*)Obj)->bClearOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_bClearOnBeginPlay = { "bClearOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAIUltraSkyFootprintMask), &Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_bClearOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearOnBeginPlay_MetaData), NewProp_bClearOnBeginPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_StampMID = { "StampMID", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, StampMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StampMID_MetaData), NewProp_StampMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_FadeMID = { "FadeMID", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyFootprintMask, FadeMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMID_MetaData), NewProp_FadeMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_MaskRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_RTResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_UltraSky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_StampRadiusWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_StampFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_StampMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_FadeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_PrevMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_CenterUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_Param_FadeAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_bEnableAutoFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_FadePerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_bClearOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_StampMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::NewProp_FadeMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::ClassParams = {
	&ADAIUltraSkyFootprintMask::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::Class_MetaDataParams), Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADAIUltraSkyFootprintMask()
{
	if (!Z_Registration_Info_UClass_ADAIUltraSkyFootprintMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAIUltraSkyFootprintMask.OuterSingleton, Z_Construct_UClass_ADAIUltraSkyFootprintMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADAIUltraSkyFootprintMask.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<ADAIUltraSkyFootprintMask>()
{
	return ADAIUltraSkyFootprintMask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADAIUltraSkyFootprintMask);
ADAIUltraSkyFootprintMask::~ADAIUltraSkyFootprintMask() {}
// End Class ADAIUltraSkyFootprintMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyFootprintMask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADAIUltraSkyFootprintMask, ADAIUltraSkyFootprintMask::StaticClass, TEXT("ADAIUltraSkyFootprintMask"), &Z_Registration_Info_UClass_ADAIUltraSkyFootprintMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAIUltraSkyFootprintMask), 2061646211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyFootprintMask_h_748168186(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyFootprintMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyFootprintMask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
