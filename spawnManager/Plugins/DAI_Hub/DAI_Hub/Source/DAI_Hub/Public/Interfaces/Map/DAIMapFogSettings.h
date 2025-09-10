#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "DAIMapFogSettings.generated.h"

UENUM(BlueprintType)
enum class EFogMode : uint8
{
    PerPlayer UMETA(DisplayName = "Per Player"),
    Shared UMETA(DisplayName = "Shared"),
    Mixed UMETA(DisplayName = "Mixed")
};

USTRUCT(BlueprintType)
struct FDAIFogConfig
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog")
    EFogMode Mode = EFogMode::PerPlayer;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog")
    float HiddenAlpha = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog")
    bool RadiusEnable = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog")
    float RadiusMeters = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog")
    TSoftObjectPtr<UTexture2D> LabelMapTexture;
};

