#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnerActor.generated.h"

/**
 * Actor used to mark spawn locations. In the editor a preview actor
 * is spawned at the marker's location for easy visualization.
 */
UCLASS()
class SPAWNMANAGER_API ASpawnerActor : public AActor {
  GENERATED_BODY()

public:
  ASpawnerActor();

#if WITH_EDITORONLY_DATA

protected:
  /** Editor-only preview actor spawned for visualization. Not cooked into builds. */
  UPROPERTY(VisibleAnywhere, Transient, Category = "Visualization",
            meta = (ToolTip = "Editor-only preview actor; not cooked into builds"))
  TObjectPtr<AActor> PreviewActor;

  /** Actor class whose instance is spawned for preview */
  UPROPERTY(EditAnywhere, Category = "Visualization")
  TSubclassOf<AActor> PreviewActorClass;
#endif

#if WITH_EDITOR
  virtual void OnConstruction(const FTransform &Transform) override;
#endif
};
