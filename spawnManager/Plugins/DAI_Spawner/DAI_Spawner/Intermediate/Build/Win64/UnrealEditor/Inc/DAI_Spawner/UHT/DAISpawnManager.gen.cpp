// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Spawner/Public/DAISpawnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAISpawnManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DAI_SPAWNER_API UClass* Z_Construct_UClass_ADAISpawnManager();
DAI_SPAWNER_API UClass* Z_Construct_UClass_ADAISpawnManager_NoRegister();
DAI_SPAWNER_API UEnum* Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape();
DAI_SPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnEntry();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Spawner();
// End Cross Module References

// Begin Enum ESpawnAreaShape
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpawnAreaShape;
static UEnum* ESpawnAreaShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpawnAreaShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpawnAreaShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape, (UObject*)Z_Construct_UPackage__Script_DAI_Spawner(), TEXT("ESpawnAreaShape"));
	}
	return Z_Registration_Info_UEnum_ESpawnAreaShape.OuterSingleton;
}
template<> DAI_SPAWNER_API UEnum* StaticEnum<ESpawnAreaShape>()
{
	return ESpawnAreaShape_StaticEnum();
}
struct Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Circle.DisplayName", "Circle" },
		{ "Circle.Name", "ESpawnAreaShape::Circle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum describing the shape of the spawn area.  Circle and Square are\n * straightforward geometric primitives, Curve allows sampling of a user supplied\n * curve asset to shape the boundary.\n */" },
