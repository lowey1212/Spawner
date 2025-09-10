#include "DAIUltraSkyRadialStorm.h"
#include "Engine/World.h"

TWeakObjectPtr<UWorld> ADAIUltraSkyRadialStorm::RegistryWorld = nullptr;
TArray<TWeakObjectPtr<ADAIUltraSkyRadialStorm>> ADAIUltraSkyRadialStorm::Registry;

ADAIUltraSkyRadialStorm::ADAIUltraSkyRadialStorm()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADAIUltraSkyRadialStorm::BeginPlay()
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

void ADAIUltraSkyRadialStorm::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Registry.Remove(this);
    Super::EndPlay(EndPlayReason);
}

void ADAIUltraSkyRadialStorm::GetAllStorms(TArray<ADAIUltraSkyRadialStorm*>& OutStorms)
{
    OutStorms.Reset();
    for (const TWeakObjectPtr<ADAIUltraSkyRadialStorm>& It : Registry)
    {
        if (It.IsValid())
        {
            OutStorms.Add(It.Get());
        }
    }
}

