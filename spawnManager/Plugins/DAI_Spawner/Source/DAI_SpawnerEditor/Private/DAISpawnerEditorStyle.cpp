#include "DAISpawnerEditorStyle.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"
#include "Brushes/SlateImageBrush.h"
#include "Misc/Paths.h"

TSharedPtr<FSlateStyleSet> FDAISpawnerEditorStyle::StyleInstance;

FName FDAISpawnerEditorStyle::GetStyleSetName()
{
    static FName StyleSetName(TEXT("DAISpawnerEditorStyle"));
    return StyleSetName;
}

void FDAISpawnerEditorStyle::Initialize()
{
    if (StyleInstance.IsValid()) return;

    StyleInstance = MakeShareable(new FSlateStyleSet(GetStyleSetName()));

    // Resolve plugin resource path
    FString BaseDir;
    if (const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("DAI_Spawner")))
    {
        BaseDir = Plugin->GetBaseDir();
    }
    else
    {
        // Fallback: assume module folder two levels up
        BaseDir = FPaths::ConvertRelativePathToFull(FPaths::ProjectPluginsDir() / TEXT("DAI_Spawner"));
    }
    const FString IconPath = FPaths::Combine(BaseDir, TEXT("Resources/DAI_Toolbar_Icon.png"));

    const FVector2D Small(16,16);
    const FVector2D Large(40,40);

    StyleInstance->Set(TEXT("DAISpawner.Icon.Small"), new FSlateImageBrush(IconPath, Small));
    StyleInstance->Set(TEXT("DAISpawner.Icon.Large"), new FSlateImageBrush(IconPath, Large));

    FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance.Get());
}

void FDAISpawnerEditorStyle::Shutdown()
{
    if (!StyleInstance.IsValid()) return;
    FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance.Get());
    ensure(StyleInstance.IsUnique());
    StyleInstance.Reset();
}
