#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DAIUltraSkyTornado.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;

UCLASS(BlueprintType)
class DAI_ULTRASKY_API ADAIUltraSkyTornado : public AActor
{
    GENERATED_BODY()
public:
    ADAIUltraSkyTornado();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Tornado", meta = (ToolTip = "Niagara system used to render tornado."))
    TObjectPtr<UNiagaraSystem> TornadoSystem;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UltraSky|Tornado", meta = (ToolTip = "Spawned Niagara component instance."))
    TObjectPtr<UNiagaraComponent> TornadoComponent;

    // Visual scale/size helpers
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Tornado", meta = (ClampMin = "0.1", ToolTip = "Uniform visual scale multiplier applied to system."))
    float TornadoScale = 1.0f;

    // Movement
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Tornado", meta = (ToolTip = "World location the tornado moves toward each tick."))
    FVector TargetLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Tornado", meta = (ClampMin = "0.0", ToolTip = "Movement speed in cm/s toward TargetLocation."))
    float MoveSpeed = 600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Tornado", meta = (ToolTip = "If true starts automatically at BeginPlay."))
    bool bAutoStart = true;

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Tornado")
    void StartTornado();

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Tornado")
    void StopTornado();

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Tornado")
    void SetTargetLocation(const FVector &NewTarget);

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;
};
