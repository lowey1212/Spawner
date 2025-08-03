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
#include "Components/SceneComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "DAISpawnMarker.h"
#include "NavigationSystem.h"
#include "Engine/LevelStreaming.h"
#include "GameFramework/Volume.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "CollisionShape.h"

 // Sets default values
ADAISpawnManager::ADAISpawnManager()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;

    // Create a simple scene root. Static mesh components are created lazily
    // when spawn entries request them.
    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;
}

void ADAISpawnManager::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
#if WITH_EDITOR
    if (UWorld* W = GetWorld())
    {
        FlushPersistentDebugLines(W);
    }
    ClearNonPersistentDebug();
    if (bDebug)
    {
        DrawDebugArea();
    }
#endif
}

// Called when the game starts or when spawned
void ADAISpawnManager::BeginPlay()
{
    Super::BeginPlay();

    if (bSpawnOnBeginPlay)
    {
        SpawnActors();
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

void ADAISpawnManager::SpawnActorsInternal()
{
    if (bWaitForLevelToLoad && RequiredLevelName != NAME_None)
    {
        ULevelStreaming* Streamed = UGameplayStatics::GetStreamingLevel(this, RequiredLevelName);
        if (!Streamed || !Streamed->IsLevelLoaded())
        {
            return;
        }
    }
    // If there are no entries there is nothing to spawn
    if (SpawnEntries.Num() == 0)
    {
        return;
    }

    // Build a list of candidate entries along with remaining spawn counts and weights
    TArray<int32> CandidateIndices;
    TArray<int32> CandidateRemaining;
    TArray<float> CandidateWeights;
    int32 TotalToSpawn = 0;

    const float CurrentTime = GetWorld()->GetTimeSeconds();
    for (int32 i = 0; i < SpawnEntries.Num(); ++i)
    {
        const FSpawnEntry& Entry = SpawnEntries[i];
        // Skip invalid or zero weight entries
        if (!Entry.ActorClass || Entry.Weight <= 0.0f)
        {
            continue;
        }
        // Check custom conditions
        if (!CanSpawnForEntry(Entry))
        {
            continue;
        }
        // Check unique instance and cooldown
        if (Entry.bUniqueInstance)
        {
            if (const TWeakObjectPtr<AActor>* ExistingPtr = ActiveInstances.Find(Entry.ActorClass))
            {
                if (ExistingPtr->IsValid())
                {
                    continue;
                }
            }
            if (const float* LastTimePtr = LastSpawnTimeMap.Find(Entry.ActorClass))
            {
                const float Cooldown = Entry.bUseRandomCooldown
                    ? FMath::RandRange(Entry.CooldownMin, Entry.CooldownMax)
                    : Entry.CooldownMin;
                if (CurrentTime - *LastTimePtr < Cooldown)
                {
                    continue;
                }
            }
        }
        // Determine how many we are allowed to spawn based on MaxActive
        int32 DesiredCount = FMath::Max(1, Entry.Amount);
        if (Entry.MaxActive > 0)
        {
            TArray<TWeakObjectPtr<AActor>>& Arr = ActiveByClass.FindOrAdd(Entry.ActorClass);
            Arr.RemoveAll([](const TWeakObjectPtr<AActor>& P) { return !P.IsValid(); });
            const int32 Active = Arr.Num();
            const int32 Room = Entry.MaxActive - Active;
            if (Room <= 0)
            {
                DesiredCount = 0;
            }
            else
            {
                DesiredCount = FMath::Min(DesiredCount, Room);
            }
        }
        if (DesiredCount <= 0)
        {
            continue;
        }
        // Include this entry in the candidate list
        CandidateIndices.Add(i);
        CandidateWeights.Add(Entry.Weight);
        CandidateRemaining.Add(DesiredCount);
        TotalToSpawn += DesiredCount;
    }

    // If there are no candidates, return early
    if (CandidateIndices.Num() == 0 || TotalToSpawn <= 0)
    {
        return;
    }

    // For each spawn we select a candidate entry at random based on its weight and enqueue a single spawn
    for (int32 SpawnIdx = 0; SpawnIdx < TotalToSpawn; ++SpawnIdx)
    {
        // Compute the total weight of candidates with remaining spawns
        float WeightedSum = 0.0f;
        for (int32 j = 0; j < CandidateIndices.Num(); ++j)
        {
            if (CandidateRemaining[j] > 0)
            {
                WeightedSum += CandidateWeights[j];
            }
        }
        if (WeightedSum <= 0.0f)
        {
            break;
        }
        // Choose a candidate index based on weight
        float Roll = FMath::FRand() * WeightedSum;
        int32 ChosenIndex = INDEX_NONE;
        for (int32 j = 0; j < CandidateIndices.Num(); ++j)
        {
            if (CandidateRemaining[j] <= 0)
            {
                continue;
            }
            Roll -= CandidateWeights[j];
            if (Roll <= 0.0f)
            {
                ChosenIndex = j;
                break;
            }
        }
        if (ChosenIndex == INDEX_NONE)
        {
            // fallback: choose the first available candidate
            for (int32 j = 0; j < CandidateIndices.Num(); ++j)
            {
                if (CandidateRemaining[j] > 0)
                {
                    ChosenIndex = j;
                    break;
                }
            }
        }
        if (ChosenIndex == INDEX_NONE)
        {
            break;
        }
        const int32 EntryIndex = CandidateIndices[ChosenIndex];
        const FSpawnEntry& ChosenEntry = SpawnEntries[EntryIndex];
        // Roll spawn chance per spawn
        if (ChosenEntry.SpawnChance < 1.0f && FMath::FRand() > ChosenEntry.SpawnChance)
        {
            // Skip this spawn without enqueuing but still decrement the remaining count
            CandidateRemaining[ChosenIndex]--;
            if (CandidateRemaining[ChosenIndex] <= 0)
            {
                CandidateRemaining[ChosenIndex] = 0;
            }
            continue;
        }
        // Enqueue a single spawn for the chosen entry
        FPendingSpawn Pending;
        Pending.ActorClass = ChosenEntry.ActorClass;
        Pending.Count = 1;
        Pending.PerEntryIndex = EntryIndex;
        PendingSpawns.Add(Pending);
        CandidateRemaining[ChosenIndex]--;
    }

    // Schedule the next automatic spawn if looping is enabled.  We randomise the delay
    // again to avoid synchronised spawning across multiple spawners.  The timer is
    // cleared before setting a new one to avoid multiple timers accumulating if
    // SpawnActors() is called manually when bLoopSpawning is true.
    if (bLoopSpawning)
    {
        GetWorldTimerManager().ClearTimer(SpawnTimerHandle);
        const float Delay = FMath::RandRange(SpawnIntervalMin, SpawnIntervalMax);
        GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &ADAISpawnManager::SpawnActorsInternal, Delay, false);
    }
}

bool ADAISpawnManager::CanSpawnForEntry_Implementation(const FSpawnEntry& Entry)
{
    // Default implementation requires that all tags listed in RequiredTags
    // appear on the first player pawn.  If no player pawn exists we simply
    // allow the spawn to occur.  Designers can override this in Blueprints to
    // implement more complex logic (quest flags, time of day, etc.).
    UWorld* World = GetWorld();
    if (!World || Entry.RequiredTags.Num() == 0)
    {
        return true;
    }
    APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0);
    if (!PC)
    {
        return true;
    }
    APawn* Pawn = PC->GetPawn();
    if (!Pawn)
    {
        return true;
    }
    for (const FName& Tag : Entry.RequiredTags)
    {
        if (!Pawn->ActorHasTag(Tag))
        {
            return false;
        }
    }
    return true;
}

