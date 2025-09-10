#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "DAIUltraSkyMaterialLibrary.generated.h"

class ADAIUltraSkyFootprintMask;
class UTextureRenderTarget2D;
class AActor;
class UMeshComponent;

UCLASS()
class DAI_ULTRASKY_API UDAIUltraSkyMaterialLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure, Category="UltraSky|Materials")
    static UTextureRenderTarget2D* GetFootprintMaskRT(ADAIUltraSkyFootprintMask* Mask);

    UFUNCTION(BlueprintCallable, Category="UltraSky|Materials")
    static void ApplyFootprintMaskToActorMaterials(AActor* Target, FName TextureParamName, ADAIUltraSkyFootprintMask* Mask, bool bCreateMID = true);

    UFUNCTION(BlueprintCallable, Category="UltraSky|Materials")
    static void SetScalarOnActorMaterials(AActor* Target, FName ParamName, float Value, bool bCreateMID = true);
};

