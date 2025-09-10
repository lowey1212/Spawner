#pragma once
#include "CoreMinimal.h"
#include "EngineUtils.h"
#include "Misc/FileHelper.h"
#include "Engine/GameInstance.h"
#include "SignificanceUtility.h"

class UWorld;

template<typename T> struct TExpMovingAverage
{
    T Value{}; double Alpha{0.1}; bool bHasSample{false};
    void Reset() { Value=T{}; bHasSample=false; }
    void Add(T Sample){ Value = bHasSample ? (T)((1-Alpha)*Value + Alpha*Sample) : (bHasSample=true, Sample); }
};

template<typename T> struct TRingBuffer
{
    TArray<T> Data; int32 Head{0}, Size{0};
    explicit TRingBuffer(int32 Capacity=128){ Data.SetNumZeroed(Capacity); }
    void Push(const T& V){ if(Data.Num()==0) return; Data[Head]=V; Head=(Head+1)%Data.Num(); Size=FMath::Min(Size+1, Data.Num()); }
    template<class F> void ForEach(F&& Fn) const { for(int32 i=0;i<Size;i++){ int32 idx=(Head-1-i+Data.Num())%Data.Num(); Fn(Data[idx]); } }
};

template<typename T>
T* GetSubsystem(UObject* WorldContextObject)
{
    if (!WorldContextObject)
    {
        return nullptr;
    }
    if (UWorld* World = WorldContextObject->GetWorld())
    {
        if (UGameInstance* GI = World->GetGameInstance())
        {
            return GI->GetSubsystem<T>();
        }
    }
    return nullptr;
}
