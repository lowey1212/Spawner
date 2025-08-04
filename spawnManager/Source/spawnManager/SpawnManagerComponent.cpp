#include "SpawnManagerComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"

// Shared tracking data used by all spawn manager components
TMap<FName, int32> USpawnManagerComponent::GlobalTagCounts;
TMap<FName, double> USpawnManagerComponent::ClassCooldowns;
TMap<FName, double> USpawnManagerComponent::TagCooldowns;
double USpawnManagerComponent::GlobalCooldownTime = 0.0;
TWeakObjectPtr<UWorld> USpawnManagerComponent::InitializedWorld;

USpawnManagerComponent::USpawnManagerComponent() {
  // Enable ticking so we can manage spawned actors every frame
  PrimaryComponentTick.bCanEverTick = true;
}

void USpawnManagerComponent::BeginPlay() {
  Super::BeginPlay();

  UWorld *World = GetWorld();
  // If this is the first component in a new world, reset global data
  if (!InitializedWorld.IsValid() || InitializedWorld.Get() != World) {
    GlobalTagCounts.Reset();
    ClassCooldowns.Reset();
    TagCooldowns.Reset();
    GlobalCooldownTime = 0.0;
    InitializedWorld = World;
  }

  // Prepare reusable actors before gameplay begins
  PrewarmPools();
}

void USpawnManagerComponent::TickComponent(
    float DeltaTime, ELevelTick TickType,
    FActorComponentTickFunction *ThisTickFunction) {
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  const double Now = FPlatformTime::Seconds();

  // Check each active spawn to see if it should be removed
  for (int32 Index = ActiveSpawns.Num() - 1; Index >= 0; --Index) {
    FActiveSpawn &Info = ActiveSpawns[Index];
    if (!Info.Actor) {
      ActiveSpawns.RemoveAt(Index);
      continue;
    }

    bool bDespawn = false;
    // Despawn after a certain lifetime
    if (Info.DespawnPolicy.TimeToLive >= 0.f &&
        (Now - Info.SpawnTime) > Info.DespawnPolicy.TimeToLive) {
      bDespawn = true;
    } else if (Info.DespawnPolicy.MaxDistance >= 0.f) {
      // Despawn if it strays too far
      const float DistSq = FVector::DistSquared(
          Info.SpawnTransform.GetLocation(), Info.Actor->GetActorLocation());
      if (DistSq > FMath::Square(Info.DespawnPolicy.MaxDistance)) {
        if (Info.DespawnPolicy.LeashRadius >= 0.f &&
            DistSq > FMath::Square(Info.DespawnPolicy.LeashRadius)) {
          // If leashing, snap back instead of despawning
          Info.Actor->SetActorLocation(Info.SpawnTransform.GetLocation());
        } else {
          bDespawn = true;
        }
      }
    } else if (Info.DespawnPolicy.bDespawnOutOfView &&
               !Info.Actor->WasRecentlyRendered(0.1f)) {
      // Despawn when off-screen
      bDespawn = true;
    }

    if (bDespawn) {
      HandleDespawn(Index);
    }
  }
}

AActor *FSpawnPool::Acquire(UWorld *World, TSubclassOf<AActor> Class,
                            const FTransform &Transform) {
  if (!World) {
    return nullptr;
  }
  // Try to reuse an existing inactive actor
  for (int32 i = 0; i < Inactive.Num(); ++i) {
    AActor *Actor = Inactive[i];
    if (Actor && Actor->GetClass() == Class) {
      Inactive.RemoveAtSwap(i);
      Actor->SetActorTransform(Transform);
      Actor->SetActorHiddenInGame(false);
      Actor->SetActorEnableCollision(true);
      return Actor;
    }
  }
  // None available, so spawn a brand new actor
  return World->SpawnActor<AActor>(Class, Transform, FActorSpawnParameters());
}

void FSpawnPool::Release(AActor *Actor) {
  if (!Actor) {
    return;
  }
  // Hide the actor and disable collisions so it can be reused later
  Actor->SetActorHiddenInGame(true);
  Actor->SetActorEnableCollision(false);
  Inactive.Add(Actor);
}

