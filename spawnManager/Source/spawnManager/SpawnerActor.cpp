#include "SpawnerActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ASpawnerActor::ASpawnerActor() {
  PrimaryActorTick.bCanEverTick = false;
  USceneComponent *Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
  SetRootComponent(Root);

#if WITH_EDITORONLY_DATA
  VisualizationMesh = CreateEditorOnlyDefaultSubobject<UStaticMeshComponent>(
      TEXT("VisualizationMesh"));
  if (VisualizationMesh) {
    VisualizationMesh->SetupAttachment(Root);
    VisualizationMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
  }
#endif // WITH_EDITORONLY_DATA
}
