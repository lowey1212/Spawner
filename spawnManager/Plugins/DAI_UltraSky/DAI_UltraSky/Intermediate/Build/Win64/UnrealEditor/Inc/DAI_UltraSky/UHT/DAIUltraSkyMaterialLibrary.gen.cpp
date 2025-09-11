// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyMaterialLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyMaterialLibrary() {}

// Begin Cross Module References
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyFootprintMask_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyMaterialLibrary();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyMaterialLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class UDAIUltraSkyMaterialLibrary Function DAI_ApplyFootprintMaskToActorMaterials
struct Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics
{
	struct DAIUltraSkyMaterialLibrary_eventDAI_ApplyFootprintMaskToActorMaterials_Parms
	{
		AActor* Target;
		FName TextureParamName;
		ADAIUltraSkyFootprintMask* Mask;
		bool bCreateMID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Materials" },
		{ "CPP_Default_bCreateMID", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyMaterialLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParamName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mask;
	static void NewProp_bCreateMID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyMaterialLibrary_eventDAI_ApplyFootprintMaskToActorMaterials_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::NewProp_TextureParamName = { "TextureParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyMaterialLibrary_eventDAI_ApplyFootprintMaskToActorMaterials_Parms, TextureParamName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyMaterialLibrary_eventDAI_ApplyFootprintMaskToActorMaterials_Parms, Mask), Z_Construct_UClass_ADAIUltraSkyFootprintMask_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::NewProp_bCreateMID_SetBit(void* Obj)
{
	((DAIUltraSkyMaterialLibrary_eventDAI_ApplyFootprintMaskToActorMaterials_Parms*)Obj)->bCreateMID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::NewProp_bCreateMID = { "bCreateMID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIUltraSkyMaterialLibrary_eventDAI_ApplyFootprintMaskToActorMaterials_Parms), &Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::NewProp_bCreateMID_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::NewProp_TextureParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::NewProp_bCreateMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyMaterialLibrary, nullptr, "DAI_ApplyFootprintMaskToActorMaterials", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::DAIUltraSkyMaterialLibrary_eventDAI_ApplyFootprintMaskToActorMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::DAIUltraSkyMaterialLibrary_eventDAI_ApplyFootprintMaskToActorMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyMaterialLibrary::execDAI_ApplyFootprintMaskToActorMaterials)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_PROPERTY(FNameProperty,Z_Param_TextureParamName);
	P_GET_OBJECT(ADAIUltraSkyFootprintMask,Z_Param_Mask);
	P_GET_UBOOL(Z_Param_bCreateMID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIUltraSkyMaterialLibrary::DAI_ApplyFootprintMaskToActorMaterials(Z_Param_Target,Z_Param_TextureParamName,Z_Param_Mask,Z_Param_bCreateMID);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyMaterialLibrary Function DAI_ApplyFootprintMaskToActorMaterials

// Begin Class UDAIUltraSkyMaterialLibrary Function DAI_GetFootprintMaskRT
struct Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics
{
	struct DAIUltraSkyMaterialLibrary_eventDAI_GetFootprintMaskRT_Parms
	{
		ADAIUltraSkyFootprintMask* Mask;
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Materials" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyMaterialLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyMaterialLibrary_eventDAI_GetFootprintMaskRT_Parms, Mask), Z_Construct_UClass_ADAIUltraSkyFootprintMask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyMaterialLibrary_eventDAI_GetFootprintMaskRT_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyMaterialLibrary, nullptr, "DAI_GetFootprintMaskRT", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::DAIUltraSkyMaterialLibrary_eventDAI_GetFootprintMaskRT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::DAIUltraSkyMaterialLibrary_eventDAI_GetFootprintMaskRT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyMaterialLibrary::execDAI_GetFootprintMaskRT)
{
	P_GET_OBJECT(ADAIUltraSkyFootprintMask,Z_Param_Mask);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=UDAIUltraSkyMaterialLibrary::DAI_GetFootprintMaskRT(Z_Param_Mask);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyMaterialLibrary Function DAI_GetFootprintMaskRT

// Begin Class UDAIUltraSkyMaterialLibrary Function DAI_SetScalarOnActorMaterials
struct Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics
{
	struct DAIUltraSkyMaterialLibrary_eventDAI_SetScalarOnActorMaterials_Parms
	{
		AActor* Target;
		FName ParamName;
		float Value;
		bool bCreateMID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Materials" },
		{ "CPP_Default_bCreateMID", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyMaterialLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_bCreateMID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyMaterialLibrary_eventDAI_SetScalarOnActorMaterials_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyMaterialLibrary_eventDAI_SetScalarOnActorMaterials_Parms, ParamName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyMaterialLibrary_eventDAI_SetScalarOnActorMaterials_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::NewProp_bCreateMID_SetBit(void* Obj)
{
	((DAIUltraSkyMaterialLibrary_eventDAI_SetScalarOnActorMaterials_Parms*)Obj)->bCreateMID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::NewProp_bCreateMID = { "bCreateMID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIUltraSkyMaterialLibrary_eventDAI_SetScalarOnActorMaterials_Parms), &Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::NewProp_bCreateMID_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::NewProp_bCreateMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAIUltraSkyMaterialLibrary, nullptr, "DAI_SetScalarOnActorMaterials", nullptr, nullptr, Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::DAIUltraSkyMaterialLibrary_eventDAI_SetScalarOnActorMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::DAIUltraSkyMaterialLibrary_eventDAI_SetScalarOnActorMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAIUltraSkyMaterialLibrary::execDAI_SetScalarOnActorMaterials)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_UBOOL(Z_Param_bCreateMID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDAIUltraSkyMaterialLibrary::DAI_SetScalarOnActorMaterials(Z_Param_Target,Z_Param_ParamName,Z_Param_Value,Z_Param_bCreateMID);
	P_NATIVE_END;
}
// End Class UDAIUltraSkyMaterialLibrary Function DAI_SetScalarOnActorMaterials

// Begin Class UDAIUltraSkyMaterialLibrary
void UDAIUltraSkyMaterialLibrary::StaticRegisterNativesUDAIUltraSkyMaterialLibrary()
{
	UClass* Class = UDAIUltraSkyMaterialLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DAI_ApplyFootprintMaskToActorMaterials", &UDAIUltraSkyMaterialLibrary::execDAI_ApplyFootprintMaskToActorMaterials },
		{ "DAI_GetFootprintMaskRT", &UDAIUltraSkyMaterialLibrary::execDAI_GetFootprintMaskRT },
		{ "DAI_SetScalarOnActorMaterials", &UDAIUltraSkyMaterialLibrary::execDAI_SetScalarOnActorMaterials },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAIUltraSkyMaterialLibrary);
UClass* Z_Construct_UClass_UDAIUltraSkyMaterialLibrary_NoRegister()
{
	return UDAIUltraSkyMaterialLibrary::StaticClass();
}
struct Z_Construct_UClass_UDAIUltraSkyMaterialLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DAIUltraSkyMaterialLibrary.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyMaterialLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_ApplyFootprintMaskToActorMaterials, "DAI_ApplyFootprintMaskToActorMaterials" }, // 3599100002
		{ &Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_GetFootprintMaskRT, "DAI_GetFootprintMaskRT" }, // 1748028080
		{ &Z_Construct_UFunction_UDAIUltraSkyMaterialLibrary_DAI_SetScalarOnActorMaterials, "DAI_SetScalarOnActorMaterials" }, // 2126104814
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAIUltraSkyMaterialLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDAIUltraSkyMaterialLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyMaterialLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAIUltraSkyMaterialLibrary_Statics::ClassParams = {
	&UDAIUltraSkyMaterialLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAIUltraSkyMaterialLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAIUltraSkyMaterialLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAIUltraSkyMaterialLibrary()
{
	if (!Z_Registration_Info_UClass_UDAIUltraSkyMaterialLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAIUltraSkyMaterialLibrary.OuterSingleton, Z_Construct_UClass_UDAIUltraSkyMaterialLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAIUltraSkyMaterialLibrary.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<UDAIUltraSkyMaterialLibrary>()
{
	return UDAIUltraSkyMaterialLibrary::StaticClass();
}
UDAIUltraSkyMaterialLibrary::UDAIUltraSkyMaterialLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAIUltraSkyMaterialLibrary);
UDAIUltraSkyMaterialLibrary::~UDAIUltraSkyMaterialLibrary() {}
// End Class UDAIUltraSkyMaterialLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAIUltraSkyMaterialLibrary, UDAIUltraSkyMaterialLibrary::StaticClass, TEXT("UDAIUltraSkyMaterialLibrary"), &Z_Registration_Info_UClass_UDAIUltraSkyMaterialLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAIUltraSkyMaterialLibrary), 3227637383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_93771106(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyMaterialLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
