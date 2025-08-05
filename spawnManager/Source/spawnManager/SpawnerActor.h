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
  /** Simple mesh to visualize the spawn point in the editor */
  UPROPERTY(VisibleAnywhere, Category = "Visualization")
  TObjectPtr<UStaticMeshComponent> VisualizationMesh;

  /** Preview actor spawned for visualization; only index 0 is used */
  UPROPERTY(Transient)
  TObjectPtr<AActor> PreviewActor;

  /** Actor classes available for preview (only first is spawned) */
  UPROPERTY(EditAnywhere, Category = "Visualization")
  TArray<TSubclassOf<AActor>> PreviewActorClasses;
#endif

#if WITH_EDITOR
  virtual void OnConstruction(const FTransform &Transform) override;
#endif
};
