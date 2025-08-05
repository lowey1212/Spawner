// Copyright Epic Games, Inc. All Rights Reserved.

/**
 * @file
 *
 * DAISpawnManager.cpp
 *
 * This file contains the implementation of ADAISpawnManager.  See
 * DAISpawnManager.h for a description of the intent behind this class.
 */

#include "DAISpawnManager.h"

#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "NavigationSystem.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Pawn.h"

 //////////////////////////////////////////////////////////////////////////
 // Local structs/types (unchanged)

//////////////////////////////////////////////////////////////////////////
// ADAISpawnManager

ADAISpawnManager::ADAISpawnManager()
{
    PrimaryActorTick.bCanEverTick = true;

    HISMComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISMComponent"));
    RootComponent = HISMComponent;
}

void ADAISpawnManager::OnConstruction(const FTransform& Transform)
{
    AActor::OnConstruction(Transform);
    if (UWorld* W = GetWorld()) { FlushPersistentDebugLines(W); }
    ClearNonPersistentDebug();
#if WITH_EDITOR  
    if (bDebug) { DrawDebugArea(); }
#endif  
}

// Called when the game starts or when spawned
void ADAISpawnManager::BeginPlay()
{
    Super::BeginPlay();

    if (bSpawnOnBeginPlay)
    {
        SpawnActorsInternal();
    }

    if (bLoopSpawning)
    {
        // Schedule the first automatic spawn.  We randomise the delay so that
        // multiple spawners starting at the same time do not spawn in lockstep.
        const float Delay = FMath::RandRange(SpawnIntervalMin, SpawnIntervalMax);
        GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &ADAISpawnManager::SpawnActorsInternal, Delay, false);
    }
}

void ADAISpawnManager::SpawnActors()
{
    SpawnActorsInternal();
}

//////////////////////////////////////////////////////////////////////////
// Utility

static bool HasRequiredTags(const AActor* PlayerPawn, const TArray<FName>& RequiredTags)
{
    if (!PlayerPawn || RequiredTags.Num() == 0) return true;
    for (const FName& Tag : RequiredTags)
    {
        if (!PlayerPawn->Tags.Contains(Tag))
        {
            return false;
        }
    }
    return true;
}

UHierarchicalInstancedStaticMeshComponent* ADAISpawnManager::GetOrCreateHISM(UStaticMesh* Mesh)
{
    if (!Mesh) return nullptr;

    if (UHierarchicalInstancedStaticMeshComponent** Found = MeshToHISM.Find(Mesh))
    {
        return *Found;
    }

    UHierarchicalInstancedStaticMeshComponent* NewHISM =
        NewObject<UHierarchicalInstancedStaticMeshComponent>(this, NAME_None, RF_Transactional);
    NewHISM->RegisterComponent();
    NewHISM->SetStaticMesh(Mesh);
    NewHISM->AttachToComponent(HISMComponent, FAttachmentTransformRules::KeepRelativeTransform);
    MeshToHISM.Add(Mesh, NewHISM);
    return NewHISM;
}

//////////////////////////////////////////////////////////////////////////
// Debug draw

void ADAISpawnManager::ClearNonPersistentDebug()
{
#if WITH_EDITOR
    if (UWorld* W = GetWorld())
    {
        FlushDebugStrings(W);
        FlushPersistentDebugLines(W);
    }
#endif
}

void ADAISpawnManager::DrawDebugArea() const
{
#if WITH_EDITOR
    if (!bDebug) return;

    const FVector Center = GetActorLocation();

    switch (AreaShape)
    {
    case ESpawnAreaShape::Circle:
        DrawDebugCircle(GetWorld(), Center, AreaSize, 64, FColor::Cyan, false, 0, 0, 10.f, FVector(1, 0, 0), FVector(0, 1, 0), false);
        break;
    case ESpawnAreaShape::Square:
    {
        const float H = AreaSize;
        const FVector P0 = Center + FVector(-H, -H, 0);
        const FVector P1 = Center + FVector(-H, H, 0);
        const FVector P2 = Center + FVector(H, H, 0);
        const FVector P3 = Center + FVector(H, -H, 0);
        DrawDebugLine(GetWorld(), P0, P1, FColor::Cyan, false, 0, 0, 2);
        DrawDebugLine(GetWorld(), P1, P2, FColor::Cyan, false, 0, 0, 2);
        DrawDebugLine(GetWorld(), P2, P3, FColor::Cyan, false, 0, 0, 2);
        DrawDebugLine(GetWorld(), P3, P0, FColor::Cyan, false, 0, 0, 2);
    }
    break;
    case ESpawnAreaShape::Curve:
        if (AreaCurve)
        {
            const int32 Steps = 64;
            FVector Prev = Center + FVector(-AreaSize, 0, 0);
            for (int32 i = 1; i <= Steps; ++i)
            {
                const float T = float(i) / Steps;
                const float R = AreaCurve->GetFloatValue(T) * AreaSize;
                const float Angle = T * 2.f * PI;
                const FVector Pt = Center + FVector(R * FMath::Cos(Angle), R * FMath::Sin(Angle), 0.f);
                DrawDebugLine(GetWorld(), Prev, Pt, FColor::Cyan, false, 0, 0, 2);
                Prev = Pt;
            }
        }
        break;
    }
#endif
}

