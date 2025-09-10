#include "DAIUltraSkyMaterialLibrary.h"
#include "DAIUltraSkyFootprintMask.h"
#include "Engine/TextureRenderTarget2D.h"
#include "GameFramework/Actor.h"
#include "Components/MeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

UTextureRenderTarget2D* UDAIUltraSkyMaterialLibrary::DAI_GetFootprintMaskRT(ADAIUltraSkyFootprintMask* Mask)
{
    return Mask ? Mask->MaskRT : nullptr;
}

static void DAI_UltraSky_ForEachMaterial(AActor* Target, TFunctionRef<void(UMeshComponent*, int32, UMaterialInstanceDynamic*)> Fn, bool bCreateMID)
{
    if (!Target) return;
    TArray<UMeshComponent*> Meshes;
    Target->GetComponents<UMeshComponent>(Meshes);
    for (UMeshComponent* Mesh : Meshes)
    {
        if (!Mesh) continue;
        const int32 MatCount = Mesh->GetNumMaterials();
        for (int32 Index = 0; Index < MatCount; ++Index)
        {
            UMaterialInstanceDynamic* MID = Cast<UMaterialInstanceDynamic>(Mesh->GetMaterial(Index));
            if (!MID && bCreateMID)
            {
                MID = Mesh->CreateDynamicMaterialInstance(Index);
            }
            if (MID)
            {
                Fn(Mesh, Index, MID);
            }
        }
    }
}

void UDAIUltraSkyMaterialLibrary::DAI_ApplyFootprintMaskToActorMaterials(AActor* Target, FName TextureParamName, ADAIUltraSkyFootprintMask* Mask, bool bCreateMID)
{
    if (!Target || !Mask || !Mask->MaskRT || TextureParamName.IsNone())
    {
        return;
    }
    DAI_UltraSky_ForEachMaterial(Target, [&](UMeshComponent*, int32, UMaterialInstanceDynamic* MID)
    {
        MID->SetTextureParameterValue(TextureParamName, Mask->MaskRT);
    }, bCreateMID);
}

void UDAIUltraSkyMaterialLibrary::DAI_SetScalarOnActorMaterials(AActor* Target, FName ParamName, float Value, bool bCreateMID)
{
    if (!Target || ParamName.IsNone())
    {
        return;
    }
    DAI_UltraSky_ForEachMaterial(Target, [&](UMeshComponent*, int32, UMaterialInstanceDynamic* MID)
    {
        MID->SetScalarParameterValue(ParamName, Value);
    }, bCreateMID);
}

