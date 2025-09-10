#include "DAIUltraSkyBiomeVolume.h"

#include "Engine/World.h"

TWeakObjectPtr<UWorld> ADAIUltraSkyBiomeVolume::RegistryWorld = nullptr;
TArray<TWeakObjectPtr<ADAIUltraSkyBiomeVolume>> ADAIUltraSkyBiomeVolume::Registry;

ADAIUltraSkyBiomeVolume::ADAIUltraSkyBiomeVolume()
{
    bColored = true;
    BrushColor = FColor(80, 160, 255, 60);
}

void ADAIUltraSkyBiomeVolume::BeginPlay()
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

void ADAIUltraSkyBiomeVolume::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Registry.Remove(this);
    Super::EndPlay(EndPlayReason);
}

void ADAIUltraSkyBiomeVolume::GetAllVolumes(TArray<ADAIUltraSkyBiomeVolume*>& OutVolumes)
{
    OutVolumes.Reset();
    for (const TWeakObjectPtr<ADAIUltraSkyBiomeVolume>& It : Registry)
    {
        if (It.IsValid())
        {
            OutVolumes.Add(It.Get());
        }
    }
}

