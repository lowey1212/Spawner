#include "SpawnerActor.h"

#if WITH_EDITOR
#include "Engine/World.h"
#endif

ASpawnerActor::ASpawnerActor() {
  bIsEditorOnlyActor = true;
  PrimaryActorTick.bCanEverTick = false;
#if WITH_EDITORONLY_DATA
  PreviewActors.Reset();
#endif
}

#if WITH_EDITOR
void ASpawnerActor::OnConstruction(const FTransform &Transform) {
  Super::OnConstruction(Transform);

  if (!GetWorld() || GetWorld()->WorldType != EWorldType::Editor) {
    return;
  }

#if WITH_EDITORONLY_DATA
  // Destroy any previously spawned preview actors
  for (AActor *Actor : PreviewActors) {
    if (Actor) {
      Actor->Destroy();
    }
  }
  PreviewActors.Reset();

  static const FVector Offsets[5] = {FVector::ZeroVector, FVector(0.f, 100.f, 0.f),
                                     FVector(0.f, -100.f, 0.f),
                                     FVector(100.f, 0.f, 0.f),
                                     FVector(-100.f, 0.f, 0.f)};

  const int32 Count = FMath::Min(5, PreviewActorClasses.Num());
  for (int32 Index = 0; Index < Count; ++Index) {
    TSubclassOf<AActor> Class = PreviewActorClasses[Index];
    if (!Class) {
      continue;
    }

    FTransform SpawnTransform = GetActorTransform();
    SpawnTransform.AddToTranslation(Offsets[Index]);

    FActorSpawnParameters Params;
    Params.ObjectFlags = RF_Transient;
    AActor *Spawned =
        GetWorld()->SpawnActor<AActor>(Class, SpawnTransform, Params);
    if (Spawned) {
      Spawned->bIsEditorOnlyActor = true;
      PreviewActors.Add(Spawned);
    }
  }
#endif
}
#endif

