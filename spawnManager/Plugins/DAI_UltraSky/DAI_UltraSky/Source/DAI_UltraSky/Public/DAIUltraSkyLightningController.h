#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DAIUltraSkyLightningController.generated.h"

class UNiagaraSystem;
class ADAIUltraSkyActor;
class USoundBase;

UCLASS(BlueprintType)
class DAI_ULTRASKY_API ADAIUltraSkyLightningController : public AActor
{
    GENERATED_BODY()
public:
    ADAIUltraSkyLightningController();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ToolTip = "Master enable for automatic lightning logic (manual trigger still works if false)."))
    bool bEnabled = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ClampMin = "0.1", ToolTip = "Minimum seconds between auto strikes."))
    float MinIntervalSeconds = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ClampMin = "0.1", ToolTip = "Maximum seconds between auto strikes."))
    float MaxIntervalSeconds = 15.0f;

    // Random strike radius around anchor (XY)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ClampMin = "0.0", ToolTip = "Random strike XY radius around anchor (world units)."))
    float StrikeRadius = 30000.0f;

    // Height above ground plane to spawn bolt start
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ToolTip = "Height above ground plane to spawn bolt start (world Z units)."))
    float StrikeHeight = 2000.0f;

    // Probability [0..1] to bias near anchor rather than anywhere in radius
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ClampMin = "0.0", ClampMax = "1.0", ToolTip = "Probability a strike is biased close to anchor vs anywhere in radius."))
    float ChanceNearAnchor = 0.5f;

    // Niagara assets for bolt and optional glow/sheet
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ToolTip = "Niagara system for primary lightning bolt."))
    TObjectPtr<UNiagaraSystem> LightningSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ToolTip = "Optional Niagara system for glow/secondary effect."))
    TObjectPtr<UNiagaraSystem> LightningGlowSystem;

    // Optional Ultra Sky reference; used to query anchor and condition
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ToolTip = "UltraSky actor used to fetch storm anchor / condition. Auto-found if null."))
    TObjectPtr<ADAIUltraSkyActor> UltraSky;

    // Optional thunder sound and delay (approx 3.0s per km IRL ~ 0.343 km/s)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ToolTip = "Optional thunder sound played after distance-based delay."))
    TObjectPtr<USoundBase> ThunderSound;

    // Seconds of delay per kilometer distance to anchor
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Lightning", meta = (ClampMin = "0.0", ToolTip = "Seconds of delay per kilometer of (approx) distance for thunder playback."))
    float ThunderDelayPerKm = 3.0f;

    // Immediate manual trigger
    UFUNCTION(BlueprintCallable, Category = "UltraSky|Lightning")
    void TriggerStrikeAtLocation(const FVector &Location);

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Lightning")
    void TriggerRandomStrike();

protected:
    virtual void BeginPlay() override;

private:
    void ScheduleNextStrike();
    void DoStrike();

    FTimerHandle TimerHandle_NextStrike;
};
