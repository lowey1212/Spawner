#include "SpawnManagerComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

TMap<FName, int32> USpawnManagerComponent::GlobalTagCounts;
TMap<FName, double> USpawnManagerComponent::ClassCooldowns;
TMap<FName, double> USpawnManagerComponent::TagCooldowns;
double USpawnManagerComponent::GlobalCooldownTime = 0.0;

USpawnManagerComponent::USpawnManagerComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

bool USpawnManagerComponent::CanSpawnEntry(const FManagedSpawnEntry& Entry) const
{
    if (Entry.GlobalCap >= 0)
    {
        for (const FGameplayTag& Tag : Entry.Tags)
        {
            const int32* Count = GlobalTagCounts.Find(Tag.GetTagName());
            if (Count && *Count >= Entry.GlobalCap)
            {
                return false;
            }
        }
    }
    return true;
}

float USpawnManagerComponent::GetEntryWeight(const FManagedSpawnEntry& Entry, const FSpawnContext& Context) const
{
    float Result = Entry.Weight;

    if (Entry.TimeOfDayWeight)
    {
        Result *= Entry.TimeOfDayWeight->GetFloatValue(Context.TimeOfDay);
    }
    if (Entry.PlayerLevelWeight)
    {
        Result *= Entry.PlayerLevelWeight->GetFloatValue(static_cast<float>(Context.PlayerLevel));
    }
    if (Entry.DifficultyWeight)
    {
        Result *= Entry.DifficultyWeight->GetFloatValue(static_cast<float>(Context.Difficulty));
    }

    for (const FGameplayTag& Tag : Context.GameplayTags)
    {
        if (const float* Multiplier = Entry.TagWeightModifiers.Find(Tag.GetTagName()))
        {
            Result *= *Multiplier;
        }
    }

    return Result;
}

bool USpawnManagerComponent::RespectCooldown(const FManagedSpawnEntry& Entry) const
{
    const double Now = FPlatformTime::Seconds();
    const double* LastTime = nullptr;

    switch (Entry.Cooldown.Scope)
    {
    case ECooldownScope::PerClass:
        if (Entry.ActorClass)
        {
            LastTime = ClassCooldowns.Find(Entry.ActorClass->GetFName());
        }
        break;
    case ECooldownScope::PerTag:
        for (const FGameplayTag& Tag : Entry.Tags)
        {
            if (const double* Found = TagCooldowns.Find(Tag.GetTagName()))
            {
                LastTime = Found;
                break;
            }
        }
        break;
    case ECooldownScope::Global:
        LastTime = &GlobalCooldownTime;
        break;
    }

    float Cooldown = Entry.Cooldown.BaseCooldown;
    if (Entry.Cooldown.CooldownCurve)
    {
        Cooldown = Entry.Cooldown.CooldownCurve->GetFloatValue(Cooldown);
    }

    if (LastTime)
    {
        return (Now - *LastTime) >= Cooldown;
    }
    return true;
}

void USpawnManagerComponent::UpdateCooldown(const FManagedSpawnEntry& Entry)
{
    const double Now = FPlatformTime::Seconds();
    switch (Entry.Cooldown.Scope)
    {
    case ECooldownScope::PerClass:
        if (Entry.ActorClass)
        {
            ClassCooldowns.Add(Entry.ActorClass->GetFName(), Now);
        }
        break;
    case ECooldownScope::PerTag:
        for (const FGameplayTag& Tag : Entry.Tags)
        {
            TagCooldowns.Add(Tag.GetTagName(), Now);
        }
        break;
    case ECooldownScope::Global:
        GlobalCooldownTime = Now;
        break;
    }
}

void USpawnManagerComponent::SpawnCycle(const FSpawnContext& Context)
{
    for (FManagedSpawnEntry& Entry : Entries)
    {
        if (!CanSpawnEntry(Entry) || !RespectCooldown(Entry))
        {
            continue;
        }

        int32 DesiredCount = FMath::RandRange(Entry.MinPerCycle, Entry.MaxPerCycle);
        for (int32 i = 0; i < DesiredCount; ++i)
        {
            // Actual spawning would occur here. Implementation is project specific.
            for (const FGameplayTag& Tag : Entry.Tags)
            {
                GlobalTagCounts.FindOrAdd(Tag.GetTagName())++;
            }
            UpdateCooldown(Entry);
        }
    }
}

