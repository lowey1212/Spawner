#include "SpawnerActor.h"

#if WITH_EDITOR
#include "Engine/World.h"
#endif

ASpawnerActor::ASpawnerActor() {
  bIsEditorOnlyActor = true;
  PrimaryActorTick.bCanEverTick = false;
}

#if WITH_EDITOR
void ASpawnerActor::OnConstruction(const FTransform &Transform) {
  Super::OnConstruction(Transform);

  UWorld *World = GetWorld();
  if (!World || World->WorldType != EWorldType::Editor) {
    return;
  }

#if WITH_EDITORONLY_DATA
  if (PreviewActor) {
    PreviewActor->Destroy();
    PreviewActor = nullptr;
  }

  if (PreviewActorClass) {
    FActorSpawnParameters Params;
    Params.ObjectFlags = RF_Transient;
    PreviewActor = World->SpawnActor<AActor>(PreviewActorClass,
                                             GetActorTransform(), Params);
    if (PreviewActor) {
      PreviewActor->bIsEditorOnlyActor = true;
    }
  }
#endif // WITH_EDITORONLY_DATA
}
#endif
