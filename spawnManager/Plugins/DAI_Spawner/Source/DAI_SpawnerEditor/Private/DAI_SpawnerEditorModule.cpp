#include "DAI_SpawnerEditorModule.h"
#include "DAISpawnerEditorStyle.h"
#include "SDAISpawnerDocs.h"
#include "ToolMenus.h"
#include "Styling/SlateIconFinder.h"
#include "Framework/Docking/TabManager.h"
#include "Widgets/Docking/SDockTab.h"

#define LOCTEXT_NAMESPACE "DAI_SpawnerEditor"
const FName FDAI_SpawnerEditorModule::DocsTabName(TEXT("DAI_Spawner_Docs"));

void FDAI_SpawnerEditorModule::StartupModule()
{
    FDAISpawnerEditorStyle::Initialize();

    FGlobalTabmanager::Get()->RegisterNomadTabSpawner(
        DocsTabName,
        FOnSpawnTab::CreateRaw(this, &FDAI_SpawnerEditorModule::SpawnDocsTab))
        .SetDisplayName(LOCTEXT("DocsTabTitle", "DAI Spawner Docs"))
        .SetMenuType(ETabSpawnerMenuType::Hidden);

    UToolMenus::RegisterStartupCallback(
        FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FDAI_SpawnerEditorModule::RegisterMenus));
}

void FDAI_SpawnerEditorModule::ShutdownModule()
{
    if (UToolMenus* Menus = UToolMenus::Get())
    {
        Menus->UnRegisterStartupCallback(this);   // <-- unregister, don't register
        Menus->UnregisterOwner(this);
    }

    FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(DocsTabName);
    FDAISpawnerEditorStyle::Shutdown();
}

void FDAI_SpawnerEditorModule::RegisterMenus()
{
    if (UToolMenus* Menus = UToolMenus::Get())
    {
        if (UToolMenu* Toolbar = Menus->ExtendMenu("LevelEditor.LevelEditorToolBar"))
        {
            FToolMenuSection& Section = Toolbar->AddSection("DAISpawner", LOCTEXT("DAISection", "DAI Spawner"));
            Section.AddEntry(FToolMenuEntry::InitToolBarButton(
                "OpenDAIDocs",
                FUIAction(FExecuteAction::CreateLambda([] {
                    FGlobalTabmanager::Get()->TryInvokeTab(FDAI_SpawnerEditorModule::DocsTabName);
                    })),
                LOCTEXT("OpenDAIDocs_Label", "DAI Docs"),
                LOCTEXT("OpenDAIDocs_Tooltip", "Open the DAI Spawner documentation panel."),
                FSlateIcon(FDAISpawnerEditorStyle::GetStyleSetName(), "DAISpawner.Icon.Large")));
        }

        if (UToolMenu* MainMenu = Menus->ExtendMenu("LevelEditor.MainMenu"))
        {
            FToolMenuSection& DAISection = MainMenu->AddSection("DAISpawnerMenu", LOCTEXT("DAISpawnerMenu", "DAI Spawner"));
            DAISection.AddMenuEntry(
                "OpenDAIDocs_Menu",
                LOCTEXT("OpenDAIDocs_Menu_Label", "DAI Spawner Docs"),
                LOCTEXT("OpenDAIDocs_Menu_Tooltip", "Open the DAI Spawner documentation panel."),
                FSlateIcon(FDAISpawnerEditorStyle::GetStyleSetName(), "DAISpawner.Icon.Small"),
                FUIAction(FExecuteAction::CreateLambda([] {
                    FGlobalTabmanager::Get()->TryInvokeTab(FDAI_SpawnerEditorModule::DocsTabName);
                    }))
            );
        }

        Menus->RefreshAllWidgets();
    }
}

TSharedRef<SDockTab> FDAI_SpawnerEditorModule::SpawnDocsTab(const FSpawnTabArgs& Args)
{
    return SNew(SDockTab)
        .TabRole(ETabRole::NomadTab)
        [
            SNew(SDAISpawnerDocs)
        ];
}
