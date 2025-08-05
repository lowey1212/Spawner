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
<<<<<<< HEAD
protected:
  /** Editor-only preview actor spawned for visualization. Not cooked into builds. */
  UPROPERTY(VisibleAnywhere, Transient, Category = "Visualization",
            meta = (ToolTip = "Editor-only preview actor; not cooked into builds"))
  TObjectPtr<AActor> PreviewActor;

  /** Actor class whose instance is spawned for preview */
  UPROPERTY(EditAnywhere, Category = "Visualization")
<<<<<<< HEAD
=======
  /** Actor class used for in-editor visualization. Not cooked into builds. */
  UPROPERTY(EditAnywhere, Category = "Visualization",
            meta = (ToolTip = "In-editor only actor class for preview; not cooked into builds"))
>>>>>>> parent of c9c13b5 (Merge branch 'test' into gve4gy-codex/remove-particle-effect-and-add-editor-actor-variable)
=======

>>>>>>> parent of fa80f0f (fix: remove duplicated preview actor)
  TSubclassOf<AActor> PreviewActorClass;

protected:
  /** Editor-only preview actor spawned for visualization. Not cooked into builds. */
  UPROPERTY(VisibleAnywhere, Transient, Category = "Visualization",
            meta = (ToolTip = "Editor-only preview actor; not cooked into builds"))
  TObjectPtr<AActor> PreviewActor;
#endif

#if WITH_EDITOR
  virtual void OnConstruction(const FTransform &Transform) override;
#endif
};
