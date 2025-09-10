#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "DAIUltraSkyMaterialLibrary.generated.h"

class ADAIUltraSkyFootprintMask;
class UTextureRenderTarget2D;
class AActor;
class UMeshComponent;

UCLASS(BlueprintType)
class DAI_ULTRASKY_API UDAIUltraSkyMaterialLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure, Category="DAI_UltraSky|Materials")
    static UTextureRenderTarget2D* DAI_GetFootprintMaskRT(ADAIUltraSkyFootprintMask* Mask);

    UFUNCTION(BlueprintCallable, Category="DAI_UltraSky|Materials")
    static void DAI_ApplyFootprintMaskToActorMaterials(AActor* Target, FName TextureParamName, ADAIUltraSkyFootprintMask* Mask, bool bCreateMID = true);

    UFUNCTION(BlueprintCallable, Category="DAI_UltraSky|Materials")
    static void DAI_SetScalarOnActorMaterials(AActor* Target, FName ParamName, float Value, bool bCreateMID = true);
};

