#include "DAISpawnManager.h"
#include "DAISpawnMarker.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

void ADAISpawnManager::EditorOnConstruction()
{
  // Mark this actor dirty so that cached transforms persist when saving the level.
  Modify(true);
  // Cache marker transforms so shipping builds can spawn without editor-only actors.
  for (FSpawnEntry &Entry : SpawnEntries)
  {
    if (Entry.bUseMarker && IsValid(Entry.MarkerActor))
    {
      Entry.CachedMarkerTransform = Entry.MarkerActor->GetActorTransform();
      if (const ADAISpawnMarker *Marker = Cast<ADAISpawnMarker>(Entry.MarkerActor))
      {
        if (Marker->SpawnPoint)
        {
          Entry.CachedSpawnPointTransform = Marker->SpawnPoint->GetComponentTransform();
        }
        else
        {
          Entry.CachedSpawnPointTransform = Entry.MarkerActor->GetActorTransform();
        }
      }
      else
      {
        Entry.CachedSpawnPointTransform = Entry.MarkerActor->GetActorTransform();
      }
      Entry.bCachedTransformsValid = true;
    }
    else if (Entry.bUseMarker && !Entry.CachedMarkerTransform.Equals(FTransform::Identity))
    {
      // If the marker actor is missing but we have cached data, treat it as valid.
      Entry.bCachedTransformsValid = true;
    }
  }

  if (UWorld *W = GetWorld())
  {
    FlushPersistentDebugLines(W);
  }
  ClearNonPersistentDebug();
  if (bDebug)
  {
    DrawDebugArea();
  }

  // Spawn preview actors and meshes for marker-based entries so designers can visualise placement in the editor.
  for (AActor *Prev : EditorPreviewActors)
  {
    if (Prev)
    {
      Prev->Destroy();
    }
  }
  EditorPreviewActors.Empty();
  for (UStaticMeshComponent *Comp : EditorPreviewMeshes)
  {
    if (Comp)
    {
      Comp->DestroyComponent();
    }
  }
  EditorPreviewMeshes.Empty();

  if (UWorld *W2 = GetWorld())
  {
    for (const FSpawnEntry &Entry : SpawnEntries)
    {
      if (!Entry.bUseMarker || !IsValid(Entry.MarkerActor))
      {
        continue;
      }

      FVector ActorLoc = Entry.MarkerActor->GetActorLocation() + Entry.ActorOffset;
      FVector MeshLoc = ActorLoc + Entry.MeshOffset;
      if (const ADAISpawnMarker *Marker = Cast<ADAISpawnMarker>(Entry.MarkerActor))
      {
        if (Marker->SpawnPoint)
        {
          MeshLoc = Marker->SpawnPoint->GetComponentLocation() + Entry.MeshOffset;
        }
      }

      if (Entry.ActorClass != nullptr)
      {
        FActorSpawnParameters Params;
        Params.Owner = this;
        Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        Params.ObjectFlags |= RF_Transient;
        Params.bNoFail = true;
        if (AActor *Preview = W2->SpawnActor<AActor>(Entry.ActorClass, ActorLoc, FRotator::ZeroRotator, Params))
        {
          Preview->SetActorHiddenInGame(true);
          Preview->bIsEditorOnlyActor = true;
          EditorPreviewActors.Add(Preview);
        }
      }

      if (Entry.StaticMesh)
      {
        UStaticMeshComponent *SM = NewObject<UStaticMeshComponent>(this);
        SM->SetStaticMesh(Entry.StaticMesh);
        SM->SetWorldLocation(MeshLoc);
        SM->SetMobility(EComponentMobility::Movable);
        if (DebugGhostMaterial)
        {
          SM->SetMaterial(0, DebugGhostMaterial);
        }
        SM->SetFlags(RF_Transient);
        SM->RegisterComponent();
        EditorPreviewMeshes.Add(SM);
      }
    }
  }
}

void ADAISpawnManager::DrawDebugArea() const
{
  UWorld *World = GetWorld();
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

void ADAISpawnManager::ClearNonPersistentDebug()
{
  if (UWorld *World = GetWorld())
  {
    FlushPersistentDebugLines(World);
  }
  for (auto &Pair : MeshToHISM)
  {
    if (Pair.Value)
    {
      Pair.Value->ClearInstances();
    }
  }
}

