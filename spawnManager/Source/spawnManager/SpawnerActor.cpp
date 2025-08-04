#include "SpawnerActor.h"

#if WITH_EDITOR
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#endif

ASpawnerActor::ASpawnerActor() {
#if WITH_EDITORONLY_DATA
  PreviewComponent =
      CreateDefaultSubobject<UNiagaraComponent>(TEXT("SpawnPreview"));
  PreviewComponent->SetupAttachment(RootComponent);
  PreviewComponent->bAutoActivate = false;
  PreviewComponent->SetAutoDestroy(false);
  PreviewComponent->SetHiddenInGame(true);
#endif
}

#if WITH_EDITOR
void ASpawnerActor::OnConstruction(const FTransform &Transform) {
  Super::OnConstruction(Transform);

  if (!PreviewComponent || !PreviewSystem) {
    return;
  }

  PreviewComponent->SetAsset(PreviewSystem);

  if (USkeletalMeshComponent *SkeletalComp =
          FindComponentByClass<USkeletalMeshComponent>()) {
    if (SkeletalComp->SkeletalMesh) {
      PreviewComponent->SetVariableSkeletalMesh(TEXT("User.SkeletalMesh"),
                                                SkeletalComp->SkeletalMesh);
    }
  } else if (UStaticMeshComponent *StaticComp =
                 FindComponentByClass<UStaticMeshComponent>()) {
    if (StaticComp->GetStaticMesh()) {
      PreviewComponent->SetVariableStaticMesh(TEXT("User.StaticMesh"),
                                              StaticComp->GetStaticMesh());
    }
  }

  if (HologramMaterial) {
    PreviewComponent->SetVariableMaterial(TEXT("User.Material"),
                                          HologramMaterial);
  }

  PreviewComponent->Activate();
}
#endif