FVector ADAISpawnManager::GetSpawnLocation() const
{
    // Spawn relative to the manager's location.
    const FVector Origin = GetActorLocation();

    switch (SpawnAreaShape)
    {
    case ESpawnAreaShape::Square:
    {
        // Uniform distribution within a square.  Z component is preserved.
        const float HalfSize = Radius;
        const float X = FMath::FRandRange(-HalfSize, HalfSize);
        const float Y = FMath::FRandRange(-HalfSize, HalfSize);
        return Origin + FVector(X, Y, 0.0f);
    }
    case ESpawnAreaShape::Circle:
    {
        // Uniform distribution within a circle.  Note the use of sqrt on
        // the radial component to ensure true uniformity.
        const float Angle = FMath::FRandRange(0.0f, 2.0f * PI);
        const float RadiusFactor = FMath::Sqrt(FMath::FRand()) * Radius;
        const float X = RadiusFactor * FMath::Cos(Angle);
        const float Y = RadiusFactor * FMath::Sin(Angle);
        return Origin + FVector(X, Y, 0.0f);
    }
    case ESpawnAreaShape::Curve:
    {
        // Sample the user provided curve if available; otherwise fall back
        // to a uniform distribution like Circle.  The curve is sampled
        // with a random input in [0,1] and scaled by Radius.
        float DistanceFactor = FMath::Sqrt(FMath::FRand());
        if (RadiusCurve)
        {
            const float CurveValue = RadiusCurve->GetFloatValue(FMath::FRand());
            DistanceFactor = FMath::Clamp(CurveValue, 0.0f, 1.0f);
        }
        const float Angle = FMath::FRandRange(0.0f, 2.0f * PI);
        const float X = DistanceFactor * Radius * FMath::Cos(Angle);
        const float Y = DistanceFactor * Radius * FMath::Sin(Angle);
        return Origin + FVector(X, Y, 0.0f);
    }
    case ESpawnAreaShape::Noise:
    {
        // Use Perlin noise to modify the distance and angle.  We generate two
        // random seeds and feed them into FMath::PerlinNoise2D to obtain a
        // value in [-1,1].  Absolute value of that determines radial
        // distance while the other seed provides an additional angle offset.
        const FVector2D Seed1(FMath::FRand(), FMath::FRand());
        const FVector2D Seed2(FMath::FRand(), FMath::FRand());
        const float NoiseVal1 = FMath::PerlinNoise2D(Seed1);
        const float NoiseVal2 = FMath::PerlinNoise2D(Seed2);
        const float DistanceFactor = FMath::Abs(NoiseVal1);
        const float Angle = FMath::FRandRange(0.0f, 2.0f * PI) + NoiseVal2 * PI;
        const float X = DistanceFactor * Radius * FMath::Cos(Angle);
        const float Y = DistanceFactor * Radius * FMath::Sin(Angle);
        return Origin + FVector(X, Y, 0.0f);
    }
    default:
        break;
    }
    return Origin;
}

