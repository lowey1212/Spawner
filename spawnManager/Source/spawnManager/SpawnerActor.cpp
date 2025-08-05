#include "SpawnerActor.h"

#if WITH_EDITOR
#include "Engine/World.h"
#endif

ASpawnerActor::ASpawnerActor() {
  bIsEditorOnlyActor = true;
  PrimaryActorTick.bCanEverTick = false;
#if WITH_EDITORONLY_DATA
  PreviewActor = nullptr;
  PreviewActorClass = nullptr;
#endif
}

#if WITH_EDITOR
void ASpawnerActor::OnConstruction(const FTransform &Transform) {
  Super::OnConstruction(Transform);

  if (!GetWorld() || GetWorld()->WorldType != EWorldType::Editor) {
    return;
  }

#if WITH_EDITORONLY_DATA
  if (PreviewActor) {
    PreviewActor->Destroy();
    PreviewActor = nullptr;
  }

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  if (PreviewActorClass) {
    FActorSpawnParameters Params;
    Params.ObjectFlags = RF_Transient;
    PreviewActor =
        GetWorld()->SpawnActor<AActor>(PreviewActorClass, GetActorTransform(),
                                       Params);
=======
  if (PreviewActorClasses.Num() > 0 && PreviewActorClasses[0]) {
    FActorSpawnParameters Params;
    Params.ObjectFlags = RF_Transient;
    PreviewActor = GetWorld()->SpawnActor<AActor>(PreviewActorClasses[0],
                                                  GetActorTransform(), Params);
>>>>>>> parent of f53abd6 (Merge pull request #51 from lowey1212/codex/fix-spawner-to-spawn-only-one-actor)
=======
  if (PreviewActorClasses.Num() > 0 && PreviewActorClasses[0]) {
    FActorSpawnParameters Params;
    Params.ObjectFlags = RF_Transient;
    PreviewActor = GetWorld()->SpawnActor<AActor>(PreviewActorClasses[0],
                                                  GetActorTransform(), Params);
>>>>>>> parent of f53abd6 (Merge pull request #51 from lowey1212/codex/fix-spawner-to-spawn-only-one-actor)
=======
  if (PreviewActorClasses.Num() > 0 && PreviewActorClasses[0]) {
    FActorSpawnParameters Params;
    Params.ObjectFlags = RF_Transient;
    PreviewActor = GetWorld()->SpawnActor<AActor>(PreviewActorClasses[0],
                                                  GetActorTransform(), Params);
>>>>>>> parent of f53abd6 (Merge pull request #51 from lowey1212/codex/fix-spawner-to-spawn-only-one-actor)
    if (PreviewActor) {
      PreviewActor->bIsEditorOnlyActor = true;
    }
  }
<<<<<<< HEAD
#endif
=======

  if (PreviewActorClasses.Num() > 1) {
    PreviewActorClasses.SetNum(1);
  }
#endif // WITH_EDITORONLY_DATA
>>>>>>> parent of f53abd6 (Merge pull request #51 from lowey1212/codex/fix-spawner-to-spawn-only-one-actor)
}
#endif

