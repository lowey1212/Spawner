#pragma once
#include "UObject/Interface.h"
#include "IDAI_Provider.generated.h"
UINTERFACE() class UDAI_Provider : public UInterface { GENERATED_BODY() };
class IDAI_Provider { GENERATED_BODY() public: virtual UObject* GetService(TSubclassOf<UObject> Type) const = 0; };
