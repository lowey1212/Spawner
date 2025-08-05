#include "SpawnerActor.h"
#include "Components/SceneComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "UObject/ConstructorHelpers.h"

#if WITH_EDITOR
#include "Engine/World.h"
#endif

ASpawnerActor::ASpawnerActor() {
  bIsEditorOnlyActor = true;
  PrimaryActorTick.bCanEverTick = false;
  USceneComponent *Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
  SetRootComponent(Root);

#if WITH_EDITORONLY_DATA
  VisualizationMesh =
      CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualizationMesh"));
  VisualizationMesh->SetupAttachment(Root);
  VisualizationMesh->SetRelativeScale3D(FVector(1.f, 1.f, 0.05f));
  VisualizationMesh->SetRelativeLocation(FVector(0.f, 0.f, -70.f));
  VisualizationMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
  VisualizationMesh->bIsEditorOnly = true;

#if WITH_EDITOR
  static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMesh(
      TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
  if (CylinderMesh.Succeeded()) {
    VisualizationMesh->SetStaticMesh(CylinderMesh.Object);
  }

  static ConstructorHelpers::FObjectFinder<UMaterialInterface> BasicMat(
      TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));
  if (BasicMat.Succeeded()) {
    UMaterialInstanceDynamic *MID =
        UMaterialInstanceDynamic::Create(BasicMat.Object, VisualizationMesh);
    if (MID) {
      MID->SetVectorParameterValue(TEXT("Color"), FLinearColor::Red);
      VisualizationMesh->SetMaterial(0, MID);
    }
  }
#endif // WITH_EDITOR

  PreviewActors.Reset();
#endif // WITH_EDITORONLY_DATA
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

  static const FVector Offsets[5] = {
      FVector::ZeroVector, FVector(0.f, 100.f, 0.f), FVector(0.f, -100.f, 0.f),
      FVector(100.f, 0.f, 0.f), FVector(-100.f, 0.f, 0.f)};

  const int32 Count = FMath::Min(5, PreviewActorClasses.Num());
  for (int32 Index = 0; Index < Count; ++Index) {
    TSubclassOf<AActor> Class = PreviewActorClasses[Index];
    if (!Class) {
      continue;
    }

    FTransform SpawnTransform = GetActorTransform();
    SpawnTransform.AddToTranslation(
        SpawnTransform.GetRotation().RotateVector(Offsets[Index]));

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
