#pragma once
#include "CoreMinimal.h"
#include "DAIStructs.generated.h"

USTRUCT(BlueprintType) struct FQuestId      { GENERATED_BODY(); UPROPERTY(EditAnywhere) FName Value{NAME_None}; };
USTRUCT(BlueprintType) struct FFactionId    { GENERATED_BODY(); UPROPERTY(EditAnywhere) FName Value{NAME_None}; };
USTRUCT(BlueprintType) struct FSpawnTag     { GENERATED_BODY(); UPROPERTY(EditAnywhere) FName Value{NAME_None}; };
USTRUCT(BlueprintType) struct FSaveSlotMeta { GENERATED_BODY(); UPROPERTY(EditAnywhere) FString SlotName; UPROPERTY(EditAnywhere) int32 Version{1}; UPROPERTY(EditAnywhere) FDateTime Timestamp{FDateTime::UtcNow()}; };

USTRUCT(BlueprintType)
struct FInputSnapshot
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category="Replay")
    float Timestamp = 0.f;

    UPROPERTY(BlueprintReadWrite, Category="Replay")
    FVector Location = FVector::ZeroVector;

    UPROPERTY(BlueprintReadWrite, Category="Replay")
    FRotator Rotation = FRotator::ZeroRotator;

    UPROPERTY(BlueprintReadWrite, Category="Replay")
    FName ActionName = NAME_None;

    UPROPERTY(BlueprintReadWrite, Category="Replay")
    float Value = 0.f;
};

USTRUCT(BlueprintType)
struct FPlayerStatsMap
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category="Save")
    TMap<FString, float> Stats;
};
