#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnerActor.generated.h"

class UStaticMeshComponent;

/**
 * Actor used to mark spawn locations. In the editor a preview actor
 * is spawned at the marker's location for easy visualization.
 */
UCLASS()
class DAI_SPAWNER_API ASpawnerActor : public AActor {
  GENERATED_BODY()

public:
  ASpawnerActor();

protected:
  /** Static mesh shown when this marker is placed in the world */
  UPROPERTY(VisibleAnywhere, Category = "Visualization")
  TObjectPtr<UStaticMeshComponent> MeshComponent = nullptr;

#if WITH_EDITORONLY_DATA
  /** Actor class used for in-editor visualization. Not cooked into builds. */
  UPROPERTY(EditAnywhere, Category = "Visualization",
            meta = (ToolTip = "In-editor only actor class for preview; not cooked into builds"))
  TSubclassOf<AActor> PreviewActorClass = nullptr;

  /** Editor-only preview actor spawned for visualization. Not cooked into
   * builds. */
  UPROPERTY(
      VisibleAnywhere, Transient, Category = "Visualization",
      meta = (ToolTip = "Editor-only preview actor; not cooked into builds"))
  TObjectPtr<AActor> PreviewActor = nullptr;
#endif

#if WITH_EDITOR
  virtual void OnConstruction(const FTransform &Transform) override;
#endif
};
