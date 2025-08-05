#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnerActor.generated.h"

/**
 * Actor used to mark spawn locations. In the editor preview actors
 * are spawned at the marker's location for easy visualization.
 */
UCLASS()
class SPAWNMANAGER_API ASpawnerActor : public AActor {
  GENERATED_BODY()

public:
  ASpawnerActor();

#if WITH_EDITORONLY_DATA

protected:
  /** Editor-only preview actors spawned for visualization. Not cooked into builds. */
  UPROPERTY(VisibleAnywhere, Transient, Category = "Visualization",
            meta = (ToolTip = "Editor-only preview actors; not cooked into builds"))
  TArray<TObjectPtr<AActor>> PreviewActors;

  /** Actor classes whose instances are spawned for preview */
  UPROPERTY(EditAnywhere, Category = "Visualization")
  TArray<TSubclassOf<AActor>> PreviewActorClasses;
#endif

#if WITH_EDITOR
  virtual void OnConstruction(const FTransform &Transform) override;
#endif
};
