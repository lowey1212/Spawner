#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnerActor.generated.h"

/**
 * Actor used to mark spawn locations. In the editor a preview actor
 * is spawned at the marker's location for easy visualization.
 */
UCLASS()
class DAI_SPAWNEREDITOR_API ASpawnerActor : public AActor {
  GENERATED_BODY()

public:
  ASpawnerActor();

  /** Actor class used for in-editor visualization.  This actor is editor-only
   * and will not be cooked into builds. */
  UPROPERTY(EditAnywhere, Category = "Visualization", meta = (ToolTip = "In-editor only actor class for preview; not cooked into builds"))
  TSubclassOf<AActor> PreviewActorClass = nullptr;

  /** Preview actor spawned for visualization. */
  UPROPERTY(VisibleAnywhere, Transient, Category = "Visualization", meta = (ToolTip = "Editor-only preview actor; not cooked into builds"))
  TObjectPtr<AActor> PreviewActor = nullptr;

  virtual void OnConstruction(const FTransform &Transform) override;
};
