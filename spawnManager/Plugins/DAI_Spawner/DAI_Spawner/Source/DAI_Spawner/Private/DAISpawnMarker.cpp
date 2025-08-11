

#include "DAISpawnMarker.h"

#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#if WITH_EDITOR
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#endif

ADAISpawnMarker::ADAISpawnMarker()
{
    PrimaryActorTick.bCanEverTick = false;
    // Mark as editor-only; the spawn manager caches transforms for runtime use.
    bIsEditorOnlyActor = true;

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
#if WITH_EDITORONLY_DATA
    WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    WidgetComponent->SetupAttachment(SceneRoot);
    WidgetComponent->SetRelativeLocation(FVector::ZeroVector);
    WidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
    WidgetComponent->SetDrawAtDesiredSize(true);
    WidgetComponent->SetHiddenInGame(true);
#endif

    // Create spawn point component used for determining where the NPC spawns relative to this marker
    SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPoint"));
    SpawnPoint->SetupAttachment(SceneRoot);
    SpawnPoint->SetRelativeLocation(FVector::ZeroVector);
}

#if WITH_EDITOR
void ADAISpawnMarker::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
#if WITH_EDITORONLY_DATA
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
#endif
}
#endif