void ADAISpawnManager::DespawnAll()
{
    // Destroy all tracked unique instances.  The weak pointers are removed
    // afterwards to avoid keeping stale keys around.
    for (TPair<TSubclassOf<AActor>, TWeakObjectPtr<AActor>>& Pair : ActiveInstances)
    {
        if (Pair.Value.IsValid())
        {
            Pair.Value->Destroy();
        }
    }
    ActiveInstances.Empty();

    // Clear non‑permanent static mesh instances across all HISMs.
    for (auto& Pair : MeshToHISM)
    {
        if (Pair.Value)
        {
            Pair.Value->ClearInstances();
        }
    }
}

// ----- Additional implementations -----

// Retrieve or create a Hierarchical Instanced Static Mesh component for the given mesh. When
// spawning static meshes we reuse existing HISM components to improve performance.  If no
// component exists for a particular mesh one will be created, attached to the scene root
// and registered.
UHierarchicalInstancedStaticMeshComponent* ADAISpawnManager::GetOrCreateHISM(UStaticMesh* Mesh)
{
    if (!Mesh)
    {
        return nullptr;
    }
    if (UHierarchicalInstancedStaticMeshComponent** Found = MeshToHISM.Find(Mesh))
    {
        if (*Found)
        {
            return *Found;
        }
    }
    UHierarchicalInstancedStaticMeshComponent* NewHISM = NewObject<UHierarchicalInstancedStaticMeshComponent>(this);
    if (!NewHISM)
    {
        return nullptr;
    }
    NewHISM->SetupAttachment(SceneRoot);
    NewHISM->RegisterComponent();
    NewHISM->SetStaticMesh(Mesh);
    MeshToHISM.Add(Mesh, NewHISM);
    return NewHISM;
}

