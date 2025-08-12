#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DAISpawnerEditorSettings.generated.h"

UCLASS(config=EditorPerProjectUserSettings, defaultconfig, meta=(DisplayName="DAI Spawner"))
class DAI_SPAWNEREDITOR_API UDAISpawnerEditorSettings : public UDeveloperSettings
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, config, Category="Docs",
              meta=(ToolTip="Toggle long-form docs text in the DAI Spawner docs panel."))
    bool bEnableLongHelp = true;

    UPROPERTY(EditAnywhere, config, Category="Docs",
              meta=(ToolTip="Show non-Blueprint members and functions (advanced, more verbose)."))
    bool bIncludeNonBlueprint = false;

    virtual FName GetCategoryName() const override { return TEXT("Plugins"); }
    virtual FName GetSectionName() const override { return TEXT("DAI Spawner"); }
};