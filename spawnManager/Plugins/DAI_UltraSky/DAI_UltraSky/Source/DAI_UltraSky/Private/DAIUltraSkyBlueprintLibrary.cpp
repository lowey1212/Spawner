#include "DAIUltraSkyBlueprintLibrary.h"
#include "DAIUltraSkyActor.h"
#include "DAIHubSubsystem.h"
#include "DAI/Hub/DAIHubAccess.h"
#include "Interfaces/DAIUltraSkyService.h"

static TScriptInterface<IDAIUltraSkyService> GetUltraSkyService(const UObject *WorldContext)
{
    if (!WorldContext)
        return nullptr;
    if (UWorld *World = WorldContext->GetWorld())
    {
        if (UGameInstance *GI = World->GetGameInstance())
        {
            if (auto *Hub = DAI_HUB(GI))
            {
                return Hub->GetService<IDAIUltraSkyService>();
            }
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
    if (TScriptInterface<IDAIUltraSkyService> Svc = GetUltraSkyService(WorldContextObject))
    {
        return Cast<ADAIUltraSkyActor>(Svc.GetObject());
    }
    return nullptr;
}

float UDAIUltraSkyBlueprintLibrary::GetUltraSkyTimeOfDay(const UObject *WorldContextObject)
{
    if (TScriptInterface<IDAIUltraSkyService> Svc = GetUltraSkyService(WorldContextObject))
    {
        return Svc->GetTimeOfDay();
    }
    return 0.f;
}

FName UDAIUltraSkyBlueprintLibrary::GetUltraSkyCondition(const UObject *WorldContextObject)
{
    if (TScriptInterface<IDAIUltraSkyService> Svc = GetUltraSkyService(WorldContextObject))
    {
        return Svc->GetCurrentCondition();
    }
    return NAME_None;
}

float UDAIUltraSkyBlueprintLibrary::GetUltraSkySnowAccum(const UObject *WorldContextObject)
{
    if (TScriptInterface<IDAIUltraSkyService> Svc = GetUltraSkyService(WorldContextObject))
    {
        return Svc->GetSnowAccumulation();
    }
    return 0.f;
}

float UDAIUltraSkyBlueprintLibrary::GetUltraSkyWindIntensity(const UObject *WorldContextObject)
{
    if (TScriptInterface<IDAIUltraSkyService> Svc = GetUltraSkyService(WorldContextObject))
    {
        return Svc->GetWindIntensity();
    }
    return 0.f;
}

void UDAIUltraSkyBlueprintLibrary::ForceUltraSkyCondition(const UObject *WorldContextObject, FName ConditionName)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActorFromService(WorldContextObject))
    {
        Actor->ForceCondition(ConditionName);
    }
}

float UDAIUltraSkyBlueprintLibrary::GetUltraSkyWetness(const UObject *WorldContextObject)
{
    if (TScriptInterface<IDAIUltraSkyService> Svc = GetUltraSkyService(WorldContextObject))
    {
        return Svc->GetWetness();
    }
    return 0.f;
}

FName UDAIUltraSkyBlueprintLibrary::GetUltraSkyBiome(const UObject *WorldContextObject)
{
    if (TScriptInterface<IDAIUltraSkyService> Svc = GetUltraSkyService(WorldContextObject))
    {
        return Svc->GetActiveBiomeName();
    }
    return NAME_None;
}

bool UDAIUltraSkyBlueprintLibrary::GetUltraSkyIsPrecipitating(const UObject *WorldContextObject)
{
    if (TScriptInterface<IDAIUltraSkyService> Svc = GetUltraSkyService(WorldContextObject))
    {
        return Svc->IsPrecipitating();
    }
    return false;
}

bool UDAIUltraSkyBlueprintLibrary::GetUltraSkyIsStorming(const UObject *WorldContextObject)
{
    if (TScriptInterface<IDAIUltraSkyService> Svc = GetUltraSkyService(WorldContextObject))
    {
        return Svc->IsStorming();
    }
    return false;
}

float UDAIUltraSkyBlueprintLibrary::GetUltraSkyWindDirection(const UObject *WorldContextObject)
{
    if (TScriptInterface<IDAIUltraSkyService> Svc = GetUltraSkyService(WorldContextObject))
    {
        return Svc->GetWindDirectionDegrees();
    }
    return 0.f;
}

void UDAIUltraSkyBlueprintLibrary::SetUltraSkySnowThresholds(const UObject *WorldContextObject, const TArray<float> &Thresholds)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActorFromService(WorldContextObject))
    {
        Actor->SnowDepthThresholds = Thresholds;
    }
}

bool UDAIUltraSkyBlueprintLibrary::ForceUltraSkyBiomeByName(const UObject *WorldContextObject, FName BiomeAssetName, float BlendSeconds)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActorFromService(WorldContextObject))
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
