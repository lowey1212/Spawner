#pragma once

#include "CoreMinimal.h"
#include "Dom/JsonObject.h"
#include "UObject/Interface.h"
#include "DAISaveFragmentProvider.generated.h"

UINTERFACE(MinimalAPI)
class UDAISaveFragmentProvider : public UInterface
{
    GENERATED_BODY()
};

class DAI_HUB_API IDAISaveFragmentProvider
{
    GENERATED_BODY()

public:
    virtual FName GetFragmentId() const = 0;
    virtual TSharedPtr<FJsonObject> GetSaveFragment() const = 0;
    virtual void ApplySaveFragment(const TSharedPtr<FJsonObject>& Fragment) = 0;
};