#pragma once

#include "CoreMinimal.h"
#include "DAIMapTransform.generated.h"

USTRUCT(BlueprintType)
struct FDAIMapTransform
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map")
    FVector WorldOrigin = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map")
    FVector2D WorldExtent = FVector2D::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map")
    float NorthRotation = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map")
    float MetersPerPixel = 1.f;

    FVector2D WorldToMapUV(const FVector& WorldLocation) const
    {
        FVector2D Relative(WorldLocation.X - WorldOrigin.X, WorldLocation.Y - WorldOrigin.Y);
        Relative = Relative.GetRotated(-NorthRotation);
        return FVector2D(Relative.X / WorldExtent.X + 0.5f, Relative.Y / WorldExtent.Y + 0.5f);
    }

    FVector MapUVToWorld(const FVector2D& MapUV) const
    {
        FVector2D Local((MapUV.X - 0.5f) * WorldExtent.X, (MapUV.Y - 0.5f) * WorldExtent.Y);
        Local = Local.GetRotated(NorthRotation);
        return FVector(WorldOrigin.X + Local.X, WorldOrigin.Y + Local.Y, WorldOrigin.Z);
    }
};