#endif
		{ "Curve.DisplayName", "Curve" },
		{ "Curve.Name", "ESpawnAreaShape::Curve" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
		{ "Square.DisplayName", "Square" },
		{ "Square.Name", "ESpawnAreaShape::Square" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum describing the shape of the spawn area.  Circle and Square are\nstraightforward geometric primitives, Curve allows sampling of a user supplied\ncurve asset to shape the boundary." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpawnAreaShape::Circle", (int64)ESpawnAreaShape::Circle },
		{ "ESpawnAreaShape::Square", (int64)ESpawnAreaShape::Square },
		{ "ESpawnAreaShape::Curve", (int64)ESpawnAreaShape::Curve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DAI_Spawner,
	nullptr,
	"ESpawnAreaShape",
	"ESpawnAreaShape",
	Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape()
{
	if (!Z_Registration_Info_UEnum_ESpawnAreaShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpawnAreaShape.InnerSingleton, Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpawnAreaShape.InnerSingleton;
}
// End Enum ESpawnAreaShape

// Begin ScriptStruct FSpawnEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnEntry;
class UScriptStruct* FSpawnEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnEntry, (UObject*)Z_Construct_UPackage__Script_DAI_Spawner(), TEXT("SpawnEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnEntry.OuterSingleton;
}
template<> DAI_SPAWNER_API UScriptStruct* StaticStruct<FSpawnEntry>()
{
	return FSpawnEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A single entry in the spawn list.  Each entry specifies weight, amount per batch,\n * whether it\xe2\x80\x99s unique, cooldowns, optional static mesh (with persistence) and required tags.\n */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single entry in the spawn list.  Each entry specifies weight, amount per batch,\nwhether it\xe2\x80\x99s unique, cooldowns, optional static mesh (with persistence) and required tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The actor class to spawn. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actor class to spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Spawn|Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Static mesh to instance along with the actor (optional). */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh to instance along with the actor (optional)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshPersists_MetaData[] = {
		{ "Category", "Spawn|Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the mesh should persist after the actor is destroyed. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the mesh should persist after the actor is destroyed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of units to spawn for this entry in a batch. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of units to spawn for this entry in a batch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Weight for random selection. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weight for random selection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Chance to skip spawn even if selected (0..1). */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chance to skip spawn even if selected (0..1)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUniqueInstance_MetaData[] = {
		{ "Category", "Spawn|Unique" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Only one instance of this actor may exist at once. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only one instance of this actor may exist at once." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueRespawnCooldown_MetaData[] = {
		{ "Category", "Spawn|Unique" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cooldown in seconds before another of this class can spawn (unique). */" },
#endif
		{ "EditCondition", "bUniqueInstance" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cooldown in seconds before another of this class can spawn (unique)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredPlayerTags_MetaData[] = {
		{ "Category", "Spawn|Requirements" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Required tags on first player pawn to allow spawn. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Required tags on first player pawn to allow spawn." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static void NewProp_bMeshPersists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshPersists;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
	static void NewProp_bUniqueInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniqueInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UniqueRespawnCooldown;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredPlayerTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredPlayerTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
void Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bMeshPersists_SetBit(void* Obj)
{
	((FSpawnEntry*)Obj)->bMeshPersists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bMeshPersists = { "bMeshPersists", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnEntry), &Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bMeshPersists_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshPersists_MetaData), NewProp_bMeshPersists_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, SpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChance_MetaData), NewProp_SpawnChance_MetaData) };
void Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUniqueInstance_SetBit(void* Obj)
{
	((FSpawnEntry*)Obj)->bUniqueInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUniqueInstance = { "bUniqueInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnEntry), &Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUniqueInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUniqueInstance_MetaData), NewProp_bUniqueInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_UniqueRespawnCooldown = { "UniqueRespawnCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, UniqueRespawnCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueRespawnCooldown_MetaData), NewProp_UniqueRespawnCooldown_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_RequiredPlayerTags_Inner = { "RequiredPlayerTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_RequiredPlayerTags = { "RequiredPlayerTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, RequiredPlayerTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredPlayerTags_MetaData), NewProp_RequiredPlayerTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bMeshPersists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_SpawnChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUniqueInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_UniqueRespawnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_RequiredPlayerTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_RequiredPlayerTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Spawner,
	nullptr,
	&NewStructOps,
	"SpawnEntry",
	Z_Construct_UScriptStruct_FSpawnEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnEntry_Statics::PropPointers),
	sizeof(FSpawnEntry),
	alignof(FSpawnEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnEntry()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnEntry.InnerSingleton, Z_Construct_UScriptStruct_FSpawnEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnEntry.InnerSingleton;
}
// End ScriptStruct FSpawnEntry

// Begin Class ADAISpawnManager Function GetSpawnLocation
struct Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics
{
	struct DAISpawnManager_eventGetSpawnLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a spawn point for the actor (center + random offset within area). */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a spawn point for the actor (center + random offset within area)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAISpawnManager_eventGetSpawnLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAISpawnManager, nullptr, "GetSpawnLocation", nullptr, nullptr, Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::DAISpawnManager_eventGetSpawnLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::DAISpawnManager_eventGetSpawnLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAISpawnManager::execGetSpawnLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSpawnLocation();
	P_NATIVE_END;
}
// End Class ADAISpawnManager Function GetSpawnLocation

// Begin Class ADAISpawnManager Function HandleSpawnedActorDestroyed
struct Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics
{
	struct DAISpawnManager_eventHandleSpawnedActorDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAISpawnManager_eventHandleSpawnedActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAISpawnManager, nullptr, "HandleSpawnedActorDestroyed", nullptr, nullptr, Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::DAISpawnManager_eventHandleSpawnedActorDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::DAISpawnManager_eventHandleSpawnedActorDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAISpawnManager::execHandleSpawnedActorDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSpawnedActorDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class ADAISpawnManager Function HandleSpawnedActorDestroyed

// Begin Class ADAISpawnManager Function SpawnActors
struct Z_Construct_UFunction_ADAISpawnManager_SpawnActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trigger a spawn batch now. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger a spawn batch now." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAISpawnManager_SpawnActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAISpawnManager, nullptr, "SpawnActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_SpawnActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAISpawnManager_SpawnActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAISpawnManager_SpawnActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAISpawnManager_SpawnActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAISpawnManager::execSpawnActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnActors();
	P_NATIVE_END;
}
// End Class ADAISpawnManager Function SpawnActors

// Begin Class ADAISpawnManager
void ADAISpawnManager::StaticRegisterNativesADAISpawnManager()
{
	UClass* Class = ADAISpawnManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpawnLocation", &ADAISpawnManager::execGetSpawnLocation },
		{ "HandleSpawnedActorDestroyed", &ADAISpawnManager::execHandleSpawnedActorDestroyed },
		{ "SpawnActors", &ADAISpawnManager::execSpawnActors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAISpawnManager);
UClass* Z_Construct_UClass_ADAISpawnManager_NoRegister()
{
	return ADAISpawnManager::StaticClass();
}
struct Z_Construct_UClass_ADAISpawnManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DAISpawnManager \xe2\x80\x93 manages weighted, batched spawns plus optional instanced meshes,\n * editor debug visualisation, and (now) safety & nav validation.\n */" },
#endif
		{ "IncludePath", "DAISpawnManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DAISpawnManager \xe2\x80\x93 manages weighted, batched spawns plus optional instanced meshes,\neditor debug visualisation, and (now) safety & nav validation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HISMComponent_MetaData[] = {
		{ "Category", "Spawn|Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Root HISM that owns per-mesh HISM children. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root HISM that owns per-mesh HISM children." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMarker_MetaData[] = {
		{ "Category", "Spawn|Marker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use a placed marker to supply spawn location for meshes; actors use marker\xe2\x80\x99s SpawnPoint. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use a placed marker to supply spawn location for meshes; actors use marker\xe2\x80\x99s SpawnPoint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerActor_MetaData[] = {
		{ "Category", "Spawn|Marker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Marker actor, if using a marker. */" },
#endif
		{ "EditCondition", "bUseMarker" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Marker actor, if using a marker." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaShape_MetaData[] = {
		{ "Category", "Spawn|Area" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Area shape. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Area shape." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaSize_MetaData[] = {
		{ "Category", "Spawn|Area" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Area radius/half-extent depending on shape. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Area radius/half-extent depending on shape." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaCurve_MetaData[] = {
		{ "Category", "Spawn|Area" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional curve for custom boundary. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional curve for custom boundary." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draw editor debug. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw editor debug." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEntries_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entries used for weighted selection. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entries used for weighted selection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnBeginPlay_MetaData[] = {
		{ "Category", "Spawn|Timing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn immediately on BeginPlay. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn immediately on BeginPlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoopSpawning_MetaData[] = {
		{ "Category", "Spawn|Timing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loop automatic spawning between min/max interval. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loop automatic spawning between min/max interval." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnIntervalMin_MetaData[] = {
		{ "Category", "Spawn|Timing" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnIntervalMax_MetaData[] = {
		{ "Category", "Spawn|Timing" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnsPerTick_MetaData[] = {
		{ "Category", "Spawn|Perf" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max number spawned per tick (budget). */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max number spawned per tick (budget)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshToHISM_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One HISM per unique mesh, all owned by this spawner. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One HISM per unique mesh, all owned by this spawner." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceBetweenSpawns_MetaData[] = {
		{ "Category", "Spawn|Safety" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Min distance between any two spawned actors (units). */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min distance between any two spawned actors (units)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceFromPlayer_MetaData[] = {
		{ "Category", "Spawn|Safety" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Min distance from the local player pawn. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min distance from the local player pawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlacementAttempts_MetaData[] = {
		{ "Category", "Spawn|Safety" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max attempts to find a safe spot for one spawn before skipping. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max attempts to find a safe spot for one spawn before skipping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValidateNavmesh_MetaData[] = {
		{ "Category", "Spawn|Nav" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Perform navmesh validation with ProjectPointToNavigation. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perform navmesh validation with ProjectPointToNavigation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNearestOnNavFail_MetaData[] = {
		{ "Category", "Spawn|Nav" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If nav validation fails, try nearest point on navmesh. */" },
#endif
		{ "EditCondition", "bValidateNavmesh" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If nav validation fails, try nearest point on navmesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorZOffset_MetaData[] = {
		{ "Category", "Spawn|Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Z offset applied to actor spawns (after nav projection). */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Z offset applied to actor spawns (after nav projection)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshZOffset_MetaData[] = {
		{ "Category", "Spawn|Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Z offset applied to static mesh instances. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Z offset applied to static mesh instances." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipWhenUnsafe_MetaData[] = {
		{ "Category", "Spawn|Safety" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If no safe placement found within MaxPlacementAttempts, skip the spawn. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If no safe placement found within MaxPlacementAttempts, skip the spawn." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HISMComponent;
	static void NewProp_bUseMarker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMarker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AreaShape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AreaShape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AreaCurve;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnEntries;
	static void NewProp_bSpawnOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnBeginPlay;
	static void NewProp_bLoopSpawning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopSpawning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnIntervalMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnIntervalMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpawnsPerTick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToHISM_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToHISM_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MeshToHISM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceBetweenSpawns;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceFromPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlacementAttempts;
	static void NewProp_bValidateNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateNavmesh;
	static void NewProp_bUseNearestOnNavFail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNearestOnNavFail;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorZOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshZOffset;
	static void NewProp_bSkipWhenUnsafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipWhenUnsafe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADAISpawnManager_GetSpawnLocation, "GetSpawnLocation" }, // 2415207241
		{ &Z_Construct_UFunction_ADAISpawnManager_HandleSpawnedActorDestroyed, "HandleSpawnedActorDestroyed" }, // 2817272758
		{ &Z_Construct_UFunction_ADAISpawnManager_SpawnActors, "SpawnActors" }, // 923303414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAISpawnManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_HISMComponent = { "HISMComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, HISMComponent), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HISMComponent_MetaData), NewProp_HISMComponent_MetaData) };
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseMarker_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bUseMarker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseMarker = { "bUseMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseMarker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMarker_MetaData), NewProp_bUseMarker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MarkerActor = { "MarkerActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, MarkerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerActor_MetaData), NewProp_MarkerActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_AreaShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_AreaShape = { "AreaShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, AreaShape), Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaShape_MetaData), NewProp_AreaShape_MetaData) }; // 3675818638
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_AreaSize = { "AreaSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, AreaSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaSize_MetaData), NewProp_AreaSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_AreaCurve = { "AreaCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, AreaCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaCurve_MetaData), NewProp_AreaCurve_MetaData) };
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnEntries_Inner = { "SpawnEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpawnEntry, METADATA_PARAMS(0, nullptr) }; // 2375111
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnEntries = { "SpawnEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, SpawnEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnEntries_MetaData), NewProp_SpawnEntries_MetaData) }; // 2375111
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSpawnOnBeginPlay_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bSpawnOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSpawnOnBeginPlay = { "bSpawnOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSpawnOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnOnBeginPlay_MetaData), NewProp_bSpawnOnBeginPlay_MetaData) };
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bLoopSpawning_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bLoopSpawning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bLoopSpawning = { "bLoopSpawning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bLoopSpawning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoopSpawning_MetaData), NewProp_bLoopSpawning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnIntervalMin = { "SpawnIntervalMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, SpawnIntervalMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnIntervalMin_MetaData), NewProp_SpawnIntervalMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnIntervalMax = { "SpawnIntervalMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, SpawnIntervalMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnIntervalMax_MetaData), NewProp_SpawnIntervalMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MaxSpawnsPerTick = { "MaxSpawnsPerTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, MaxSpawnsPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnsPerTick_MetaData), NewProp_MaxSpawnsPerTick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM_ValueProp = { "MeshToHISM", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM_Key_KeyProp = { "MeshToHISM_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM = { "MeshToHISM", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, MeshToHISM), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshToHISM_MetaData), NewProp_MeshToHISM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MinDistanceBetweenSpawns = { "MinDistanceBetweenSpawns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, MinDistanceBetweenSpawns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceBetweenSpawns_MetaData), NewProp_MinDistanceBetweenSpawns_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MinDistanceFromPlayer = { "MinDistanceFromPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, MinDistanceFromPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceFromPlayer_MetaData), NewProp_MinDistanceFromPlayer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MaxPlacementAttempts = { "MaxPlacementAttempts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, MaxPlacementAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlacementAttempts_MetaData), NewProp_MaxPlacementAttempts_MetaData) };
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bValidateNavmesh_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bValidateNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bValidateNavmesh = { "bValidateNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bValidateNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValidateNavmesh_MetaData), NewProp_bValidateNavmesh_MetaData) };
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseNearestOnNavFail_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bUseNearestOnNavFail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseNearestOnNavFail = { "bUseNearestOnNavFail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseNearestOnNavFail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNearestOnNavFail_MetaData), NewProp_bUseNearestOnNavFail_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_ActorZOffset = { "ActorZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, ActorZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorZOffset_MetaData), NewProp_ActorZOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshZOffset = { "MeshZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, MeshZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshZOffset_MetaData), NewProp_MeshZOffset_MetaData) };
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSkipWhenUnsafe_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bSkipWhenUnsafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSkipWhenUnsafe = { "bSkipWhenUnsafe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSkipWhenUnsafe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipWhenUnsafe_MetaData), NewProp_bSkipWhenUnsafe_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAISpawnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_HISMComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MarkerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_AreaShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_AreaShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_AreaSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_AreaCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSpawnOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bLoopSpawning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnIntervalMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnIntervalMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MaxSpawnsPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MinDistanceBetweenSpawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MinDistanceFromPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MaxPlacementAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bValidateNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseNearestOnNavFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_ActorZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSkipWhenUnsafe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADAISpawnManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Spawner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAISpawnManager_Statics::ClassParams = {
	&ADAISpawnManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADAISpawnManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADAISpawnManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADAISpawnManager()
{
	if (!Z_Registration_Info_UClass_ADAISpawnManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAISpawnManager.OuterSingleton, Z_Construct_UClass_ADAISpawnManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADAISpawnManager.OuterSingleton;
}
template<> DAI_SPAWNER_API UClass* StaticClass<ADAISpawnManager>()
{
	return ADAISpawnManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADAISpawnManager);
ADAISpawnManager::~ADAISpawnManager() {}
// End Class ADAISpawnManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpawnAreaShape_StaticEnum, TEXT("ESpawnAreaShape"), &Z_Registration_Info_UEnum_ESpawnAreaShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3675818638U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpawnEntry::StaticStruct, Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewStructOps, TEXT("SpawnEntry"), &Z_Registration_Info_UScriptStruct_SpawnEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnEntry), 2375111U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADAISpawnManager, ADAISpawnManager::StaticClass, TEXT("ADAISpawnManager"), &Z_Registration_Info_UClass_ADAISpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAISpawnManager), 286565048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_458303098(TEXT("/Script/DAI_Spawner"),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
