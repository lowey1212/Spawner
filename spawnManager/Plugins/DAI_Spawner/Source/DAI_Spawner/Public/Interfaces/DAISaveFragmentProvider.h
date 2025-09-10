// Minimal UInterface-based IDAISaveFragmentProvider for compatibility
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DAISaveFragmentProvider.generated.h"
UINTERFACE(MinimalAPI)
class UDAISaveFragmentProvider : public UInterface
{
    GENERATED_BODY()
};

class IDAISaveFragmentProvider
{
    GENERATED_BODY()

public:
    virtual FName GetFragmentId() const = 0;
    virtual TSharedPtr<class FJsonObject> GetSaveFragment() const = 0;
    virtual void ApplySaveFragment(const TSharedPtr<class FJsonObject> &Fragment) = 0;
};