//////////////////////////////////////////////////////////////////////////
// Spawn selection, timing & execution

FVector ADAISpawnManager::GetSpawnLocation() const
{
    const FVector Center = GetActorLocation();

    switch (AreaShape)
    {
    case ESpawnAreaShape::Circle:
    {
        const float Angle = FMath::FRandRange(0.f, 2.f * PI);
        const float Radius = FMath::Sqrt(FMath::FRand()) * AreaSize;
        return Center + FVector(Radius * FMath::Cos(Angle), Radius * FMath::Sin(Angle), 0.f);
    }
    case ESpawnAreaShape::Square:
    {
        const float X = FMath::FRandRange(-AreaSize, AreaSize);
        const float Y = FMath::FRandRange(-AreaSize, AreaSize);
        return Center + FVector(X, Y, 0.f);
    }
    case ESpawnAreaShape::Curve:
        if (AreaCurve)
        {
            const float T = FMath::FRand();
            const float R = AreaCurve->GetFloatValue(T) * AreaSize;
            const float Angle = T * 2.f * PI;
            return Center + FVector(R * FMath::Cos(Angle), R * FMath::Sin(Angle), 0.f);
        }
        break;
    }
    return Center;
}

void ADAISpawnManager::SpawnActorsInternal()
{
    UWorld* World = GetWorld();
    if (!World) return;

    // Build selection list per batch with per-unit weighting
    PendingSpawns.Reset();

    // Determine player pawn for tag checks
    AActor* PlayerPawn = nullptr;
    if (APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0))
    {
        PlayerPawn = PC->GetPawn();
    }

    float TotalWeight = 0.f;
    for (int32 i = 0; i < SpawnEntries.Num(); ++i)
    {
        const FSpawnEntry& E = SpawnEntries[i];
        if (!E.ActorClass) continue;
        if (!HasRequiredTags(PlayerPawn, E.RequiredPlayerTags)) continue;

        TotalWeight += FMath::Max(0.f, E.Weight);
    }
    if (TotalWeight <= KINDA_SMALL_NUMBER) { return; }

    // Enqueue one item per unit, so weights apply per spawn not per cycle
    for (int32 i = 0; i < SpawnEntries.Num(); ++i)
    {
        const FSpawnEntry& E = SpawnEntries[i];
        if (!E.ActorClass) continue;
        if (!HasRequiredTags(PlayerPawn, E.RequiredPlayerTags)) continue;

        const int32 Count = FMath::Max(0, E.Amount);
        for (int32 c = 0; c < Count; ++c)
        {
            // roll by weights
            float R = FMath::FRand() * TotalWeight;
            int32 Pick = -1;
            for (int32 j = 0; j < SpawnEntries.Num(); ++j)
            {
                const FSpawnEntry& C = SpawnEntries[j];
                if (!C.ActorClass || !HasRequiredTags(PlayerPawn, C.RequiredPlayerTags)) continue;
                const float W = FMath::Max(0.f, C.Weight);
                if (R <= W) { Pick = j; break; }
                R -= W;
            }
            if (Pick >= 0)
            {
                const FSpawnEntry& P = SpawnEntries[Pick];
                if (FMath::FRand() > FMath::Clamp(P.SpawnChance, 0.f, 1.f)) { continue; } // skip by chance

                FPendingSpawn Item;
                Item.ActorClass = P.ActorClass;
                Item.Mesh = P.StaticMesh;
                Item.bMeshPersists = P.bMeshPersists;
                Item.Count = 1;
                Item.PerEntryIndex = Pick;
                PendingSpawns.Add(Item);
            }
        }
    }

    // Spawn loop with tick budget
    int32 SpawnedThisTick = 0;
    while (PendingSpawns.Num() > 0 && SpawnedThisTick < MaxSpawnsPerTick)
    {
        FPendingSpawn& Item = PendingSpawns[0];

        // Unique rules & cooldowns
        if (FSpawnEntry* EntryPtr = SpawnEntries.IsValidIndex(Item.PerEntryIndex) ? &SpawnEntries[Item.PerEntryIndex] : nullptr)
        {
            const FSpawnEntry& Entry = *EntryPtr;

            // Uniqueness
            if (Entry.bUniqueInstance)
            {
                if (TWeakObjectPtr<AActor>* Existing = ActiveInstances.Find(Entry.ActorClass))
                {
                    if (Existing->IsValid())
                    {
                        PendingSpawns.RemoveAt(0);
                        continue;
                    }
                }
            }

            // Cooldown
            if (Entry.UniqueRespawnCooldown > 0.f)
            {
                if (const float* Last = LastSpawnTimeMap.Find(Entry.ActorClass))
                {
                    if (World->GetTimeSeconds() - *Last < Entry.UniqueRespawnCooldown)
                    {
                        PendingSpawns.RemoveAt(0);
                        continue;
                    }
                }
            }
        }
        else
        {
            PendingSpawns.RemoveAt(0);
            continue;
        }

        FSpawnEntry& Entry = SpawnEntries[Item.PerEntryIndex];

        // Determine spawn locations. Actor spawns at GetSpawnLocation; mesh spawns at marker when using marker
        FVector ActorLocation, MeshLocation;
        const bool bFoundSafe = TryFindSafeSpawn(ActorLocation, MeshLocation);
        if (!bFoundSafe && bSkipWhenUnsafe)
        {
            PendingSpawns.RemoveAt(0);
            continue;
        }
        if (!bFoundSafe)
        {
            ActorLocation = GetSpawnLocation();
            MeshLocation = (bUseMarker && IsValid(MarkerActor)) ? MarkerActor->GetActorLocation() : ActorLocation;
            ActorLocation.Z += ActorZOffset;
            MeshLocation.Z += MeshZOffset;
        }

        // Spawn the actor
        const FRotator SpawnRot = FRotator::ZeroRotator;
        FActorSpawnParameters Params;
        Params.Owner = this;
        Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        AActor* NewActor = World->SpawnActor<AActor>(Item.ActorClass, ActorLocation, SpawnRot, Params);
        if (NewActor)
        {
            // Track active instances
            ActiveByClass.FindOrAdd(Item.ActorClass).Add(NewActor);
            if (Entry.bUniqueInstance)
            {
                ActiveInstances.FindOrAdd(Item.ActorClass) = NewActor;
                LastSpawnTimeMap.FindOrAdd(Item.ActorClass) = World->GetTimeSeconds();
            }

            // Optional mesh instance
            if (Entry.StaticMesh)
            {
                if (UHierarchicalInstancedStaticMeshComponent* HISM = GetOrCreateHISM(Entry.StaticMesh))
                {
                    const FTransform MeshXform(FRotator::ZeroRotator, MeshLocation, FVector::OneVector);
                    const int32 Index = HISM->AddInstance(MeshXform);
                    if (!Entry.bMeshPersists)
                    {
                        // For non-persistent meshes, bind to actor destroy
                        if (UPrimitiveComponent* Prim = Cast<UPrimitiveComponent>(HISM))
                        {
                            NewActor->OnDestroyed.AddUniqueDynamic(this, &ADAISpawnManager::HandleSpawnedActorDestroyed);
                        }
                    }
                }
            }
        }

        SpawnedThisTick++;
        Item.Count--;
        if (Item.Count <= 0)
        {
            PendingSpawns.RemoveAt(0);
        }
    }

