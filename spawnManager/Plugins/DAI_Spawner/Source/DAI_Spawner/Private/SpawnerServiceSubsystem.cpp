#include "SpawnerServiceSubsystem.h"

#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "SpawnerGameplayTags.h"
#include "Misc/Guid.h"

void USpawnerServiceSubsystem::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);

    // No hub available in standalone mode. Spawner registers itself locally via Subsystem only.
    (void)Collection;
}

void USpawnerServiceSubsystem::Deinitialize()
{
    ActiveSpawns.Reset();
    SpawnableTags.Reset();
    Super::Deinitialize();
}

FGuid USpawnerServiceSubsystem::RequestSpawn(const FGameplayTag &SpawnTag)
{
    PublishSpawnEvent(TAG_DAI_Spawn_Request, SpawnTag);

    // Standalone behavior: simple local approval using SpawnableTags.
    if (!SpawnableTags.Contains(SpawnTag))
    {
        PublishSpawnEvent(TAG_DAI_Spawn_Failed, SpawnTag);
        return FGuid();
    }

    const FGuid Handle = FGuid::NewGuid();
    ActiveSpawns.Add(Handle, SpawnTag);
    PublishSpawnEvent(TAG_DAI_Spawn_Approved, SpawnTag);
    return Handle;
}

void USpawnerServiceSubsystem::Despawn(const FGuid &SpawnHandle)
{
    if (FGameplayTag *Tag = ActiveSpawns.Find(SpawnHandle))
    {
        PublishSpawnEvent(TAG_DAI_Spawn_Despawned, *Tag);
        ActiveSpawns.Remove(SpawnHandle);
    }
}

void USpawnerServiceSubsystem::RegisterSpawnable(const FGameplayTag &SpawnTag)
{
    SpawnableTags.Add(SpawnTag);
}

void USpawnerServiceSubsystem::PublishSpawnEvent(const FGameplayTag &EventTag, const FGameplayTag &SpawnTag)
{
    // Standalone: no hub publish. Could hook into local logging or gameplay tag tracing if needed.
    (void)EventTag;
    (void)SpawnTag;
}

FName USpawnerServiceSubsystem::GetFragmentId() const
{
    static const FName FragmentId(TEXT("Spawner"));
    return FragmentId;
}

TSharedPtr<FJsonObject> USpawnerServiceSubsystem::GetSaveFragment() const
{
    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();
    TSharedPtr<FJsonObject> SpawnsObj = MakeShared<FJsonObject>();
    for (const TPair<FGuid, FGameplayTag> &Pair : ActiveSpawns)
    {
        SpawnsObj->SetStringField(Pair.Key.ToString(), Pair.Value.ToString());
    }
    Root->SetObjectField(TEXT("ActiveSpawns"), SpawnsObj);
    return Root;
}

void USpawnerServiceSubsystem::ApplySaveFragment(const TSharedPtr<FJsonObject> &Fragment)
{
    ActiveSpawns.Reset();

    if (!Fragment.IsValid())
    {
        return;
    }

    const TSharedPtr<FJsonObject> *SpawnsObj;
    if (Fragment->TryGetObjectField(TEXT("ActiveSpawns"), SpawnsObj))
    {
        for (const TPair<FString, TSharedPtr<FJsonValue>> &Pair : (*SpawnsObj)->Values)
        {
            FString TagStr = Pair.Value->AsString();
            FGameplayTag Tag = FGameplayTag::RequestGameplayTag(FName(*TagStr));
            RequestSpawn(Tag);
            PublishSpawnEvent(TAG_DAI_Spawn_ReplayedOnLoad, Tag);
        }
    }
}