void USpawnManagerComponent::PrewarmPools() {
  UWorld *World = GetWorld();
  if (!World) {
    return;
  }

  // Create a few actors ahead of time so spawning later is faster
  for (const FManagedSpawnEntry &Entry : Entries) {
    if (!Entry.ActorClass || Entry.PrewarmCount <= 0) {
      continue;
    }
    FSpawnPool &Pool = Pools.FindOrAdd(Entry.ActorClass);
    for (int32 i = 0; i < Entry.PrewarmCount; ++i) {
      AActor *Actor =
          Pool.Acquire(World, Entry.ActorClass, FTransform::Identity);
      Pool.Release(Actor);
    }
  }
}

void USpawnManagerComponent::HandleDespawn(int32 Index) {
  if (!ActiveSpawns.IsValidIndex(Index)) {
    return;
  }
  FActiveSpawn Info = ActiveSpawns[Index];
  ActiveSpawns.RemoveAt(Index);

  // Return the main actor to its pool
  if (Info.Actor) {
    FSpawnPool &Pool = Pools.FindOrAdd(Info.Actor->GetClass());
    Pool.Release(Info.Actor);
  }

  // Clean up any companion actors
  for (AActor *Companion : Info.Companions) {
    if (Companion) {
      Companion->Destroy();
    }
  }

  // Schedule a respawn if requested
  if (Info.Actor && Info.Respawn.bRespawnOnDeath) {
    FTimerHandle Handle;
    GetWorld()->GetTimerManager().SetTimer(
        Handle,
        [this]() {
          FSpawnContext Context;
          SpawnCycle(Context);
        },
        Info.Respawn.RespawnDelay, false);
  }
}

TArray<FPersistentSpawnData> USpawnManagerComponent::SaveActiveSpawns() const {
  TArray<FPersistentSpawnData> Result;
  // Store enough info to recreate each active spawn later
  for (const FActiveSpawn &Spawn : ActiveSpawns) {
    if (Spawn.Actor) {
      FPersistentSpawnData Data;
      Data.ActorClass = Spawn.Actor->GetClass();
      Data.Transform = Spawn.Actor->GetActorTransform();
      Result.Add(Data);
    }
  }
  return Result;
}

void USpawnManagerComponent::LoadActiveSpawns(
    const TArray<FPersistentSpawnData> &Data) {
  UWorld *World = GetWorld();
  if (!World) {
    return;
  }
  // Recreate each saved spawn using the pool system
  for (const FPersistentSpawnData &Entry : Data) {
    if (!Entry.ActorClass) {
      continue;
    }
    FSpawnPool &Pool = Pools.FindOrAdd(Entry.ActorClass);
    AActor *Actor = Pool.Acquire(World, Entry.ActorClass, Entry.Transform);

    FActiveSpawn SpawnInfo;
    SpawnInfo.Actor = Actor;
    SpawnInfo.SpawnTransform = Entry.Transform;
    SpawnInfo.SpawnTime = FPlatformTime::Seconds();
    ActiveSpawns.Add(SpawnInfo);
  }
}

bool USpawnManagerComponent::CanSpawnEntry(
    const FManagedSpawnEntry &Entry) const {
  // Enforce global limits based on gameplay tags
  if (Entry.GlobalCap >= 0) {
    for (const FGameplayTag &Tag : Entry.Tags) {
      const int32 *Count = GlobalTagCounts.Find(Tag.GetTagName());
      if (Count && *Count >= Entry.GlobalCap) {
        return false;
      }
    }
  }
  return true;
}

float USpawnManagerComponent::GetEntryWeight(
    const FManagedSpawnEntry &Entry, const FSpawnContext &Context) const {
  float Result = Entry.Weight;

  // Modify weight based on various context factors
  if (Entry.TimeOfDayWeight) {
    Result *= Entry.TimeOfDayWeight->GetFloatValue(Context.TimeOfDay);
  }
  if (Entry.PlayerLevelWeight) {
    Result *= Entry.PlayerLevelWeight->GetFloatValue(
        static_cast<float>(Context.PlayerLevel));
  }
  if (Entry.DifficultyWeight) {
    Result *= Entry.DifficultyWeight->GetFloatValue(
        static_cast<float>(Context.Difficulty));
  }

  for (const FGameplayTag &Tag : Context.GameplayTags) {
    if (const float *Multiplier =
            Entry.TagWeightModifiers.Find(Tag.GetTagName())) {
      Result *= *Multiplier;
    }
  }

  return Result;
}

