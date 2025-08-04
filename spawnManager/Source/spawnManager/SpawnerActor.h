#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnerActor.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class UMaterialInterface;

/**
 * Actor used to mark spawn locations. In the editor a Niagara effect
 * renders the actor's mesh as a hologram for easy visualization.
 */
UCLASS()
class SPAWNMANAGER_API ASpawnerActor : public AActor {
  GENERATED_BODY()

public:
  ASpawnerActor();

#if WITH_EDITORONLY_DATA
protected:
  /** Niagara component used to visualize the actor in the editor */
  UPROPERTY(Transient)
  TObjectPtr<UNiagaraComponent> PreviewComponent;

  /** Niagara system used for the hologram effect */
  UPROPERTY(EditAnywhere, Category = "Visualization")
  TObjectPtr<UNiagaraSystem> PreviewSystem;

  /** Optional material to override the Niagara mesh material */
  UPROPERTY(EditAnywhere, Category = "Visualization")
  TObjectPtr<UMaterialInterface> HologramMaterial;

  virtual void OnConstruction(const FTransform &Transform) override;
#endif
};
