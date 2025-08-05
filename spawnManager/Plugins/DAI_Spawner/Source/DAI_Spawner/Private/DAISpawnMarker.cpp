

#include "DAISpawnMarker.h"

#include "Components/ArrowComponent.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include "Components/SceneComponent.h"

ADAISpawnMarker::ADAISpawnMarker()
{
    PrimaryActorTick.bCanEverTick = false;
    bIsEditorOnlyActor = true; // prevent this marker from appearing in game builds

    // Create scene root
    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

    // Create arrow component for orientation.  Rotate the arrow so that it
    // points downward relative to the world (default arrow points along +X).
    ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    ArrowComponent->SetupAttachment(SceneRoot);
    ArrowComponent->SetArrowColor(FColor::Yellow);
    ArrowComponent->ArrowSize = 1.0f;
    ArrowComponent->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));
    ArrowComponent->bIsScreenSizeScaled = true;
    // Only show arrow in editor
    ArrowComponent->SetHiddenInGame(true);

    // Widget component for user provided visuals
    WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    WidgetComponent->SetupAttachment(SceneRoot);
    WidgetComponent->SetRelativeLocation(FVector::ZeroVector);
    WidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
    WidgetComponent->SetDrawAtDesiredSize(true);
    WidgetComponent->SetHiddenInGame(true);

    // Create spawn point component used for determining where the NPC spawns relative to this marker
    SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPoint"));
    SpawnPoint->SetupAttachment(SceneRoot);
    SpawnPoint->SetRelativeLocation(FVector::ZeroVector);
}

void ADAISpawnMarker::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    // Apply the user provided widget class if one is set.  This will replace
    // whatever widget might currently be assigned.
    if (MarkerWidgetClass)
    {
        WidgetComponent->SetWidgetClass(MarkerWidgetClass);
        WidgetComponent->SetVisibility(true);
    }
    else
    {
        WidgetComponent->SetVisibility(false);
    }
}