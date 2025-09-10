#pragma once
#include "Subsystems/WorldSubsystem.h"
#include "DAIWorldSubsystemBase.generated.h"
UCLASS(Abstract) class DAI_HUB_API UDAIWorldSubsystemBase : public UWorldSubsystem { GENERATED_BODY() public: virtual void Initialize(FSubsystemCollectionBase&) override {} virtual void Deinitialize() override {} };
