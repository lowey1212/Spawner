#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/Texture2D.h"
#include "DAIMapTypes.generated.h"

UENUM(BlueprintType)
enum class EDAIPOIVisibility : uint8
{
    Always UMETA(DisplayName = "Always"),
    WhenDiscovered UMETA(DisplayName = "When Discovered"),
    WhenNearby UMETA(DisplayName = "When Nearby"),
    Hidden UMETA(DisplayName = "Hidden")
};

USTRUCT(BlueprintType)
struct FDAIPOIDesc
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    FName Id;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    FText DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    FGameplayTagContainer Tags;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    FVector WorldLocation = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    TSoftObjectPtr<UTexture2D> Icon;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    EDAIPOIVisibility Visibility = EDAIPOIVisibility::Always;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    bool bIsFastTravelPoint = false;
};

USTRUCT(BlueprintType)
struct FDAIPOIHandle
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    FGuid Id;
};

USTRUCT(BlueprintType)
struct FDAISectionId
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map")
    int32 Value = 0;
};

UENUM(BlueprintType)
enum class EDAIPathRefreshPolicy : uint8
{
    Never,
    OnChange,
    Always
};

USTRUCT(BlueprintType)
struct FDAIPathRequest
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path")
    FVector Source = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path")
    FVector Target = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path")
    EDAIPathRefreshPolicy RefreshPolicy = EDAIPathRefreshPolicy::Always;
};

USTRUCT(BlueprintType)
struct FDAIPathPoly
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path")
    TArray<FVector2D> Points;
};

