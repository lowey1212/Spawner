#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Volume.h"
#include "WeatherManager.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;
class AWeatherVolume;

UENUM(BlueprintType)
enum class ECloudType : uint8
{
    Cumulus,
    Cirrus,
    Storm
};

UENUM(BlueprintType)
enum class EPrecipitationType : uint8
{
    None,
    Rain,
    Snow,
    Hail,
    Fog
};

USTRUCT(BlueprintType)
struct FWeatherState
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weather")
    ECloudType CloudType = ECloudType::Cumulus;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weather")
    EPrecipitationType Precipitation = EPrecipitationType::None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weather")
    float CloudDensity = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weather")
    float CloudSpeed = 10.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weather")
    FVector WindVelocity = FVector::ZeroVector;
};

/**
 * Central actor responsible for controlling dynamic weather effects.
 */
UCLASS(Blueprintable)
class AWeatherManager : public AActor
{
    GENERATED_BODY()
public:
    AWeatherManager();

    // Cloud Niagara systems
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Clouds")
    UNiagaraSystem* CumulusSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Clouds")
    UNiagaraSystem* CirrusSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Clouds")
    UNiagaraSystem* StormSystem;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Clouds")
    UNiagaraComponent* ActiveCloudComponent;

    // Precipitation systems
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Precipitation")
    UNiagaraSystem* RainSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Precipitation")
    UNiagaraSystem* SnowSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Precipitation")
    UNiagaraSystem* HailSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Precipitation")
    UNiagaraSystem* FogSystem;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Precipitation")
    UNiagaraComponent* ActivePrecipitationComponent;

    // Lightning
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lightning")
    UNiagaraSystem* LightningSystem;

    // Apply complete weather state
    UFUNCTION(BlueprintCallable, Category="Weather")
    void ApplyWeather(const FWeatherState& NewState);

    // Manually set wind
    UFUNCTION(BlueprintCallable, Category="Weather")
    void SetWind(const FVector& Direction, float Speed);

    // Spawn a lightning strike
    UFUNCTION(BlueprintCallable, Category="Lightning")
    void SpawnLightning(const FVector& Location);

    // Volume management
    UFUNCTION(BlueprintCallable, Category="WeatherVolume")
    void RegisterVolume(AWeatherVolume* Volume);

    UFUNCTION(BlueprintCallable, Category="WeatherVolume")
    void UnregisterVolume(AWeatherVolume* Volume);

protected:
    virtual void BeginPlay() override;

private:
    void UpdateClouds(const FWeatherState& NewState);
    void UpdatePrecipitation(const FWeatherState& NewState);
    void UpdateFromVolumes();

    FVector CurrentWind;
    TArray<AWeatherVolume*> ActiveVolumes;
};

/** Volume carrying weather parameters. */
UCLASS()
class AWeatherVolume : public AVolume
{
    GENERATED_BODY()
public:
    AWeatherVolume();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weather")
    FWeatherState Weather;

    // Weight used when blending multiple volumes
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weather")
    float Weight = 1.f;
};

