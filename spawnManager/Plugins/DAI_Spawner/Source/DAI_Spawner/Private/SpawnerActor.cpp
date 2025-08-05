#include "SpawnerActor.h"

#include "Components/StaticMeshComponent.h"

#if WITH_EDITOR
#include "Engine/World.h"
#endif

ASpawnerActor::ASpawnerActor() {
  bIsEditorOnlyActor = true;
  PrimaryActorTick.bCanEverTick = false;

  MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
  RootComponent = MeshComponent;
  MeshComponent->SetComponentTickEnabled(false);
  MeshComponent->PrimaryComponentTick.bCanEverTick = false;
}

#if WITH_EDITOR
void ASpawnerActor::OnConstruction(const FTransform &Transform) {
  Super::OnConstruction(Transform);

  UWorld *World = GetWorld();
  if (World == nullptr || World->WorldType != EWorldType::Editor) {
    return;
  }

#if WITH_EDITORONLY_DATA
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
#endif // WITH_EDITORONLY_DATA
}
#endif
