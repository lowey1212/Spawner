#pragma once
#include "Widgets/SCompoundWidget.h"

class SDAISpawnerDocs : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SDAISpawnerDocs) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

private:
    FText BuildDocsText() const;
    FText BuildIntroText() const;
    FText BuildClassDocs(class UClass* Cls, bool bLongHelp, bool bIncludeNonBlueprint) const;
    void ExportMarkdown() const;

private:
    TSharedPtr<class SScrollBox> Scroll;
    TSharedPtr<class SEditableTextBox> SearchBox;
    mutable FString CachedMarkdown;
};