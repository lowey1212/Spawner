#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "Math/Box2D.h"
#include "DAIMapTypes.h"
#include "DAIMapFogSettings.h"
#include "IDAIMapService.generated.h"

UINTERFACE(Blueprintable)
class UDAIMapService : public UInterface
{
    GENERATED_BODY()
};

class IDAIMapService
{
    GENERATED_BODY()

public:
    // POIs & icons
    virtual FDAIPOIHandle RegisterPOI(const FDAIPOIDesc& Desc) = 0;
    virtual void UpdatePOI(const FDAIPOIHandle& Handle, const FDAIPOIDesc& NewDesc) = 0;
    virtual void UnregisterPOI(const FDAIPOIHandle& Handle) = 0;
    virtual void GetPOIsInView(const FBox2D& MapViewRect, TArray<FDAIPOIDesc>& Out) const = 0;

    // Fog
    virtual void SetFogConfig(const FDAIFogConfig& Config) = 0;
    virtual void RevealSection(uint16 SectionId) = 0;
    virtual void RevealSections(const TArray<uint16>& SectionIds) = 0;
    virtual void RevealByTag(FGameplayTag Tag) = 0;
    virtual bool IsSectionRevealed(uint16 SectionId) const = 0;
    virtual float GetRevealedPercent() const = 0;

    // Hybrid radius
    virtual void SetRadiusRevealEnabled(bool bEnabled) = 0;
    virtual void SetRadiusRevealMeters(float Meters) = 0;

    // Routes
    virtual bool GetRoute(const FDAIPathRequest& Req, FDAIPathPoly& OutPath) = 0;

    // Map state
    virtual const struct FDAIMapTransform* GetMapTransform() const = 0;
};

