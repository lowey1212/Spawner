#include "DAIUltraSkyTornado.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"

ADAIUltraSkyTornado::ADAIUltraSkyTornado()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ADAIUltraSkyTornado::BeginPlay()
{
    Super::BeginPlay();
    if (bAutoStart)
    {
        StartTornado();
    }
}

void ADAIUltraSkyTornado::StartTornado()
{
    if (!TornadoSystem)
    {
        return;
    }
    if (!TornadoComponent)
    {
        TornadoComponent = NewObject<UNiagaraComponent>(this, TEXT("TornadoNiagara"));
        TornadoComponent->SetupAttachment(RootComponent);
        TornadoComponent->RegisterComponent();
    }
    TornadoComponent->SetAsset(TornadoSystem);
    TornadoComponent->SetWorldScale3D(FVector(TornadoScale));
    TornadoComponent->Activate(true);
}

void ADAIUltraSkyTornado::StopTornado()
{
    if (TornadoComponent)
    {
        TornadoComponent->Deactivate();
    }
}

void ADAIUltraSkyTornado::SetTargetLocation(const FVector& NewTarget)
{
    TargetLocation = NewTarget;
}

void ADAIUltraSkyTornado::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    if (MoveSpeed > 0.0f)
    {
        const FVector Current = GetActorLocation();
        const FVector To = TargetLocation - Current;
        const float Dist = To.Size();
        if (Dist > KINDA_SMALL_NUMBER)
        {
            const FVector Dir = To / Dist;
            const float Step = FMath::Min(Dist, MoveSpeed * DeltaSeconds);
            SetActorLocation(Current + Dir * Step);
            SetActorRotation(Dir.Rotation());
        }
    }
}

