#include "DAIUltraSkyFootprintApplierComponent.h"
#include "DAIUltraSkyFootprintMask.h"
#include "EngineUtils.h"
#include "Components/MeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

UDAIUltraSkyFootprintApplierComponent::UDAIUltraSkyFootprintApplierComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UDAIUltraSkyFootprintApplierComponent::BeginPlay()
{
    Super::BeginPlay();
    if (!FootprintMask && bAutoFindNearestMask)
    {
        FindNearestMask();
    }
    ApplyNow();
    TimeToRefresh = RefreshInterval;
}

void UDAIUltraSkyFootprintApplierComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    TimeToRefresh -= DeltaTime;
    if (TimeToRefresh <= 0.0f)
    {
        if (!FootprintMask && bAutoFindNearestMask)
        {
            FindNearestMask();
        }
        ApplyNow();
        TimeToRefresh = RefreshInterval;
    }
}

void UDAIUltraSkyFootprintApplierComponent::FindNearestMask()
{
    UWorld *World = GetWorld();
    if (!World)
        return;
    AActor *Owner = GetOwner();
    if (!Owner)
        return;
    ADAIUltraSkyFootprintMask *Best = nullptr;
    float BestDistSqr = TNumericLimits<float>::Max();
    const FVector Pos = Owner->GetActorLocation();
    for (TActorIterator<ADAIUltraSkyFootprintMask> It(World); It; ++It)
    {
        ADAIUltraSkyFootprintMask *Mask = *It;
        if (!IsValid(Mask) || !Mask->GetMaskRenderTarget())
            continue;
        const bool bContains = Mask->ContainsPoint(Pos);
        const float DistSqr = FVector::DistSquared(Pos, Mask->GetActorLocation());
        if (bContains && DistSqr < BestDistSqr)
        {
            Best = Mask;
            BestDistSqr = DistSqr;
        }
        else if (!Best && DistSqr < BestDistSqr) // fallback to nearest even if not containing
        {
            Best = Mask;
            BestDistSqr = DistSqr;
        }
    }
    FootprintMask = Best;
}

void UDAIUltraSkyFootprintApplierComponent::ForEachMaterial(TFunctionRef<void(UMaterialInstanceDynamic *)> Fn)
{
    if (AActor *Owner = GetOwner())
    {
        TArray<UMeshComponent *> Meshes;
        Owner->GetComponents(Meshes);
        for (UMeshComponent *Mesh : Meshes)
        {
            if (!Mesh)
                continue;
            const int32 Count = Mesh->GetNumMaterials();
            for (int32 i = 0; i < Count; ++i)
            {
                UMaterialInstanceDynamic *MID = Cast<UMaterialInstanceDynamic>(Mesh->GetMaterial(i));
                if (!MID && bCreateMID)
                {
                    MID = Mesh->CreateDynamicMaterialInstance(i);
                }
                if (MID)
                {
                    Fn(MID);
                }
            }
        }
    }
}

void UDAIUltraSkyFootprintApplierComponent::ApplyNow()
{
    if (!IsValid(FootprintMask) || !FootprintMask->GetMaskRenderTarget() || TextureParamName.IsNone())
    {
        return;
    }
    UTextureRenderTarget2D *RT = FootprintMask->GetMaskRenderTarget();
    ForEachMaterial([&](UMaterialInstanceDynamic *MID)
                    { MID->SetTextureParameterValue(TextureParamName, (UTexture *)RT); });
}
