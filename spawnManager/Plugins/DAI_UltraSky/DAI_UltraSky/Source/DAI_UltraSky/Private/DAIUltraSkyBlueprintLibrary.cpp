#include "DAIUltraSkyBlueprintLibrary.h"
#include "DAIUltraSkyActor.h"
#include "EngineUtils.h"

static ADAIUltraSkyActor *GetUltraSkyActor(const UObject *WorldContext)
{
    if (!WorldContext)
        return nullptr;
    if (UWorld *World = WorldContext->GetWorld())
    {
        for (TActorIterator<ADAIUltraSkyActor> It(World); It; ++It)
        {
            return *It;
        }
    }
    return nullptr;
}

void UDAIUltraSkyBlueprintLibrary::SetUltraSkyTime(ADAIUltraSkyActor *UltraSky, float TimeOfDay)
{
    if (UltraSky)
    {
        UltraSky->SetTimeOfDay(TimeOfDay);
    }
}

void UDAIUltraSkyBlueprintLibrary::SetUltraSkyDayLength(ADAIUltraSkyActor *UltraSky, float DayLengthSeconds)
{
    if (UltraSky)
    {
        UltraSky->SetDayLengthSeconds(DayLengthSeconds);
    }
}

ADAIUltraSkyActor *UDAIUltraSkyBlueprintLibrary::GetUltraSkyActorFromService(const UObject *WorldContextObject)
{
    return GetUltraSkyActor(WorldContextObject);
}

float UDAIUltraSkyBlueprintLibrary::GetUltraSkyTimeOfDay(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetTimeOfDay();
    }
    return 0.f;
}

FName UDAIUltraSkyBlueprintLibrary::GetUltraSkyCondition(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetCurrentCondition();
    }
    return NAME_None;
}

float UDAIUltraSkyBlueprintLibrary::GetUltraSkySnowAccum(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetSnowAccumulation();
    }
    return 0.f;
}

float UDAIUltraSkyBlueprintLibrary::GetUltraSkyWindIntensity(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetWindIntensity();
    }
    return 0.f;
}

void UDAIUltraSkyBlueprintLibrary::ForceUltraSkyCondition(const UObject *WorldContextObject, FName ConditionName)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        Actor->ForceCondition(ConditionName);
    }
}

float UDAIUltraSkyBlueprintLibrary::GetUltraSkyWetness(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetWetness();
    }
    return 0.f;
}

FName UDAIUltraSkyBlueprintLibrary::GetUltraSkyBiome(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetActiveBiomeName();
    }
    return NAME_None;
}

bool UDAIUltraSkyBlueprintLibrary::GetUltraSkyIsPrecipitating(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->IsPrecipitating();
    }
    return false;
}

bool UDAIUltraSkyBlueprintLibrary::GetUltraSkyIsStorming(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->IsStorming();
    }
    return false;
}

float UDAIUltraSkyBlueprintLibrary::GetUltraSkyWindDirection(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetWindDirectionDegrees();
    }
    return 0.f;
}

void UDAIUltraSkyBlueprintLibrary::SetUltraSkySnowThresholds(const UObject *WorldContextObject, const TArray<float> &Thresholds)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        Actor->SnowDepthThresholds = Thresholds;
    }
}

bool UDAIUltraSkyBlueprintLibrary::ForceUltraSkyBiomeByName(const UObject *WorldContextObject, FName BiomeAssetName, float BlendSeconds)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        if (Actor->DefaultBiome && Actor->DefaultBiome->GetFName() == BiomeAssetName)
        {
            Actor->ForceApplyBiome(Actor->DefaultBiome, BlendSeconds);
            return true;
        }
        for (const TObjectPtr<UDAIUltraSkyBiomeData> &B : Actor->Presets)
        {
            if (B && B->GetFName() == BiomeAssetName)
            {
                Actor->ForceApplyBiome(B.Get(), BlendSeconds);
                return true;
            }
        }
    }
    return false;
}
