#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DAIUltraSkyEnvironmentSoundComponent.generated.h"

class UAudioComponent;
class USoundBase;
class ADAIUltraSkyActor;

USTRUCT(BlueprintType)
struct FUltraSkyEnvSoundEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ToolTip = "Weather condition name this sound applies to (e.g. Clear, Rain, Snow, Storm)."))
    FName Condition; // e.g., Clear, Rain, Snow, Storm

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ToolTip = "Sound to loop while its Condition is active. NULL means ignored."))
    TObjectPtr<USoundBase> Sound = nullptr;
};

UCLASS(ClassGroup = (Audio), meta = (BlueprintSpawnableComponent))
class DAI_ULTRASKY_API UDAIUltraSkyEnvironmentSoundComponent : public UActorComponent
{
    GENERATED_BODY()
public:
    UDAIUltraSkyEnvironmentSoundComponent();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|EnvSound", meta = (ToolTip = "If false the component does nothing (no updates, no playback)."))
    bool bEnabled = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|EnvSound", meta = (ToolTip = "UltraSky actor providing current weather condition. Auto-found if not set at BeginPlay."))
    TObjectPtr<ADAIUltraSkyActor> UltraSky;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|EnvSound", meta = (ClampMin = "0.0", ToolTip = "Seconds to fade between old and new condition loop (0 = immediate switch)."))
    float CrossfadeSeconds = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|EnvSound", meta = (ToolTip = "Per-condition looping ambience entries. First match used."))
    TArray<FUltraSkyEnvSoundEntry> Sounds;

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

private:
    UPROPERTY(Transient, meta = (ToolTip = "Currently playing condition loop."))
    TObjectPtr<UAudioComponent> ActiveAudio;

    UPROPERTY(Transient, meta = (ToolTip = "Previous loop fading out during crossfade."))
    TObjectPtr<UAudioComponent> FadingOutAudio;

    FName LastCondition;
    float FadeTimer = 0.0f;
};
