#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DAIQuestService.generated.h"

UINTERFACE(MinimalAPI)
class UDAIQuestService : public UInterface
{
    GENERATED_BODY()
};

class DAI_HUB_API IDAIQuestService
{
    GENERATED_BODY()

public:
    virtual void StartQuest(const FName& QuestId) = 0;
};