#include "DAIUltraSkyLightningController.h"
#include "DAIUltraSkyActor.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "Kismet/GameplayStatics.h"

ADAIUltraSkyLightningController::ADAIUltraSkyLightningController()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADAIUltraSkyLightningController::BeginPlay()
{
    Super::BeginPlay();
    if (bEnabled)
    {
        ScheduleNextStrike();
    }
}

void ADAIUltraSkyLightningController::ScheduleNextStrike()
{
    if (!bEnabled)
    {
        return;
    }
    const float Lo = FMath::Max(0.1f, MinIntervalSeconds);
    const float Hi = FMath::Max(Lo, MaxIntervalSeconds);
    const float Delay = FMath::FRandRange(Lo, Hi);
    GetWorldTimerManager().SetTimer(TimerHandle_NextStrike, this, &ADAIUltraSkyLightningController::DoStrike, Delay, false);
}

void ADAIUltraSkyLightningController::DoStrike()
{
    if (!bEnabled)
    {
        return;
    }
    TriggerRandomStrike();
    ScheduleNextStrike();
}

void ADAIUltraSkyLightningController::TriggerRandomStrike()
{
    FVector Anchor = GetActorLocation();
    if (UltraSky)
    {
        Anchor = UltraSky->GetActorLocation();
        if (UltraSky->WeatherAnchor)
        {
            Anchor = UltraSky->WeatherAnchor->GetActorLocation();
        }
    }

    const float R = (FMath::FRand() < ChanceNearAnchor) ? StrikeRadius * 0.25f : StrikeRadius;
    const float Angle = FMath::FRandRange(0.0f, 2.0f * PI);
    const FVector Offset(FMath::Cos(Angle) * R, FMath::Sin(Angle) * R, 0.0f);
    const FVector Loc = Anchor + Offset + FVector(0, 0, StrikeHeight);
    TriggerStrikeAtLocation(Loc);
}

void ADAIUltraSkyLightningController::TriggerStrikeAtLocation(const FVector& Location)
{
    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }

    if (LightningSystem)
    {
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(World, LightningSystem, Location, FRotator(-90.f, 0.f, 0.f));
    }
    if (LightningGlowSystem)
    {
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(World, LightningGlowSystem, Location, FRotator::ZeroRotator);
    }

    if (ThunderSound)
    {
        // Approximate delay based on distance to (player) anchor
        FVector Anchor = Location;
        if (UltraSky)
        {
            Anchor = UltraSky->GetActorLocation();
            if (UltraSky->WeatherAnchor)
            {
                Anchor = UltraSky->WeatherAnchor->GetActorLocation();
            }
        }
        const float DistKm = FVector::Dist(Location, Anchor) / 100000.0f; // UU to km (1uu=1cm)
        const float Delay = FMath::Max(0.0f, ThunderDelayPerKm * DistKm);
        FTimerHandle H;
        FTimerDelegate D;
        D.BindLambda([this, Location]()
        {
            UGameplayStatics::PlaySoundAtLocation(this, ThunderSound, Location);
        });
        GetWorldTimerManager().SetTimer(H, D, Delay, false);
    }
}

