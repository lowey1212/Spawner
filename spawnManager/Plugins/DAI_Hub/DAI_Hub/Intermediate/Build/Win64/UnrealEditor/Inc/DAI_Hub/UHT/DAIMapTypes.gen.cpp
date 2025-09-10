// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Hub/Public/Interfaces/Map/DAIMapTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIMapTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DAI_HUB_API UEnum* Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy();
DAI_HUB_API UEnum* Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility();
DAI_HUB_API UScriptStruct* Z_Construct_UScriptStruct_FDAIPathPoly();
DAI_HUB_API UScriptStruct* Z_Construct_UScriptStruct_FDAIPathRequest();
DAI_HUB_API UScriptStruct* Z_Construct_UScriptStruct_FDAIPOIDesc();
DAI_HUB_API UScriptStruct* Z_Construct_UScriptStruct_FDAIPOIHandle();
DAI_HUB_API UScriptStruct* Z_Construct_UScriptStruct_FDAISectionId();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_DAI_Hub();
// End Cross Module References

// Begin Enum EDAIPOIVisibility
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDAIPOIVisibility;
static UEnum* EDAIPOIVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDAIPOIVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDAIPOIVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("EDAIPOIVisibility"));
	}
	return Z_Registration_Info_UEnum_EDAIPOIVisibility.OuterSingleton;
}
template<> DAI_HUB_API UEnum* StaticEnum<EDAIPOIVisibility>()
{
	return EDAIPOIVisibility_StaticEnum();
}
struct Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "EDAIPOIVisibility::Always" },
		{ "BlueprintType", "true" },
		{ "Hidden.DisplayName", "Hidden" },
		{ "Hidden.Name", "EDAIPOIVisibility::Hidden" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
		{ "WhenDiscovered.DisplayName", "When Discovered" },
		{ "WhenDiscovered.Name", "EDAIPOIVisibility::WhenDiscovered" },
		{ "WhenNearby.DisplayName", "When Nearby" },
		{ "WhenNearby.Name", "EDAIPOIVisibility::WhenNearby" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDAIPOIVisibility::Always", (int64)EDAIPOIVisibility::Always },
		{ "EDAIPOIVisibility::WhenDiscovered", (int64)EDAIPOIVisibility::WhenDiscovered },
		{ "EDAIPOIVisibility::WhenNearby", (int64)EDAIPOIVisibility::WhenNearby },
		{ "EDAIPOIVisibility::Hidden", (int64)EDAIPOIVisibility::Hidden },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	"EDAIPOIVisibility",
	"EDAIPOIVisibility",
	Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility()
{
	if (!Z_Registration_Info_UEnum_EDAIPOIVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDAIPOIVisibility.InnerSingleton, Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDAIPOIVisibility.InnerSingleton;
}
// End Enum EDAIPOIVisibility

// Begin ScriptStruct FDAIPOIDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAIPOIDesc;
class UScriptStruct* FDAIPOIDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAIPOIDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAIPOIDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAIPOIDesc, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("DAIPOIDesc"));
	}
	return Z_Registration_Info_UScriptStruct_DAIPOIDesc.OuterSingleton;
}
template<> DAI_HUB_API UScriptStruct* StaticStruct<FDAIPOIDesc>()
{
	return FDAIPOIDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAIPOIDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFastTravelPoint_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
	static void NewProp_bIsFastTravelPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFastTravelPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAIPOIDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPOIDesc, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPOIDesc, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPOIDesc, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPOIDesc, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPOIDesc, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPOIDesc, Visibility), Z_Construct_UEnum_DAI_Hub_EDAIPOIVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility_MetaData), NewProp_Visibility_MetaData) }; // 1852532920
void Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_bIsFastTravelPoint_SetBit(void* Obj)
{
	((FDAIPOIDesc*)Obj)->bIsFastTravelPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_bIsFastTravelPoint = { "bIsFastTravelPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDAIPOIDesc), &Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_bIsFastTravelPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFastTravelPoint_MetaData), NewProp_bIsFastTravelPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_Visibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewProp_bIsFastTravelPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	&NewStructOps,
	"DAIPOIDesc",
	Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::PropPointers),
	sizeof(FDAIPOIDesc),
	alignof(FDAIPOIDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAIPOIDesc()
{
	if (!Z_Registration_Info_UScriptStruct_DAIPOIDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAIPOIDesc.InnerSingleton, Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAIPOIDesc.InnerSingleton;
}
// End ScriptStruct FDAIPOIDesc

// Begin ScriptStruct FDAIPOIHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAIPOIHandle;
class UScriptStruct* FDAIPOIHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAIPOIHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAIPOIHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAIPOIHandle, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("DAIPOIHandle"));
	}
	return Z_Registration_Info_UScriptStruct_DAIPOIHandle.OuterSingleton;
}
template<> DAI_HUB_API UScriptStruct* StaticStruct<FDAIPOIHandle>()
{
	return FDAIPOIHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAIPOIHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAIPOIHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPOIHandle, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	&NewStructOps,
	"DAIPOIHandle",
	Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::PropPointers),
	sizeof(FDAIPOIHandle),
	alignof(FDAIPOIHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAIPOIHandle()
{
	if (!Z_Registration_Info_UScriptStruct_DAIPOIHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAIPOIHandle.InnerSingleton, Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAIPOIHandle.InnerSingleton;
}
// End ScriptStruct FDAIPOIHandle

// Begin ScriptStruct FDAISectionId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAISectionId;
class UScriptStruct* FDAISectionId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAISectionId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAISectionId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAISectionId, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("DAISectionId"));
	}
	return Z_Registration_Info_UScriptStruct_DAISectionId.OuterSingleton;
}
template<> DAI_HUB_API UScriptStruct* StaticStruct<FDAISectionId>()
{
	return FDAISectionId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAISectionId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAISectionId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAISectionId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAISectionId, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAISectionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAISectionId_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAISectionId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAISectionId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	&NewStructOps,
	"DAISectionId",
	Z_Construct_UScriptStruct_FDAISectionId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAISectionId_Statics::PropPointers),
	sizeof(FDAISectionId),
	alignof(FDAISectionId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAISectionId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAISectionId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAISectionId()
{
	if (!Z_Registration_Info_UScriptStruct_DAISectionId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAISectionId.InnerSingleton, Z_Construct_UScriptStruct_FDAISectionId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAISectionId.InnerSingleton;
}
// End ScriptStruct FDAISectionId

// Begin Enum EDAIPathRefreshPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDAIPathRefreshPolicy;
static UEnum* EDAIPathRefreshPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDAIPathRefreshPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDAIPathRefreshPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("EDAIPathRefreshPolicy"));
	}
	return Z_Registration_Info_UEnum_EDAIPathRefreshPolicy.OuterSingleton;
}
template<> DAI_HUB_API UEnum* StaticEnum<EDAIPathRefreshPolicy>()
{
	return EDAIPathRefreshPolicy_StaticEnum();
}
struct Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Name", "EDAIPathRefreshPolicy::Always" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
		{ "Never.Name", "EDAIPathRefreshPolicy::Never" },
		{ "OnChange.Name", "EDAIPathRefreshPolicy::OnChange" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDAIPathRefreshPolicy::Never", (int64)EDAIPathRefreshPolicy::Never },
		{ "EDAIPathRefreshPolicy::OnChange", (int64)EDAIPathRefreshPolicy::OnChange },
		{ "EDAIPathRefreshPolicy::Always", (int64)EDAIPathRefreshPolicy::Always },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	"EDAIPathRefreshPolicy",
	"EDAIPathRefreshPolicy",
	Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy()
{
	if (!Z_Registration_Info_UEnum_EDAIPathRefreshPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDAIPathRefreshPolicy.InnerSingleton, Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDAIPathRefreshPolicy.InnerSingleton;
}
// End Enum EDAIPathRefreshPolicy

// Begin ScriptStruct FDAIPathRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAIPathRequest;
class UScriptStruct* FDAIPathRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAIPathRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAIPathRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAIPathRequest, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("DAIPathRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DAIPathRequest.OuterSingleton;
}
template<> DAI_HUB_API UScriptStruct* StaticStruct<FDAIPathRequest>()
{
	return FDAIPathRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAIPathRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefreshPolicy_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RefreshPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RefreshPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAIPathRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIPathRequest_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPathRequest, Source), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIPathRequest_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPathRequest, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDAIPathRequest_Statics::NewProp_RefreshPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDAIPathRequest_Statics::NewProp_RefreshPolicy = { "RefreshPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPathRequest, RefreshPolicy), Z_Construct_UEnum_DAI_Hub_EDAIPathRefreshPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefreshPolicy_MetaData), NewProp_RefreshPolicy_MetaData) }; // 305023368
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAIPathRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPathRequest_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPathRequest_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPathRequest_Statics::NewProp_RefreshPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPathRequest_Statics::NewProp_RefreshPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPathRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAIPathRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	&NewStructOps,
	"DAIPathRequest",
	Z_Construct_UScriptStruct_FDAIPathRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPathRequest_Statics::PropPointers),
	sizeof(FDAIPathRequest),
	alignof(FDAIPathRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPathRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAIPathRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAIPathRequest()
{
	if (!Z_Registration_Info_UScriptStruct_DAIPathRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAIPathRequest.InnerSingleton, Z_Construct_UScriptStruct_FDAIPathRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAIPathRequest.InnerSingleton;
}
// End ScriptStruct FDAIPathRequest

// Begin ScriptStruct FDAIPathPoly
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAIPathPoly;
class UScriptStruct* FDAIPathPoly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAIPathPoly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAIPathPoly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAIPathPoly, (UObject*)Z_Construct_UPackage__Script_DAI_Hub(), TEXT("DAIPathPoly"));
	}
	return Z_Registration_Info_UScriptStruct_DAIPathPoly.OuterSingleton;
}
template<> DAI_HUB_API UScriptStruct* StaticStruct<FDAIPathPoly>()
{
	return FDAIPathPoly::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAIPathPoly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/Interfaces/Map/DAIMapTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAIPathPoly>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAIPathPoly_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDAIPathPoly_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAIPathPoly, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAIPathPoly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPathPoly_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAIPathPoly_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPathPoly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAIPathPoly_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Hub,
	nullptr,
	&NewStructOps,
	"DAIPathPoly",
	Z_Construct_UScriptStruct_FDAIPathPoly_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPathPoly_Statics::PropPointers),
	sizeof(FDAIPathPoly),
	alignof(FDAIPathPoly),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAIPathPoly_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAIPathPoly_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAIPathPoly()
{
	if (!Z_Registration_Info_UScriptStruct_DAIPathPoly.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAIPathPoly.InnerSingleton, Z_Construct_UScriptStruct_FDAIPathPoly_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAIPathPoly.InnerSingleton;
}
// End ScriptStruct FDAIPathPoly

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDAIPOIVisibility_StaticEnum, TEXT("EDAIPOIVisibility"), &Z_Registration_Info_UEnum_EDAIPOIVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1852532920U) },
		{ EDAIPathRefreshPolicy_StaticEnum, TEXT("EDAIPathRefreshPolicy"), &Z_Registration_Info_UEnum_EDAIPathRefreshPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 305023368U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDAIPOIDesc::StaticStruct, Z_Construct_UScriptStruct_FDAIPOIDesc_Statics::NewStructOps, TEXT("DAIPOIDesc"), &Z_Registration_Info_UScriptStruct_DAIPOIDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAIPOIDesc), 3266932797U) },
		{ FDAIPOIHandle::StaticStruct, Z_Construct_UScriptStruct_FDAIPOIHandle_Statics::NewStructOps, TEXT("DAIPOIHandle"), &Z_Registration_Info_UScriptStruct_DAIPOIHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAIPOIHandle), 712880758U) },
		{ FDAISectionId::StaticStruct, Z_Construct_UScriptStruct_FDAISectionId_Statics::NewStructOps, TEXT("DAISectionId"), &Z_Registration_Info_UScriptStruct_DAISectionId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAISectionId), 2752195817U) },
		{ FDAIPathRequest::StaticStruct, Z_Construct_UScriptStruct_FDAIPathRequest_Statics::NewStructOps, TEXT("DAIPathRequest"), &Z_Registration_Info_UScriptStruct_DAIPathRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAIPathRequest), 550127343U) },
		{ FDAIPathPoly::StaticStruct, Z_Construct_UScriptStruct_FDAIPathPoly_Statics::NewStructOps, TEXT("DAIPathPoly"), &Z_Registration_Info_UScriptStruct_DAIPathPoly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAIPathPoly), 1587166683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_3169510029(TEXT("/Script/DAI_Hub"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Hub_Public_Interfaces_Map_DAIMapTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
