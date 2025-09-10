#pragma once
#include "CoreMinimal.h"

struct FDaiVersion { static constexpr int32 Save=1; };

template<typename T> inline void SerializeArray(FArchive& Ar, TArray<T>& Arr)
{
    int32 N = Arr.Num(); Ar << N; if (Ar.IsLoading()) Arr.SetNum(N); for (int32 i=0;i<N;i++) Ar << Arr[i];
}
