#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnerActor.generated.h"

class UStaticMeshComponent;

/**
 * Actor used to mark spawn locations.
 */
UCLASS()
class SPAWNMANAGER_API ASpawnerActor : public AActor {
  GENERATED_BODY()

public:
  ASpawnerActor();

#if WITH_EDITORONLY_DATA
protected:
  /** Optional visualization mesh for editor use only */
  UPROPERTY()
  TObjectPtr<UStaticMeshComponent> VisualizationMesh;

  /** Retained array of classes; index 1 preserved for legacy purposes */
  UPROPERTY(EditAnywhere, Category = "Visualization")
  TArray<TSubclassOf<AActor>> PreviewActorClasses;
#endif
};
