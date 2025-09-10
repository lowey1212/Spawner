#pragma once
#include "UObject/Interface.h"
#include "DAI/Core/DAIStructs.h"
#include "IDAI_Spawnable.generated.h"
UINTERFACE(BlueprintType) class UDAI_Spawnable : public UInterface { GENERATED_BODY() };
class IDAI_Spawnable { GENERATED_BODY() public: virtual const TArray<FSpawnTag>& GetSpawnTags() const = 0; };
