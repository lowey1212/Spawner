#pragma once

#include "UObject/Interface.h"
#include "DAIUltraSkyService.generated.h"

UINTERFACE(BlueprintType)
class UDAIUltraSkyService : public UInterface
{
    GENERATED_BODY()
};

class DAI_ULTRASKY_API IDAIUltraSkyService
{
    GENERATED_BODY()

public:
    virtual float GetTimeOfDay() const = 0;
    virtual FName GetActiveBiomeName() const = 0;
    virtual FName GetCurrentCondition() const = 0;
    virtual float GetSnowAccumulation() const = 0;
    virtual float GetWetness() const = 0;
    virtual bool IsPrecipitating() const = 0;
    virtual bool IsStorming() const = 0;
    virtual float GetWindIntensity() const = 0;
    virtual float GetWindDirectionDegrees() const = 0;
};
