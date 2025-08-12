#pragma once
#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

class DAI_SPAWNEREDITOR_API FDAI_SpawnerEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
    void RegisterMenus();
    TSharedRef<class SDockTab> SpawnDocsTab(const class FSpawnTabArgs& Args);

private:
    static const FName DocsTabName;
};