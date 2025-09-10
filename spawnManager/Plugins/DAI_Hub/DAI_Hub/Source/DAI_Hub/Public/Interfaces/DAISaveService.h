#pragma once

#include "CoreMinimal.h"
#include "Dom/JsonObject.h"
#include "UObject/Interface.h"
#include "DAISaveService.generated.h"

UINTERFACE(MinimalAPI)
class UDAISaveService : public UInterface
{
    GENERATED_BODY()
};

class DAI_HUB_API IDAISaveService
{
    GENERATED_BODY()

public:
    virtual void QueueSave() = 0;
    virtual void LoadLatest() = 0;
    virtual bool ReadFragment(const FName& FragmentId, TSharedPtr<FJsonObject>& OutFragment) const = 0;
    virtual void WriteFragment(const FName& FragmentId, const TSharedPtr<FJsonObject>& Fragment) = 0;
};