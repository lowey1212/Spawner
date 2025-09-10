#include "DAIUltraSkyWeatherOverrideVolume.h"

#include "Engine/World.h"

TWeakObjectPtr<UWorld> ADAIUltraSkyWeatherOverrideVolume::RegistryWorld = nullptr;
TArray<TWeakObjectPtr<ADAIUltraSkyWeatherOverrideVolume>> ADAIUltraSkyWeatherOverrideVolume::Registry;

ADAIUltraSkyWeatherOverrideVolume::ADAIUltraSkyWeatherOverrideVolume()
{
    bColored = true;
    BrushColor = FColor(255, 200, 50, 60);
}

void ADAIUltraSkyWeatherOverrideVolume::BeginPlay()
{
    Super::BeginPlay();
    UWorld* World = GetWorld();
    if (!RegistryWorld.IsValid() || RegistryWorld.Get() != World)
    {
        RegistryWorld = World;
        Registry.Reset();
    }
    Registry.AddUnique(this);
}

void ADAIUltraSkyWeatherOverrideVolume::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Registry.Remove(this);
    Super::EndPlay(EndPlayReason);
}

void ADAIUltraSkyWeatherOverrideVolume::GetAllVolumes(TArray<ADAIUltraSkyWeatherOverrideVolume*>& OutVolumes)
{
    OutVolumes.Reset();
    for (const TWeakObjectPtr<ADAIUltraSkyWeatherOverrideVolume>& It : Registry)
    {
        if (It.IsValid())
        {
            OutVolumes.Add(It.Get());
        }
    }
}

