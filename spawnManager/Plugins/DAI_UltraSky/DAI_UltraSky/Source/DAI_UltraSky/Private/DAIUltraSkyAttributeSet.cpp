#include "DAIUltraSkyAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UDAIUltraSkyAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME_CONDITION_NOTIFY(UDAIUltraSkyAttributeSet, TemperatureC, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UDAIUltraSkyAttributeSet, Humidity,     COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UDAIUltraSkyAttributeSet, WindSpeedKph, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UDAIUltraSkyAttributeSet, Precipitation,COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UDAIUltraSkyAttributeSet, Cloudiness,   COND_None, REPNOTIFY_Always);
}

