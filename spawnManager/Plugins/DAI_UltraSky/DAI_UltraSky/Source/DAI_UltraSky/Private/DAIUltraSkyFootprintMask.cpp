#include "DAIUltraSkyFootprintMask.h"
#include "Components/BoxComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "DAIUltraSkyActor.h"

ADAIUltraSkyFootprintMask::ADAIUltraSkyFootprintMask()
{
    PrimaryActorTick.bCanEverTick = true;
    Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
    Bounds->SetBoxExtent(FVector(5000.f, 5000.f, 100.f));
    Bounds->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    RootComponent = Bounds;
}

void ADAIUltraSkyFootprintMask::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);
    if (!MaskRT)
    {
        InitializeRenderTarget();
    }
}

void ADAIUltraSkyFootprintMask::BeginPlay()
{
    Super::BeginPlay();
    if (!MaskRT)
    {
        InitializeRenderTarget();
    }
    EnsureMIDs();
    if (bClearOnBeginPlay && MaskRT)
    {
        UKismetRenderingLibrary::ClearRenderTarget2D(this, MaskRT, FLinearColor::Black);
    }
    BindUltraSky();
}

void ADAIUltraSkyFootprintMask::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    if (bEnableAutoFade && FadeMaterial && MaskRT)
    {
        ApplyFade(DeltaSeconds);
    }
}

void ADAIUltraSkyFootprintMask::InitializeRenderTarget()
{
    if (!MaskRT)
    {
        MaskRT = UKismetRenderingLibrary::CreateRenderTarget2D(this, RTResolution, RTResolution, RTF_R8, FLinearColor::Black);
        if (MaskRT)
        {
            MaskRT->bAutoGenerateMips = false;
            MaskRT->UpdateResourceImmediate(true);
        }
    }
}

void ADAIUltraSkyFootprintMask::ClearMask(const FLinearColor &ClearColor)
{
    if (MaskRT)
    {
        UKismetRenderingLibrary::ClearRenderTarget2D(this, MaskRT, ClearColor);
    }
}

bool ADAIUltraSkyFootprintMask::WorldToUV(const FVector &WorldLocation, FVector2D &OutUV) const
{
    const FTransform &T = Bounds->GetComponentTransform();
    const FVector Local = T.InverseTransformPosition(WorldLocation);
    const FVector Ext = Bounds->GetUnscaledBoxExtent();
    if (Ext.X <= KINDA_SMALL_NUMBER || Ext.Y <= KINDA_SMALL_NUMBER)
    {
        return false;
    }
    const float U = (Local.X + Ext.X) / (2.0f * Ext.X);
    const float V = (Local.Y + Ext.Y) / (2.0f * Ext.Y);
    OutUV = FVector2D(FMath::Clamp(U, 0.0f, 1.0f), FMath::Clamp(V, 0.0f, 1.0f));
    return true;
}

void ADAIUltraSkyFootprintMask::EnsureMIDs()
{
    if (StampMaterial && !StampMID)
    {
        StampMID = UMaterialInstanceDynamic::Create(StampMaterial, this);
    }
    if (FadeMaterial && !FadeMID)
    {
        FadeMID = UMaterialInstanceDynamic::Create(FadeMaterial, this);
    }
}

void ADAIUltraSkyFootprintMask::ApplyFade(float DeltaSeconds)
{
    EnsureMIDs();
    if (!FadeMID || !MaskRT)
    {
        return;
    }
    FadeMID->SetScalarParameterValue(Param_FadeAmount, FMath::Clamp(FadePerSecond * DeltaSeconds, 0.0f, 1.0f));
    FadeMID->SetTextureParameterValue(Param_PrevMask, MaskRT);
    UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, MaskRT, FadeMID);
}

void ADAIUltraSkyFootprintMask::StampAtWorldLocation(FVector WorldLocation, float Strength)
{
    if (!MaskRT || !StampMaterial)
    {
        return;
    }
    EnsureMIDs();
    if (!StampMID)
    {
        return;
    }

    FVector2D UV;
    if (!WorldToUV(WorldLocation, UV))
    {
        return;
    }

    // Set parameters and draw full-screen material which composites PrevMask and new circle
    StampMID->SetTextureParameterValue(Param_PrevMask, MaskRT);
    StampMID->SetVectorParameterValue(Param_CenterUV, FLinearColor(UV.X, UV.Y, 0.0f, 0.0f));
    StampMID->SetScalarParameterValue(Param_Radius, StampRadiusWorld / (2.0f * Bounds->GetUnscaledBoxExtent().X));
    StampMID->SetScalarParameterValue(Param_Strength, FMath::Clamp(Strength, 0.0f, 1.0f));
    StampMID->SetScalarParameterValue(Param_Falloff, FMath::Clamp(StampFalloff, 0.0f, 1.0f));

    UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, MaskRT, StampMID);
}

void ADAIUltraSkyFootprintMask::BindUltraSky()
{
    if (UltraSky)
    {
        UltraSky->OnFootprintStamped.AddDynamic(this, &ADAIUltraSkyFootprintMask::StampAtWorldLocation);
    }
}

bool ADAIUltraSkyFootprintMask::ContainsPoint(const FVector &WorldLocation) const
{
    const FTransform &T = Bounds->GetComponentTransform();
    const FVector Local = T.InverseTransformPosition(WorldLocation);
    const FVector Ext = Bounds->GetUnscaledBoxExtent();
    return FMath::Abs(Local.X) <= Ext.X && FMath::Abs(Local.Y) <= Ext.Y;
}
