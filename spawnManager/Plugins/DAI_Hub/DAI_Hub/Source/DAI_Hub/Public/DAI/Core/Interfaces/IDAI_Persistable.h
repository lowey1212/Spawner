#pragma once
#include "UObject/Interface.h"
#include "IDAI_Persistable.generated.h"
UINTERFACE(BlueprintType) class UDAI_Persistable : public UInterface { GENERATED_BODY() };
class IDAI_Persistable { GENERATED_BODY() public: virtual void SerializeTo(FArchive& Ar)=0; virtual int32 GetPersistVersion() const { return 1; } };
