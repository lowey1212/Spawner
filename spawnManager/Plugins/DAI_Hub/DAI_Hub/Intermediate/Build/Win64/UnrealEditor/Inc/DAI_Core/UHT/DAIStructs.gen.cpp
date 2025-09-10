// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Core/Public/DAI/Core/DAIStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIStructs() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DAI_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FFactionId();
DAI_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputSnapshot();
DAI_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatsMap();
DAI_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestId();
DAI_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotMeta();
DAI_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnTag();
UPackage* Z_Construct_UPackage__Script_DAI_Core();
// End Cross Module References

// Begin ScriptStruct FQuestId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestId;
class UScriptStruct* FQuestId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestId, (UObject*)Z_Construct_UPackage__Script_DAI_Core(), TEXT("QuestId"));
	}
	return Z_Registration_Info_UScriptStruct_QuestId.OuterSingleton;
}
template<> DAI_CORE_API UScriptStruct* StaticStruct<FQuestId>()
{
	return FQuestId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuestId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "QuestId" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestId, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestId_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
	nullptr,
	&NewStructOps,
	"QuestId",
	Z_Construct_UScriptStruct_FQuestId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestId_Statics::PropPointers),
	sizeof(FQuestId),
	alignof(FQuestId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestId()
{
	if (!Z_Registration_Info_UScriptStruct_QuestId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestId.InnerSingleton, Z_Construct_UScriptStruct_FQuestId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuestId.InnerSingleton;
}
// End ScriptStruct FQuestId

// Begin ScriptStruct FFactionId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionId;
class UScriptStruct* FFactionId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionId, (UObject*)Z_Construct_UPackage__Script_DAI_Core(), TEXT("FactionId"));
	}
	return Z_Registration_Info_UScriptStruct_FactionId.OuterSingleton;
}
template<> DAI_CORE_API UScriptStruct* StaticStruct<FFactionId>()
{
	return FFactionId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactionId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "FactionId" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFactionId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionId, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionId_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
	nullptr,
	&NewStructOps,
	"FactionId",
	Z_Construct_UScriptStruct_FFactionId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionId_Statics::PropPointers),
	sizeof(FFactionId),
	alignof(FFactionId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionId()
{
	if (!Z_Registration_Info_UScriptStruct_FactionId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionId.InnerSingleton, Z_Construct_UScriptStruct_FFactionId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionId.InnerSingleton;
}
// End ScriptStruct FFactionId

// Begin ScriptStruct FSpawnTag
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnTag;
class UScriptStruct* FSpawnTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnTag, (UObject*)Z_Construct_UPackage__Script_DAI_Core(), TEXT("SpawnTag"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnTag.OuterSingleton;
}
template<> DAI_CORE_API UScriptStruct* StaticStruct<FSpawnTag>()
{
	return FSpawnTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "SpawnTag" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTag, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTag_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
	nullptr,
	&NewStructOps,
	"SpawnTag",
	Z_Construct_UScriptStruct_FSpawnTag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTag_Statics::PropPointers),
	sizeof(FSpawnTag),
	alignof(FSpawnTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnTag()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnTag.InnerSingleton, Z_Construct_UScriptStruct_FSpawnTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnTag.InnerSingleton;
}
// End ScriptStruct FSpawnTag

// Begin ScriptStruct FSaveSlotMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveSlotMeta;
class UScriptStruct* FSaveSlotMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveSlotMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveSlotMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveSlotMeta, (UObject*)Z_Construct_UPackage__Script_DAI_Core(), TEXT("SaveSlotMeta"));
	}
	return Z_Registration_Info_UScriptStruct_SaveSlotMeta.OuterSingleton;
}
template<> DAI_CORE_API UScriptStruct* StaticStruct<FSaveSlotMeta>()
{
	return FSaveSlotMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveSlotMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "SaveSlotMeta" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "SaveSlotMeta" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "Category", "SaveSlotMeta" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveSlotMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotMeta, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotMeta, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotMeta, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::NewProp_Timestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
	nullptr,
	&NewStructOps,
	"SaveSlotMeta",
	Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::PropPointers),
	sizeof(FSaveSlotMeta),
	alignof(FSaveSlotMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotMeta()
{
	if (!Z_Registration_Info_UScriptStruct_SaveSlotMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveSlotMeta.InnerSingleton, Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveSlotMeta.InnerSingleton;
}
// End ScriptStruct FSaveSlotMeta

// Begin ScriptStruct FInputSnapshot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputSnapshot;
class UScriptStruct* FInputSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputSnapshot, (UObject*)Z_Construct_UPackage__Script_DAI_Core(), TEXT("InputSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_InputSnapshot.OuterSingleton;
}
template<> DAI_CORE_API UScriptStruct* StaticStruct<FInputSnapshot>()
{
	return FInputSnapshot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSnapshot, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSnapshot, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSnapshot, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSnapshot, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSnapshot, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
	nullptr,
	&NewStructOps,
	"InputSnapshot",
	Z_Construct_UScriptStruct_FInputSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSnapshot_Statics::PropPointers),
	sizeof(FInputSnapshot),
	alignof(FInputSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_InputSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FInputSnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputSnapshot.InnerSingleton;
}
// End ScriptStruct FInputSnapshot

// Begin ScriptStruct FPlayerStatsMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerStatsMap;
class UScriptStruct* FPlayerStatsMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStatsMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerStatsMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStatsMap, (UObject*)Z_Construct_UPackage__Script_DAI_Core(), TEXT("PlayerStatsMap"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerStatsMap.OuterSingleton;
}
template<> DAI_CORE_API UScriptStruct* StaticStruct<FPlayerStatsMap>()
{
	return FPlayerStatsMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerStatsMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/DAI/Core/DAIStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stats_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Stats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStatsMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::NewProp_Stats_ValueProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::NewProp_Stats_Key_KeyProp = { "Stats_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatsMap, Stats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::NewProp_Stats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::NewProp_Stats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::NewProp_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Core,
	nullptr,
	&NewStructOps,
	"PlayerStatsMap",
	Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::PropPointers),
	sizeof(FPlayerStatsMap),
	alignof(FPlayerStatsMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatsMap()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStatsMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerStatsMap.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerStatsMap.InnerSingleton;
}
// End ScriptStruct FPlayerStatsMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_DAIStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestId::StaticStruct, Z_Construct_UScriptStruct_FQuestId_Statics::NewStructOps, TEXT("QuestId"), &Z_Registration_Info_UScriptStruct_QuestId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestId), 3776470125U) },
		{ FFactionId::StaticStruct, Z_Construct_UScriptStruct_FFactionId_Statics::NewStructOps, TEXT("FactionId"), &Z_Registration_Info_UScriptStruct_FactionId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionId), 4193448498U) },
		{ FSpawnTag::StaticStruct, Z_Construct_UScriptStruct_FSpawnTag_Statics::NewStructOps, TEXT("SpawnTag"), &Z_Registration_Info_UScriptStruct_SpawnTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnTag), 1530926354U) },
		{ FSaveSlotMeta::StaticStruct, Z_Construct_UScriptStruct_FSaveSlotMeta_Statics::NewStructOps, TEXT("SaveSlotMeta"), &Z_Registration_Info_UScriptStruct_SaveSlotMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveSlotMeta), 318064961U) },
		{ FInputSnapshot::StaticStruct, Z_Construct_UScriptStruct_FInputSnapshot_Statics::NewStructOps, TEXT("InputSnapshot"), &Z_Registration_Info_UScriptStruct_InputSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputSnapshot), 3030816825U) },
		{ FPlayerStatsMap::StaticStruct, Z_Construct_UScriptStruct_FPlayerStatsMap_Statics::NewStructOps, TEXT("PlayerStatsMap"), &Z_Registration_Info_UScriptStruct_PlayerStatsMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStatsMap), 1918716412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_DAIStructs_h_2302642320(TEXT("/Script/DAI_Core"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_DAIStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_DAI_Hub_DAI_HubProject_Plugins_DAI_Hub_Source_DAI_Core_Public_DAI_Core_DAIStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
