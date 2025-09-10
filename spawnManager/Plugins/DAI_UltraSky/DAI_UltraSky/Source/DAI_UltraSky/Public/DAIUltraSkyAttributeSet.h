#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"

// Local fallback macro definition if shared accessor macro header from core plugin isn't included.
#ifndef ATTRIBUTE_ACCESSORS
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName)           \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName)               \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName)               \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
#endif
#include "DAIUltraSkyAttributeSet.generated.h"

// Basic weather attributes suitable for gameplay logic and UI
UCLASS(BlueprintType)
class DAI_ULTRASKY_API UDAIUltraSkyAttributeSet : public UAttributeSet
{
    GENERATED_BODY()

public:
    UDAIUltraSkyAttributeSet() {}

    // Temperature in Celsius
    UPROPERTY(BlueprintReadOnly, Category = "UltraSky|Attributes", ReplicatedUsing = OnRep_TemperatureC, meta = (ToolTip = "Ambient temperature in Celsius (replicated)."))
    FGameplayAttributeData TemperatureC;
    ATTRIBUTE_ACCESSORS(UDAIUltraSkyAttributeSet, TemperatureC)

    // Relative humidity 0..1
    UPROPERTY(BlueprintReadOnly, Category = "UltraSky|Attributes", ReplicatedUsing = OnRep_Humidity, meta = (ToolTip = "Relative humidity 0..1 (replicated)."))
    FGameplayAttributeData Humidity;
    ATTRIBUTE_ACCESSORS(UDAIUltraSkyAttributeSet, Humidity)

    // Wind speed in km/h
    UPROPERTY(BlueprintReadOnly, Category = "UltraSky|Attributes", ReplicatedUsing = OnRep_WindSpeedKph, meta = (ToolTip = "Wind speed in km/h (replicated)."))
    FGameplayAttributeData WindSpeedKph;
    ATTRIBUTE_ACCESSORS(UDAIUltraSkyAttributeSet, WindSpeedKph)

    // Precipitation intensity 0..1 (0=none, 1=storm)
    UPROPERTY(BlueprintReadOnly, Category = "UltraSky|Attributes", ReplicatedUsing = OnRep_Precipitation, meta = (ToolTip = "Precipitation intensity 0..1 (0 none, 1 storm)."))
    FGameplayAttributeData Precipitation;
    ATTRIBUTE_ACCESSORS(UDAIUltraSkyAttributeSet, Precipitation)

    // Cloudiness 0..1
    UPROPERTY(BlueprintReadOnly, Category = "UltraSky|Attributes", ReplicatedUsing = OnRep_Cloudiness, meta = (ToolTip = "Cloud coverage 0..1 proxy for gameplay/UI."))
    FGameplayAttributeData Cloudiness;
    ATTRIBUTE_ACCESSORS(UDAIUltraSkyAttributeSet, Cloudiness)

    // Replication
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_TemperatureC(const FGameplayAttributeData &OldValue) { GAMEPLAYATTRIBUTE_REPNOTIFY(UDAIUltraSkyAttributeSet, TemperatureC, OldValue); }
    UFUNCTION()
    void OnRep_Humidity(const FGameplayAttributeData &OldValue) { GAMEPLAYATTRIBUTE_REPNOTIFY(UDAIUltraSkyAttributeSet, Humidity, OldValue); }
    UFUNCTION()
    void OnRep_WindSpeedKph(const FGameplayAttributeData &OldValue) { GAMEPLAYATTRIBUTE_REPNOTIFY(UDAIUltraSkyAttributeSet, WindSpeedKph, OldValue); }
    UFUNCTION()
    void OnRep_Precipitation(const FGameplayAttributeData &OldValue) { GAMEPLAYATTRIBUTE_REPNOTIFY(UDAIUltraSkyAttributeSet, Precipitation, OldValue); }
    UFUNCTION()
    void OnRep_Cloudiness(const FGameplayAttributeData &OldValue) { GAMEPLAYATTRIBUTE_REPNOTIFY(UDAIUltraSkyAttributeSet, Cloudiness, OldValue); }
};
