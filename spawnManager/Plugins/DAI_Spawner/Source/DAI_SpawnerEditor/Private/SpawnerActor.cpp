#include "SpawnerActor.h"

#include "Components/SceneComponent.h"
#include "Engine/World.h"

ASpawnerActor::ASpawnerActor() {
  bIsEditorOnlyActor = true;
  PrimaryActorTick.bCanEverTick = false;

  RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
  RootComponent->SetComponentTickEnabled(false);
}

void ASpawnerActor::OnConstruction(const FTransform &Transform) {
  Super::OnConstruction(Transform);

  UWorld *World = GetWorld();
  if (World == nullptr || World->WorldType != EWorldType::Editor) {
    return;
  }

  if (PreviewActor != nullptr) {
    PreviewActor->Destroy();
    PreviewActor = nullptr;
  }

  if (PreviewActorClass != nullptr) {
    FActorSpawnParameters Params;
    Params.ObjectFlags = RF_Transient;
    PreviewActor = World->SpawnActor<AActor>(PreviewActorClass,
                                             GetActorTransform(), Params);
    if (PreviewActor != nullptr) {
      PreviewActor->bIsEditorOnlyActor = true;
    }
  }
}
