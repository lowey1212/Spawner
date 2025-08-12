#include "SDAISpawnerDocs.h"
#include "DAISpawnerEditorSettings.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SButton.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "UObject/UObjectIterator.h"
#include "UObject/UnrealType.h"
#include "Engine/Blueprint.h"

static bool IsFromDAISpawnerModule(const UClass* Cls)
{
    if (!Cls) return false;
    const UPackage* Pkg = Cls->GetOutermost();
    return Pkg && Pkg->GetName().StartsWith(TEXT("/Script/DAI_Spawner"));
}

void SDAISpawnerDocs::Construct(const FArguments& InArgs)
{
    ChildSlot
    [
        SNew(SBorder).Padding(6)
        [
            SNew(SVerticalBox)

            + SVerticalBox::Slot().AutoHeight().Padding(0,0,0,6)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot().FillWidth(1.f).Padding(0,0,6,0)
                [
                    SAssignNew(SearchBox, SEditableTextBox)
                    .HintText(NSLOCTEXT("DAI_Docs","SearchHint","Search..."))
                    .OnTextCommitted_Lambda([this](const FText&, ETextCommit::Type){
                        if (Scroll.IsValid())
                        {
                            Scroll->ClearChildren();
                            Scroll->AddSlot()[
                                SNew(STextBlock).Text(BuildDocsText()).AutoWrapText(true)
                            ];
                        }
                    })
                ]
                + SHorizontalBox::Slot().AutoWidth()
                [
                    SNew(SButton)
                    .Text(NSLOCTEXT("DAI_Docs","Export","Export Markdown"))
                    .OnClicked_Lambda([this](){
                        ExportMarkdown();
                        return FReply::Handled();
                    })
                ]
            ]

            + SVerticalBox::Slot().FillHeight(1.f)
            [
                SAssignNew(Scroll, SScrollBox)
                + SScrollBox::Slot()
                [
                    SNew(STextBlock)
                    .Text(BuildDocsText())
                    .AutoWrapText(true)
                ]
            ]
        ]
    ];
}

FText SDAISpawnerDocs::BuildIntroText() const
{
    const UDAISpawnerEditorSettings* Settings = GetDefault<UDAISpawnerEditorSettings>();
    const bool bLong = !Settings || Settings->bEnableLongHelp;

    FString Intro;
    Intro += TEXT("DAI Spawner – Blueprint & Runtime Docs\n\n");
    Intro += TEXT("This panel documents Blueprint-exposed functions and key properties from the DAI Spawner plugin. ");
    Intro += TEXT("Use the toolbar button to open/close this panel. ");
    if (bLong)
    {
        Intro += TEXT("\n\nQuick Start:\n");
        Intro += TEXT("1) Place a DAISpawnManager actor in your level.\n");
        Intro += TEXT("2) Fill 'SpawnEntries' with the actors/meshes you want to spawn.\n");
        Intro += TEXT("3) Optionally set rules (weights, spawn chance, cooldowns).\n");
        Intro += TEXT("4) Call 'SpawnActors' (BeginPlay, manual call, or auto-loop).\n");
        Intro += TEXT("5) Use 'DespawnAll' to clean up.\n\n");
        Intro += TEXT("Notes:\n• Deterministic mode seeds a random stream for reproducible spawns.\n");
        Intro += TEXT("• Use 'RequiredLevelName' + 'bWaitForLevelToLoad' for streaming levels.\n");
        Intro += TEXT("• Debug options live under 'Spawn|Debug'.\n\n");
    }
    return FText::FromString(Intro);
}

FText SDAISpawnerDocs::BuildClassDocs(UClass* Cls, bool bLongHelp, bool bIncludeNonBlueprint) const
{
    if (!Cls) return FText::GetEmpty();

    FString Out;
    Out += FString::Printf(TEXT("\n== %s =="), *Cls->GetName());
    Out += TEXT("\n");

    for (TFieldIterator<FProperty> It(Cls, EFieldIteratorFlags::IncludeSuper); It; ++It)
    {
        const FProperty* Prop = *It;
        const bool bBPReadable  = Prop->HasAnyPropertyFlags(CPF_BlueprintVisible);
        const bool bBPAssignable= Prop->HasAnyPropertyFlags(CPF_BlueprintAssignable);
        const bool bShow = bBPReadable || bBPAssignable || bIncludeNonBlueprint;
        if (!bShow) continue;

        FString Cat = Prop->GetMetaData(TEXT("Category"));
        FString Tip = Prop->GetMetaData(TEXT("ToolTip"));
        if (Tip.IsEmpty() && bLongHelp)
        {
            Tip = TEXT("A configurable setting used by the spawner.");
        }
        Out += FString::Printf(TEXT("  • %s  [%s]"), *Prop->GetName(), *Cat);
        if (!Tip.IsEmpty())
        {
            Out += FString::Printf(TEXT(" — %s"), *Tip);
        }
        Out += TEXT("\n");
    }

    for (TFieldIterator<UFunction> FIt(Cls, EFieldIteratorFlags::IncludeSuper); FIt; ++FIt)
    {
        const UFunction* Func = *FIt;
        const bool bCallable = Func->HasAnyFunctionFlags(FUNC_BlueprintCallable | FUNC_BlueprintEvent | FUNC_BlueprintPure);
        if (!bCallable && !bIncludeNonBlueprint) continue;

        const FString Display = Func->GetMetaData(TEXT("DisplayName"));
        const FString Cat     = Func->GetMetaData(TEXT("Category"));
        FString Tip          = Func->GetMetaData(TEXT("ToolTip"));
        if (Tip.IsEmpty() && bLongHelp)
        {
            Tip = TEXT("Function provided by the spawner.");
        }

        Out += FString::Printf(TEXT("  • %s  [%s]"), *(!Display.IsEmpty() ? Display : Func->GetName()), *Cat);
        if (!Tip.IsEmpty())
        {
            Out += FString::Printf(TEXT(" — %s"), *Tip);
        }
        Out += TEXT("\n");
    }

    return FText::FromString(Out);
}

FText SDAISpawnerDocs::BuildDocsText() const
{
    const UDAISpawnerEditorSettings* Settings = GetDefault<UDAISpawnerEditorSettings>();
    const bool bLong = !Settings || Settings->bEnableLongHelp;
    const bool bIncl = Settings && Settings->bIncludeNonBlueprint;

    FString All = BuildIntroText().ToString();

    for (TObjectIterator<UClass> It; It; ++It)
    {
        if (UClass* Cls = *It)
        {
            if (IsFromDAISpawnerModule(Cls) && !Cls->HasAnyClassFlags(CLASS_Deprecated | CLASS_NewerVersionExists))
            {
                All += BuildClassDocs(Cls, bLong, bIncl).ToString();
            }
        }
    }

    CachedMarkdown = All;
    CachedMarkdown.ReplaceInline(TEXT("•"), TEXT("-"));
    return FText::FromString(All);
}

void SDAISpawnerDocs::ExportMarkdown() const
{
    FString Out = CachedMarkdown;
    if (Out.IsEmpty())
    {
        Out = TEXT("# DAI Spawner Docs\n(Empty)\n");
    }
    const FString SavePath = FPaths::ProjectSavedDir() / TEXT("DAI_Spawner_Docs.md");
    FFileHelper::SaveStringToFile(Out, *SavePath);
}