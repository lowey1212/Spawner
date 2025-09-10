#pragma once
#include "Subsystems/EngineSubsystem.h"
#include "DAIHubServiceRegistry.generated.h"

UCLASS()
class DAI_HUB_API UDAIHubServiceRegistry : public UEngineSubsystem
{
    GENERATED_BODY()

public:
    template<class TService>
    TService* Get() const
    {
        if (UObject* const* Found = Services.Find(TService::StaticClass()))
            return Cast<TService>(*Found);
        return nullptr;
    }

    template<class TInterface>
    TScriptInterface<TInterface> GetInterface() const
    {
        TScriptInterface<TInterface> Result;
        UClass* InterfaceClass = TInterface::UClassType::StaticClass();
        for (const auto& Pair : Services)
        {
            if (Pair.Key->ImplementsInterface(InterfaceClass))
            {
                Result.SetObject(Pair.Value);
                return Result;
            }
        }
        return Result;
    }

    void Register(UObject* Service)
    {
        if (Service) Services.Add(Service->GetClass(), Service);
    }

    void Unregister(UObject* Service)
    {
        if (Service) Services.Remove(Service->GetClass());
    }

    void GetRegisteredServiceNames(TArray<FString>& OutNames) const
    {
        for (const auto& Pair : Services)
        {
            if (Pair.Key) OutNames.Add(Pair.Key->GetName());
        }
    }

private:
    UPROPERTY() TMap<TSubclassOf<UObject>, UObject*> Services;
};
