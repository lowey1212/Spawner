#pragma once
#include "CoreMinimal.h"
#include "DAIEnums.generated.h"

UENUM(BlueprintType) enum class EQuestState     : uint8 { Inactive, Active, Completed, Failed };
UENUM(BlueprintType) enum class ESpawnReason    : uint8 { Scripted, Dynamic, Refill };
UENUM(BlueprintType) enum class ELoadPriority   : uint8 { Low, Normal, High };
