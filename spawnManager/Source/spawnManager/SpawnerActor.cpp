#include "SpawnerActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#if WITH_EDITOR
#include "Engine/World.h"
#endif

ASpawnerActor::ASpawnerActor() {
  PrimaryActorTick.bCanEverTick = false;
  USceneComponent *Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
  SetRootComponent(Root);

#if WITH_EDITORONLY_DATA
  VisualizationMesh =
      CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualizationMesh"));
  VisualizationMesh->SetupAttachment(Root);
  VisualizationMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
  VisualizationMesh->bIsEditorOnly = true;
#endif // WITH_EDITORONLY_DATA
}

#if WITH_EDITOR
void ASpawnerActor::OnConstruction(const FTransform &Transform) {
  Super::OnConstruction(Transform);

  if (!GetWorld() || GetWorld()->WorldType != EWorldType::Editor) {
    return;
  }

#if WITH_EDITORONLY_DATA
  // Only spawn a single preview actor and reuse it when possible.
  UClass *DesiredClass =
      PreviewActorClasses.Num() > 0 ? PreviewActorClasses[0] : nullptr;

  // Destroy any existing preview actor if the class changed or we no longer
  // want to preview one.
  if (PreviewActor && (!DesiredClass || PreviewActor->GetClass() != DesiredClass)) {
    PreviewActor->Destroy();
    PreviewActor = nullptr;
  }

  // Create the preview actor if needed.
  if (!PreviewActor && DesiredClass) {
    FActorSpawnParameters Params;
    Params.ObjectFlags = RF_Transient;
    PreviewActor =
        GetWorld()->SpawnActor<AActor>(DesiredClass, GetActorTransform(), Params);
    if (PreviewActor) {
      PreviewActor->bIsEditorOnlyActor = true;
    }
  }

  // Keep the preview actor in sync with this actor's transform.
  if (PreviewActor) {
    PreviewActor->SetActorTransform(GetActorTransform());
  }

  // Ensure only one class is stored for previewing.
  if (PreviewActorClasses.Num() > 1) {
    PreviewActorClasses.SetNum(1);
  }
#endif // WITH_EDITORONLY_DATA
}
#endif // WITH_EDITOR
