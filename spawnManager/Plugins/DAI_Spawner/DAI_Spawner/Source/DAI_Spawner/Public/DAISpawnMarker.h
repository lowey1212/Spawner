// Copyright Epic Games, Inc. All Rights Reserved.

/**
 * @file
 *
 * DAISpawnMarker.h
 *
 * A simple marker actor that can be placed in levels and referenced by
 * ADAISpawnManager as the location at which to spawn actors when
 * bUseMarker is true.  The marker contains an arrow component to indicate
 * direction and optionally hosts a widget component so designers can supply
 * their own visual cue (e.g. a downwards pointing arrow).  Markers are
 * hidden in game by default but visible in the editor for setup.
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DAISpawnMarker.generated.h"

class UArrowComponent;
class USceneComponent;
#if WITH_EDITORONLY_DATA
class UWidgetComponent;
class UUserWidget;
#endif

UCLASS(Blueprintable)
class DAI_SPAWNER_API ADAISpawnMarker : public AActor
{
    GENERATED_BODY()

public:
    ADAISpawnMarker();

    /** Root scene component so we can easily manipulate the marker in Blueprints. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Marker")
    USceneComponent* SceneRoot;

    /** Arrow component used to visualise the marker location and direction in the editor. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Marker")
    UArrowComponent* ArrowComponent;

    /** Spawn point component indicating where the NPC should spawn relative to the marker.  Designers
     *  can move this component in the editor to adjust the spawn location (e.g. centre of a
     *  cave).  When bUseMarker is enabled on the spawn manager, the actor will be spawned at
     *  the world location of this component while the static mesh is placed at the marker actor's
     *  location.
     */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Marker")
    USceneComponent* SpawnPoint;

#if WITH_EDITORONLY_DATA
    /** Widget component that can host a user provided marker widget. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Marker")
    UWidgetComponent* WidgetComponent;

    /** Optional widget class used to represent the marker visually.  This
     *  widget will be spawned on the WidgetComponent during construction.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker")
    TSubclassOf<UUserWidget> MarkerWidgetClass;
#endif

protected:
#if WITH_EDITOR
    virtual void OnConstruction(const FTransform& Transform) override;
#endif
};