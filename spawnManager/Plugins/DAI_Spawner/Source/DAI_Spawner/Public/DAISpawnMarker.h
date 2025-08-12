// Copyright Epic Games, Inc. All Rights Reserved.

/**
 * @file
 *
 * DAISpawnMarker.h
 *
 * A simple marker actor that can be placed in levels and referenced by
 * ADAISpawnManager spawn entries for precise placement.  The marker
 * contains an arrow component to indicate direction and optionally hosts a
 * widget component so designers can supply their own visual cue (e.g. a
 * downwards pointing arrow).  Markers are hidden in game by default but
 * visible in the editor for setup.
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ObjectPtr.h"
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
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawn|Marker")
    TObjectPtr<USceneComponent> SceneRoot;

    /** Arrow component used to visualise the marker location and direction in the editor. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawn|Marker")
	TObjectPtr<UArrowComponent> ArrowComponent;

    /** Spawn point component indicating where the optional static mesh should spawn relative to the marker.
     *  Designers can move this component in the editor to adjust the mesh placement (e.g. centre of a cave).
     *  When a spawn entry is configured to use this marker, the actor is placed at the marker's root while
     *  the static mesh uses the world location of this component.
     */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawn|Marker")
	TObjectPtr<USceneComponent> SpawnPoint;

#if WITH_EDITORONLY_DATA
    /** Widget component that can host a user provided marker widget. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawn|Marker")
	TObjectPtr<UWidgetComponent> WidgetComponent;

    /** Optional widget class used to represent the marker visually.  This
     *  widget will be spawned on the WidgetComponent during construction.
     */
    UPROPERTY(EditAnywhere, Category = "Spawn|Marker",
        meta = (ToolTip = "Widget class used to visualize the marker in the editor. Not cooked into builds."))
    TSubclassOf<UUserWidget> MarkerWidgetClass;
#endif

protected:
#if WITH_EDITOR
    virtual void OnConstruction(const FTransform& Transform) override;
#endif
};