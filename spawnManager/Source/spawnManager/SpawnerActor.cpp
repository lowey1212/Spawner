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
  if (PreviewActor) {
    PreviewActor->Destroy();
    PreviewActor = nullptr;
  }

  if (PreviewActorClasses.Num() > 0 && PreviewActorClasses[0]) {
    FActorSpawnParameters Params;
    Params.ObjectFlags = RF_Transient;
    PreviewActor = GetWorld()->SpawnActor<AActor>(PreviewActorClasses[0],
                                                  GetActorTransform(), Params);
    if (PreviewActor) {
      PreviewActor->bIsEditorOnlyActor = true;
    }
  }

  if (PreviewActorClasses.Num() > 1) {
    PreviewActorClasses.SetNum(1);
  }
#endif // WITH_EDITORONLY_DATA
}
#endif // WITH_EDITOR