bool USpawnManagerComponent::RespectCooldown(
    const FManagedSpawnEntry &Entry) const {
  const double Now = FPlatformTime::Seconds();
  const double *LastTime = nullptr;

  // Look up when this entry was last spawned based on its scope
  switch (Entry.Cooldown.Scope) {
  case ECooldownScope::PerClass:
    if (Entry.ActorClass) {
      LastTime = ClassCooldowns.Find(Entry.ActorClass->GetFName());
    }
    break;
  case ECooldownScope::PerTag:
    for (const FGameplayTag &Tag : Entry.Tags) {
      if (const double *Found = TagCooldowns.Find(Tag.GetTagName())) {
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
  if (Entry.Cooldown.CooldownCurve) {
    Cooldown = Entry.Cooldown.CooldownCurve->GetFloatValue(Cooldown);
  }

  if (LastTime) {
    return (Now - *LastTime) >= Cooldown;
  }
  return true;
}

void USpawnManagerComponent::UpdateCooldown(const FManagedSpawnEntry &Entry) {
  const double Now = FPlatformTime::Seconds();
  // Record the time of this spawn based on the cooldown scope
  switch (Entry.Cooldown.Scope) {
  case ECooldownScope::PerClass:
    if (Entry.ActorClass) {
      ClassCooldowns.Add(Entry.ActorClass->GetFName(), Now);
    }
    break;
  case ECooldownScope::PerTag:
    for (const FGameplayTag &Tag : Entry.Tags) {
      TagCooldowns.Add(Tag.GetTagName(), Now);
    }
    break;
  case ECooldownScope::Global:
    GlobalCooldownTime = Now;
    break;
  }
}

void USpawnManagerComponent::SpawnCycle(const FSpawnContext &Context) {
  UWorld *World = GetWorld();
  if (!World) {
    return;
  }

  const double StartTime = FPlatformTime::Seconds();
  int32 SpawnedThisFrame = 0;

  // Go through each possible entry and spawn as needed
  for (FManagedSpawnEntry &Entry : Entries) {
    if (!CanSpawnEntry(Entry) || !RespectCooldown(Entry)) {
      continue;
    }

    int32 DesiredCount = FMath::RandRange(Entry.MinPerCycle, Entry.MaxPerCycle);
    for (int32 i = 0; i < DesiredCount; ++i) {
      // Respect per-frame spawn budgets
      if (SpawnedThisFrame >= SpawnCountBudget) {
        return;
      }
      if ((FPlatformTime::Seconds() - StartTime) * 1000.0 >=
          SpawnTimeBudgetMs) {
        return;
      }

      // Start from the owner's transform and apply offsets
      FTransform SpawnTransform =
          GetOwner() ? GetOwner()->GetActorTransform() : FTransform::Identity;
      SpawnTransform.SetLocation(
          SpawnTransform.GetLocation() +
          SpawnTransform.GetRotation().RotateVector(Entry.LocationOffset));

      // Apply random rotation
      const FRotator SpawnRandomRot(
          FMath::FRandRange(Entry.RandomRotationMin.Pitch,
                             Entry.RandomRotationMax.Pitch),
          FMath::FRandRange(Entry.RandomRotationMin.Yaw,
                             Entry.RandomRotationMax.Yaw),
          FMath::FRandRange(Entry.RandomRotationMin.Roll,
                             Entry.RandomRotationMax.Roll));
      SpawnTransform.ConcatenateRotation(SpawnRandomRot.Quaternion());

      // Apply random scale, either uniform or per-axis
      if (Entry.bUniformScale) {
        const float Scale =
            FMath::FRandRange(Entry.RandomScaleMin.X, Entry.RandomScaleMax.X);
        SpawnTransform.SetScale3D(FVector(Scale));
      } else {
        const FVector Scale(
            FMath::FRandRange(Entry.RandomScaleMin.X, Entry.RandomScaleMax.X),
            FMath::FRandRange(Entry.RandomScaleMin.Y, Entry.RandomScaleMax.Y),
            FMath::FRandRange(Entry.RandomScaleMin.Z, Entry.RandomScaleMax.Z));
        SpawnTransform.SetScale3D(Scale);
      }

      // Spawn or reuse an actor from the pool
      FSpawnPool &Pool = Pools.FindOrAdd(Entry.ActorClass);
      AActor *Actor = Pool.Acquire(World, Entry.ActorClass, SpawnTransform);
      if (!Actor) {
        continue;
      }

      FActiveSpawn Info;
      Info.Actor = Actor;
      Info.SpawnTransform = SpawnTransform;
      Info.SpawnTime = FPlatformTime::Seconds();
      Info.DespawnPolicy = Entry.DespawnPolicy;
      Info.Respawn = Entry.RespawnSettings;

      // Spawn any companion meshes alongside the main actor
      for (const FStaticMeshCompanion &Companion : Entry.StaticMeshCompanions) {
        if (!Companion.Mesh) {
          continue;
        }

        FTransform CompanionTransform = SpawnTransform;
        if (Companion.Placement == ECompanionPlacement::AtActor) {
          CompanionTransform = Actor->GetActorTransform();
        } else if (Companion.Placement == ECompanionPlacement::OffsetForward) {
          CompanionTransform = Actor->GetActorTransform();
          CompanionTransform.AddToTranslation(Actor->GetActorForwardVector() *
                                              Companion.ForwardOffset);
        }

        const FRotator CompanionRandomRot(
            FMath::FRandRange(Companion.RandomRotationMin.Pitch,
                              Companion.RandomRotationMax.Pitch),
            FMath::FRandRange(Companion.RandomRotationMin.Yaw,
                              Companion.RandomRotationMax.Yaw),
            FMath::FRandRange(Companion.RandomRotationMin.Roll,
                              Companion.RandomRotationMax.Roll));
        CompanionTransform.ConcatenateRotation(CompanionRandomRot.Quaternion());

        if (Companion.bUniformScale) {
          const float Scale = FMath::FRandRange(Companion.RandomScaleMin.X,
                                                Companion.RandomScaleMax.X);
          CompanionTransform.SetScale3D(FVector(Scale));
        } else {
          const FVector Scale(FMath::FRandRange(Companion.RandomScaleMin.X,
                                                Companion.RandomScaleMax.X),
                              FMath::FRandRange(Companion.RandomScaleMin.Y,
                                                Companion.RandomScaleMax.Y),
                              FMath::FRandRange(Companion.RandomScaleMin.Z,
                                                Companion.RandomScaleMax.Z));
          CompanionTransform.SetScale3D(Scale);
        }

        FActorSpawnParameters SpawnParams;
        AStaticMeshActor *MeshActor = World->SpawnActor<AStaticMeshActor>(
            AStaticMeshActor::StaticClass(), CompanionTransform, SpawnParams);
        if (!MeshActor) {
          continue;
        }

        UStaticMeshComponent *MeshComp = MeshActor->GetStaticMeshComponent();
        if (MeshComp) {
          // Apply the mesh and optionally a random material
          MeshComp->SetStaticMesh(Companion.Mesh);
          if (Companion.MaterialOverrides.Num() > 0) {
            int32 MatIdx = FMath::RandHelper(Companion.MaterialOverrides.Num());
            MeshComp->SetMaterial(0, Companion.MaterialOverrides[MatIdx]);
          }
        }

        if (Companion.Lifetime == ECompanionLifetime::TiedToActor) {
          // Keep the mesh attached to the main actor
          MeshActor->AttachToActor(
              Actor, FAttachmentTransformRules::KeepWorldTransform);
          Info.Companions.Add(MeshActor);
        } else if (Companion.Lifetime == ECompanionLifetime::TimedFade) {
          // Let the mesh destroy itself after a short time
          MeshActor->SetLifeSpan(Companion.LifetimeSeconds);
        }
      }

      ActiveSpawns.Add(Info);

      for (const FGameplayTag &Tag : Entry.Tags) {
        GlobalTagCounts.FindOrAdd(Tag.GetTagName())++;
      }
      UpdateCooldown(Entry);
      SpawnedThisFrame++;
    }
  }
}