// Draw debug preview of the spawn area. This method draws simple shapes to visualise the
// configured spawn volume. For a square area a box is drawn; for circle, curve and noise
// shapes a circle is drawn representing the maximum radius.  Debug drawings are non‑persistent.
#if WITH_EDITOR
void ADAISpawnManager::DrawDebugArea() const
{ 
    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }
    const FVector Origin = GetActorLocation();
    const FColor Colour = FColor::Cyan;
    const float Lifetime = 0.0f;
    const float Thickness = 1.0f;
    switch (SpawnAreaShape)
    {
    case ESpawnAreaShape::Square:
    {
        const FVector Extent(Radius, Radius, 10.0f);
        DrawDebugBox(World, Origin, Extent, Colour, false, Lifetime, 0, Thickness);
        break;
    }
    case ESpawnAreaShape::Circle:
    case ESpawnAreaShape::Curve:
    case ESpawnAreaShape::Noise:
    default:
    {
        const int32 Segments = 64;
        DrawDebugCircle(World, Origin, Radius, Segments, Colour, false, Lifetime, 0, Thickness, FVector(1, 0, 0), FVector(0, 1, 0), false);
        break;
    }
    }
}
#endif

// Remove non‑persistent debug visuals.  This flushes persistent debug lines and clears
// all instanced meshes from HISM components so that preview meshes do not accumulate.
#if WITH_EDITOR
void ADAISpawnManager::ClearNonPersistentDebug()
{
    if (UWorld* World = GetWorld())
    {
        FlushPersistentDebugLines(World);
    }
    for (auto& Pair : MeshToHISM)
    {
        if (Pair.Value)
        {
            Pair.Value->ClearInstances();
        }
    }
}
#endif

