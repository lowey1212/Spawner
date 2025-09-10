#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DAIUltraSkyFootprintApplierComponent.generated.h"

class ADAIUltraSkyFootprintMask;

UCLASS(ClassGroup = (Rendering), meta = (BlueprintSpawnableComponent))
class DAI_ULTRASKY_API UDAIUltraSkyFootprintApplierComponent : public UActorComponent
{
    GENERATED_BODY()
public:
    UDAIUltraSkyFootprintApplierComponent();

    // Parameter name in your materials to receive the mask texture
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Footprints", meta = (ToolTip = "Material parameter name that will receive the footprint mask render target."))
    FName TextureParamName = FName("FootprintMaskTex");

    // Footprint Mask to use. If not set and AutoFindNearestMask is true, the component will find one in the world.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Footprints", meta = (ToolTip = "Explicit footprint mask actor to sample. If unset and AutoFind enabled a nearby one is searched each refresh."))
    TObjectPtr<ADAIUltraSkyFootprintMask> FootprintMask;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Footprints", meta = (ToolTip = "If true and no FootprintMask assigned the component finds nearest mask actor periodically."))
    bool bAutoFindNearestMask = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Footprints", meta = (ToolTip = "If true create per-mesh MID so parameter assignment is isolated."))
    bool bCreateMID = true;

    // Re-apply on an interval to catch dynamic material rebinding or mask swaps
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Footprints", meta = (ClampMin = "0.1", ToolTip = "Seconds between automatic re-apply (rebind) passes."))
    float RefreshInterval = 1.0f;

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Footprints")
    void ApplyNow();

protected:
    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

private:
    float TimeToRefresh = 0.0f;
    void FindNearestMask();
    void ForEachMaterial(TFunctionRef<void(class UMaterialInstanceDynamic *)> Fn);
};
