#include "WeatherManager.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"

AWeatherManager::AWeatherManager()
{
    PrimaryActorTick.bCanEverTick = false;
    CurrentWind = FVector::ZeroVector;
}

void AWeatherManager::BeginPlay()
{
    Super::BeginPlay();
    UpdateFromVolumes();
}

void AWeatherManager::SetWind(const FVector& Direction, float Speed)
{
    CurrentWind = Direction.GetSafeNormal() * Speed;
    if (ActiveCloudComponent)
    {
        ActiveCloudComponent->SetVariableVec3(TEXT("WindVelocity"), CurrentWind);
    }
    if (ActivePrecipitationComponent)
    {
        ActivePrecipitationComponent->SetVariableVec3(TEXT("WindVelocity"), CurrentWind);
    }
}

void AWeatherManager::ApplyWeather(const FWeatherState& NewState)
{
    UpdateClouds(NewState);
    UpdatePrecipitation(NewState);
    SetWind(NewState.WindVelocity.GetSafeNormal(), NewState.WindVelocity.Size());
}

void AWeatherManager::SpawnLightning(const FVector& Location)
{
    if (LightningSystem)
    {
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), LightningSystem, Location);
    }
}

void AWeatherManager::RegisterVolume(AWeatherVolume* Volume)
{
    if (Volume)
    {
        ActiveVolumes.AddUnique(Volume);
        UpdateFromVolumes();
    }
}

void AWeatherManager::UnregisterVolume(AWeatherVolume* Volume)
{
    ActiveVolumes.Remove(Volume);
    UpdateFromVolumes();
}

void AWeatherManager::UpdateClouds(const FWeatherState& NewState)
{
    UNiagaraSystem* DesiredSystem = nullptr;
    switch (NewState.CloudType)
    {
        case ECloudType::Cumulus: DesiredSystem = CumulusSystem; break;
        case ECloudType::Cirrus: DesiredSystem = CirrusSystem; break;
        case ECloudType::Storm: DesiredSystem = StormSystem; break;
    }

    if (DesiredSystem)
    {
        if (!ActiveCloudComponent || ActiveCloudComponent->GetAsset() != DesiredSystem)
        {
            if (ActiveCloudComponent)
            {
                ActiveCloudComponent->Deactivate();
                ActiveCloudComponent->DestroyComponent();
            }
            ActiveCloudComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
                DesiredSystem, GetRootComponent(), NAME_None,
                FVector::ZeroVector, FRotator::ZeroRotator,
                EAttachLocation::KeepRelativeOffset, true);
        }

        if (ActiveCloudComponent)
        {
            ActiveCloudComponent->SetVariableFloat(TEXT("Density"), NewState.CloudDensity);
            ActiveCloudComponent->SetVariableFloat(TEXT("Speed"), NewState.CloudSpeed);
        }
    }
    else if (ActiveCloudComponent)
    {
        ActiveCloudComponent->Deactivate();
        ActiveCloudComponent->DestroyComponent();
        ActiveCloudComponent = nullptr;
    }
}

void AWeatherManager::UpdatePrecipitation(const FWeatherState& NewState)
{
    UNiagaraSystem* DesiredSystem = nullptr;
    switch (NewState.Precipitation)
    {
        case EPrecipitationType::Rain: DesiredSystem = RainSystem; break;
        case EPrecipitationType::Snow: DesiredSystem = SnowSystem; break;
        case EPrecipitationType::Hail: DesiredSystem = HailSystem; break;
        case EPrecipitationType::Fog: DesiredSystem = FogSystem; break;
        default: DesiredSystem = nullptr; break;
    }

    if (DesiredSystem)
    {
        if (!ActivePrecipitationComponent || ActivePrecipitationComponent->GetAsset() != DesiredSystem)
        {
            if (ActivePrecipitationComponent)
            {
                ActivePrecipitationComponent->Deactivate();
                ActivePrecipitationComponent->DestroyComponent();
            }
            ActivePrecipitationComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
                DesiredSystem, GetRootComponent(), NAME_None,
                FVector::ZeroVector, FRotator::ZeroRotator,
                EAttachLocation::KeepRelativeOffset, true);
        }

        if (ActivePrecipitationComponent)
        {
            ActivePrecipitationComponent->SetVariableFloat(TEXT("Intensity"), NewState.CloudDensity);
        }
    }
    else if (ActivePrecipitationComponent)
    {
        ActivePrecipitationComponent->Deactivate();
        ActivePrecipitationComponent->DestroyComponent();
        ActivePrecipitationComponent = nullptr;
    }
}

void AWeatherManager::UpdateFromVolumes()
{
    if (ActiveVolumes.Num() == 0)
    {
        return;
    }

    // Simple weighted blend between active volumes
    FWeatherState Blended = ActiveVolumes[0]->Weather;
    float TotalWeight = ActiveVolumes[0]->Weight;
    for (int32 i = 1; i < ActiveVolumes.Num(); ++i)
    {
        const AWeatherVolume* V = ActiveVolumes[i];
        float W = V->Weight;
        Blended.CloudDensity = FMath::Lerp(Blended.CloudDensity, V->Weather.CloudDensity, W);
        Blended.CloudSpeed = FMath::Lerp(Blended.CloudSpeed, V->Weather.CloudSpeed, W);
        Blended.WindVelocity = FMath::Lerp(Blended.WindVelocity, V->Weather.WindVelocity, W);
        if (W > 0.5f)
        {
            Blended.CloudType = V->Weather.CloudType;
            Blended.Precipitation = V->Weather.Precipitation;
        }
        TotalWeight += W;
    }

    ApplyWeather(Blended);
}

AWeatherVolume::AWeatherVolume()
{
    // Volume actors need to tick to detect overlaps
    bColored = true;
}