// Tick function. Processes pending spawns and handles debug drawing.  This method exists
// in all builds to ensure the linker resolves the symbol even when Tick is only
// declared in editor builds. Debug drawing is compiled only for editor builds.
void ADAISpawnManager::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    int32 SpawnedThisTick = 0;
    const int32 MaxPerTick = FMath::Max(1, MaxSpawnPerTick);
    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }
    // Process pending spawn queue
    while (PendingSpawns.Num() > 0 && SpawnedThisTick < MaxPerTick)
    {
        FPendingSpawn& Item = PendingSpawns[0];
        if (!Item.ActorClass || Item.Count <= 0 || !SpawnEntries.IsValidIndex(Item.PerEntryIndex))
        {
            PendingSpawns.RemoveAt(0);
            continue;
        }
        FSpawnEntry& Entry = SpawnEntries[Item.PerEntryIndex];
        FVector ActorLocation = FVector::ZeroVector;
        FVector MeshLocation = FVector::ZeroVector;
        FRotator SpawnRot = FRotator::ZeroRotator;
        bool bLocationValid = false;
        constexpr int32 MaxAttempts = 5;
        for (int32 Attempt = 0; Attempt < MaxAttempts && !bLocationValid; ++Attempt)
        {
            if (Entry.bUseMarker && IsValid(Entry.MarkerActor))
            {
                ActorLocation = Entry.MarkerActor->GetActorLocation() + Entry.ActorOffset;
                if (const ADAISpawnMarker* Marker = Cast<ADAISpawnMarker>(Entry.MarkerActor))
                {
                    if (Marker->SpawnPoint)
                    {
                        MeshLocation = Marker->SpawnPoint->GetComponentLocation() + Entry.MeshOffset;
                    }
                    else
                    {
                        MeshLocation = Entry.MarkerActor->GetActorLocation() + Entry.MeshOffset;
                    }
                }
                else
                {
                    MeshLocation = Entry.MarkerActor->GetActorLocation() + Entry.MeshOffset;
                }
            }
            else
            {
                ActorLocation = GetSpawnLocation() + Entry.ActorOffset;
                MeshLocation = ActorLocation + Entry.MeshOffset;
            }

            if (bProjectToNavMesh)
            {
                FNavLocation NavLoc;
                if (UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World))
                {
                    if (NavSys->ProjectPointToNavigation(ActorLocation, NavLoc))
                    {
                        ActorLocation = NavLoc.Location;
                    }
                }
            }

            FHitResult GroundHit;
            const FVector TraceStart = ActorLocation + FVector(0.f, 0.f, 500.f);
            const FVector TraceEnd = ActorLocation - FVector(0.f, 0.f, 500.f);
            World->LineTraceSingleByChannel(GroundHit, TraceStart, TraceEnd, ECC_Visibility);
            if (GroundHit.bBlockingHit)
            {
                // Forbidden material or tags
                if (GroundHit.PhysMaterial.IsValid() && ForbiddenPhysMaterials.Contains(GroundHit.PhysMaterial.Get()))
                {
                    continue;
                }
                if (AActor* HitActor = GroundHit.GetActor())
                {
                    bool bHasForbidden = false;
                    for (const FName& Tag : ForbiddenActorTags)
                    {
                        if (HitActor->ActorHasTag(Tag))
                        {
                            bHasForbidden = true;
                            break;
                        }
                    }
                    if (bHasForbidden)
                    {
                        continue;
                    }
                }
                if (bAlignToGround)
                {
                    if (bFaceMarkerForward && Entry.bUseMarker && IsValid(Entry.MarkerActor))
                    {
                        SpawnRot = UKismetMathLibrary::MakeRotFromXZ(Entry.MarkerActor->GetActorForwardVector(), GroundHit.ImpactNormal);
                    }
                    else
                    {
                        SpawnRot = UKismetMathLibrary::MakeRotFromZ(GroundHit.ImpactNormal);
                    }
                }
            }

            bool bInsideInclusion = InclusionVolumes.Num() == 0;
            for (AVolume* Vol : InclusionVolumes)
            {
                if (Vol && Vol->EncompassesPoint(ActorLocation))
                {
                    bInsideInclusion = true;
                    break;
                }
            }
            if (!bInsideInclusion)
            {
                continue;
            }
            bool bHitExclusion = false;
            for (AVolume* Vol : ExclusionVolumes)
            {
                if (Vol && Vol->EncompassesPoint(ActorLocation))
                {
                    bHitExclusion = true;
                    break;
                }
            }
            if (bHitExclusion)
            {
                continue;
            }

            if (SafePlacementRadius > 0.f)
            {
                const FCollisionShape Sphere = FCollisionShape::MakeSphere(SafePlacementRadius);
                if (World->OverlapBlockingTestByChannel(ActorLocation, FQuat::Identity, ECC_WorldStatic, Sphere) ||
                    World->OverlapBlockingTestByChannel(ActorLocation, FQuat::Identity, ECC_WorldDynamic, Sphere))
                {
                    continue;
                }
            }

            if (MinDistanceBetweenSpawns > 0.f)
            {
                bool bTooClose = false;
                const float MinDistSq = FMath::Square(MinDistanceBetweenSpawns);
                for (const FVector& Prev : RecentSpawnLocations)
                {
                    if (FVector::DistSquared(Prev, ActorLocation) < MinDistSq)
                    {
                        bTooClose = true;
                        break;
                    }
                }
                if (bTooClose)
                {
                    continue;
                }
            }

            bLocationValid = true;
        }

        if (!bLocationValid)
        {
            PendingSpawns.RemoveAt(0);
            continue;
        }

        // Spawn the actor
        FActorSpawnParameters Params;
        Params.Owner = this;
        Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        AActor* NewActor = World->SpawnActor<AActor>(Item.ActorClass, ActorLocation, SpawnRot, Params);
        if (NewActor)
        {
            // Handle unique instance tracking
            if (Entry.bUniqueInstance)
            {
                ActiveInstances.Add(Entry.ActorClass, NewActor);
                LastSpawnTimeMap.Add(Entry.ActorClass, World->GetTimeSeconds());
            }
            TArray<TWeakObjectPtr<AActor>>& Arr = ActiveByClass.FindOrAdd(Entry.ActorClass);
            Arr.Add(NewActor);

            // Add static mesh instance if specified and actor spawned
            if (Entry.StaticMesh)
            {
                UHierarchicalInstancedStaticMeshComponent* HISM = GetOrCreateHISM(Entry.StaticMesh);
                if (HISM)
                {
                    FTransform InstT;
                    InstT.SetLocation(MeshLocation);
                    InstT.SetRotation(FQuat::Identity);
                    InstT.SetScale3D(FVector(1.0f));
                    const int32 InstanceIndex = HISM->AddInstance(InstT);
                    if (!Entry.bStaticMeshPermanent)
                    {
                        const TWeakObjectPtr<UHierarchicalInstancedStaticMeshComponent> WeakHISM(HISM);
                        NewActor->OnDestroyed.AddLambda([WeakHISM, InstanceIndex](AActor*)
                        {
                            if (UHierarchicalInstancedStaticMeshComponent* Comp = WeakHISM.Get())
                            {
                                Comp->RemoveInstance(InstanceIndex);
                            }
                        });
                    }
                }
            }

            RecentSpawnLocations.Add(ActorLocation);
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