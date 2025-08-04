#include "SpawnerActor.h"

#if WITH_EDITOR
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "NiagaraComponent.h"
#endif

ASpawnerActor::ASpawnerActor() {
  bIsEditorOnlyActor = true;
  PrimaryActorTick.bCanEverTick = false;
#if WITH_EDITORONLY_DATA
  PreviewComponent =
      CreateDefaultSubobject<UNiagaraComponent>(TEXT("SpawnPreview"));
  PreviewComponent->SetupAttachment(RootComponent);
  PreviewComponent->bAutoActivate = false;
  PreviewComponent->SetAutoDestroy(false);
#endif
}

#if WITH_EDITOR
void ASpawnerActor::OnConstruction(const FTransform &Transform) {
  Super::OnConstruction(Transform);

  if (!PreviewComponent || !PreviewSystem) {
    return;
  }

  PreviewComponent->SetAsset(PreviewSystem);

  // Ensure the preview effect spawns at the actor's origin
  PreviewComponent->SetWorldLocation(GetActorLocation());

  // Use the first available mesh component as the preview mesh
  TArray<USkeletalMeshComponent *> SkeletalMeshComponents;
  GetComponents(SkeletalMeshComponents);
  if (SkeletalMeshComponents.Num() > 0) {
    if (USkeletalMesh *SkeletalMesh =
            SkeletalMeshComponents[0]->GetSkeletalMeshAsset()) {
      PreviewComponent->SetVariableObject(TEXT("User.SkeletalMesh"),
                                          SkeletalMesh);
      PreviewComponent->SetVariableObject(TEXT("User.Mesh"),
                                          SkeletalMesh);
    }
  } else {
    TArray<UStaticMeshComponent *> StaticMeshComponents;
    GetComponents(StaticMeshComponents);
    if (StaticMeshComponents.Num() > 0 &&
        StaticMeshComponents[0]->GetStaticMesh()) {
      PreviewComponent->SetVariableStaticMesh(TEXT("User.StaticMesh"),
                                              StaticMeshComponents[0]
                                                  ->GetStaticMesh());
      PreviewComponent->SetVariableObject(TEXT("User.Mesh"),
                                          StaticMeshComponents[0]
                                              ->GetStaticMesh());
    }
  }

  if (HologramMaterial) {
    PreviewComponent->SetVariableMaterial(TEXT("User.Material"),
                                          HologramMaterial);
  }

  PreviewComponent->SetHiddenInGame(false);
  PreviewComponent->SetVisibility(true);
  PreviewComponent->Activate();
}
#endif
