#pragma once
#include "Subsystems/GameInstanceSubsystem.h"
#include "DAIGameSubsystemBase.generated.h"
UCLASS(Abstract) class DAI_HUB_API UDAIGameSubsystemBase : public UGameInstanceSubsystem { GENERATED_BODY() public: virtual void Initialize(FSubsystemCollectionBase&) override {} virtual void Deinitialize() override {} };