#if WITH_EDITOR
    if (bDebug)
    {
        DrawDebugArea();
    }
#endif
}

//////////////////////////////////////////////////////////////////////////
// Safety & Navigation helpers

bool ADAISpawnManager::IsFarEnoughFromOthers(const FVector& Test) const
{
    const float MinDistSq = FMath::Square(MinDistanceBetweenSpawns);
    for (const auto& Pair : ActiveByClass)
    {
        for (const TWeakObjectPtr<AActor>& Weak : Pair.Value)
        {
            if (const AActor* A = Weak.Get())
            {
                if (FVector::DistSquared(A->GetActorLocation(), Test) < MinDistSq)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

bool ADAISpawnManager::IsFarEnoughFromPlayer(const FVector& Test) const
{
    if (MinDistanceFromPlayer <= 0.f) return true;
    if (UWorld* W = GetWorld())
    {
        if (APlayerController* PC = UGameplayStatics::GetPlayerController(W, 0))
        {
            if (APawn* P = PC->GetPawn())
            {
                return FVector::DistSquared(P->GetActorLocation(), Test) >= FMath::Square(MinDistanceFromPlayer);
            }
        }
    }
    return true;
}

bool ADAISpawnManager::HasBlockingOverlap(const FVector& Test) const
{
    if (UWorld* W = GetWorld())
    {
        const float ProbeRadius = 34.f; // ~common pawn capsule radius
        FCollisionQueryParams Q(SCENE_QUERY_STAT(DAISpawnOverlap), false, this);
        FCollisionShape Shape = FCollisionShape::MakeSphere(ProbeRadius);
        return W->OverlapBlockingTestByChannel(Test, FQuat::Identity, ECC_Pawn, Shape, Q);
    }
    return false;
}

bool ADAISpawnManager::TryFindSafeSpawn(FVector& OutActorLoc, FVector& OutMeshLoc) const
{
    UWorld* W = GetWorld();
    if (!W) return false;

    UNavigationSystemV1* NavSys = bValidateNavmesh ? FNavigationSystem::GetCurrent<UNavigationSystemV1>(W) : nullptr;

    for (int32 Attempt = 0; Attempt < FMath::Max(1, MaxPlacementAttempts); ++Attempt)
    {
        // Base picks (actor uses area; mesh uses marker if set)
        const FVector BaseActor = GetSpawnLocation();
        FVector BaseMesh = BaseActor;
        if (bUseMarker && IsValid(MarkerActor))
        {
            BaseMesh = MarkerActor->GetActorLocation();
        }

        FVector Candidate = BaseActor;

        // Navmesh validation
        if (NavSys)
        {
            FNavLocation Projected;
            const bool bOk = NavSys->ProjectPointToNavigation(Candidate, Projected, FVector(200.f, 200.f, 400.f));
            if (bOk)
            {
                Candidate = Projected.Location;
            }
            else if (bUseNearestOnNavFail)
            {
                if (NavSys->GetRandomPointInNavigableRadius(Candidate, 200.f, Projected))
                {
                    Candidate = Projected.Location;
                }
                else
                {
                    continue; // try again
                }
            }
            else
            {
                continue; // try again
            }
        }

        // Z offsets
        Candidate.Z += ActorZOffset;
        FVector MeshLoc = BaseMesh; MeshLoc.Z += MeshZOffset;

        // Safety checks
        if (!IsFarEnoughFromOthers(Candidate)) continue;
        if (!IsFarEnoughFromPlayer(Candidate)) continue;
        if (HasBlockingOverlap(Candidate)) continue;

        OutActorLoc = Candidate;
        OutMeshLoc = MeshLoc;

#if WITH_EDITOR
        if (bDebug)
        {
            DrawDebugSphere(W, OutActorLoc, 22.f, 12, FColor::Green, false, 2.f, 0, 1.f);
            DrawDebugPoint(W, OutMeshLoc, 10.f, FColor::Orange, false, 2.f);
        }
#endif
        return true;
    }
    return false;
}

//////////////////////////////////////////////////////////////////////////
// Cleanup callbacks

void ADAISpawnManager::HandleSpawnedActorDestroyed(AActor* DestroyedActor)
{
    // Remove from per-class tracking
    for (auto& Pair : ActiveByClass)
    {
        Pair.Value.RemoveAll([DestroyedActor](const TWeakObjectPtr<AActor>& W)
            {
                return !W.IsValid() || W.Get() == DestroyedActor;
            });
    }

    // Remove from unique instance tracking if applicable
    for (auto It = ActiveInstances.CreateIterator(); It; ++It)
    {
        if (It.Value().Get() == DestroyedActor)
        {
            It.RemoveCurrent();
            break;
        }
    }
}

    // Note: We don't remove HISM instances here because we don't track per-instance IDs
    // tied to specific actors in this implementation. If you later add that mapping,
    // remove the corresponding HISM instance here for non-persistent meshes.

