#pragma once
#include "UObject/Interface.h"
#include "DAI/Core/DAIStructs.h"
#include "IDAI_FactionAware.generated.h"
UINTERFACE(BlueprintType) class UDAI_FactionAware : public UInterface { GENERATED_BODY() };
class IDAI_FactionAware { GENERATED_BODY() public: virtual FFactionId GetFactionId() const = 0; };
