#include "DAIUltraSkyEnvironmentSoundComponent.h"
#include "DAIUltraSkyActor.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"

UDAIUltraSkyEnvironmentSoundComponent::UDAIUltraSkyEnvironmentSoundComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UDAIUltraSkyEnvironmentSoundComponent::BeginPlay()
{
    Super::BeginPlay();
    ActiveAudio = NewObject<UAudioComponent>(this, TEXT("EnvSound_A"));
    if (ActiveAudio)
    {
        ActiveAudio->bAutoActivate = false;
        ActiveAudio->RegisterComponent();
        ActiveAudio->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
    }
}

void UDAIUltraSkyEnvironmentSoundComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (ActiveAudio) { ActiveAudio->Stop(); }
    if (FadingOutAudio) { FadingOutAudio->Stop(); }
    Super::EndPlay(EndPlayReason);
}

void UDAIUltraSkyEnvironmentSoundComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    if (!bEnabled) { return; }
    if (!UltraSky) { return; }

    const FName Cond = UltraSky->CurrentCondition.IsNone() ? FName("Clear") : UltraSky->CurrentCondition;
    if (Cond != LastCondition)
    {
        // Find sound for new condition
        USoundBase* NewSound = nullptr;
        for (const auto& E : Sounds)
        {
            if (E.Condition == Cond)
            {
                NewSound = E.Sound;
                break;
            }
        }

        if (NewSound)
        {
            // Start crossfade: move Active to fading out, start new on Active
            if (ActiveAudio && ActiveAudio->IsPlaying())
            {
                FadingOutAudio = ActiveAudio;
            }

            UAudioComponent* NewComp = NewObject<UAudioComponent>(this);
            if (NewComp)
            {
                NewComp->bAutoActivate = false;
                NewComp->RegisterComponent();
                NewComp->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
                NewComp->SetSound(NewSound);
                NewComp->SetVolumeMultiplier(0.0f);
                NewComp->Play();
                ActiveAudio = NewComp;
                FadeTimer = CrossfadeSeconds;
            }
        }
        LastCondition = Cond;
    }

    if (FadeTimer > 0.0f)
    {
        FadeTimer = FMath::Max(0.0f, FadeTimer - DeltaTime);
        const float T = CrossfadeSeconds > 0.0f ? 1.0f - (FadeTimer / CrossfadeSeconds) : 1.0f;
        if (ActiveAudio)
        {
            ActiveAudio->SetVolumeMultiplier(FMath::Clamp(T, 0.0f, 1.0f));
        }
        if (FadingOutAudio)
        {
            FadingOutAudio->SetVolumeMultiplier(FMath::Clamp(1.0f - T, 0.0f, 1.0f));
            if (T >= 1.0f)
            {
                FadingOutAudio->Stop();
                FadingOutAudio = nullptr;
            }
        }
    }
}

