#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DAIUltraSkyFootprintMask.generated.h"

class UTextureRenderTarget2D;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UBoxComponent;
class ADAIUltraSkyActor;

UCLASS(BlueprintType)
class DAI_ULTRASKY_API ADAIUltraSkyFootprintMask : public AActor
{
    GENERATED_BODY()
public:
    ADAIUltraSkyFootprintMask();

    // Area covered by the mask in world space (XY). Z is ignored.
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "World space XY bounds defining where footprints can accumulate (Z ignored)."))
    TObjectPtr<UBoxComponent> Bounds;

    // Render target where mask is accumulated (R8 or RGBA8). Black=none, white=full footprint
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "Render target storing accumulated footprint intensity (black none -> white full)."))
    TObjectPtr<UTextureRenderTarget2D> MaskRT;

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|FootprintMask")
    UTextureRenderTarget2D *GetMaskRenderTarget() const { return MaskRT; }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ClampMin = "64", ClampMax = "4096", ToolTip = "Resolution of MaskRT (higher = sharper but more cost)."))
    int32 RTResolution = 1024;

    // Ultra Sky actor to bind to for footprint events
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "UltraSky actor used to receive footprint placement events."))
    TObjectPtr<ADAIUltraSkyActor> UltraSky;

    // Stamp appearance in world units and blend
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ClampMin = "1.0", ToolTip = "Radius of a single footprint stamp in world units."))
    float StampRadiusWorld = 25.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ClampMin = "0.0", ClampMax = "1.0", ToolTip = "Soft edge falloff (0 hard edge, 1 very soft)."))
    float StampFalloff = 0.5f;

    // Materials: the stamp material should sample PrevMask, draw a circle at CenterUV/Radius and output max(PrevMask, Circle*Strength)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "Material used each stamp pass to composite new footprint into MaskRT."))
    TObjectPtr<UMaterialInterface> StampMaterial;

    // Optional fade material: multiplies previous frame by (1 - FadeAmount)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "Optional material applied each tick to fade existing footprints."))
    TObjectPtr<UMaterialInterface> FadeMaterial;

    // Parameter names expected on the materials
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "Parameter name on stamp/fade materials for previous frame mask texture."))
    FName Param_PrevMask = FName("PrevMask");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "Parameter name for stamp center UV (0-1)."))
    FName Param_CenterUV = FName("CenterUV");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "Parameter name for stamp radius in UV units."))
    FName Param_Radius = FName("Radius");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "Parameter name for stamp intensity (multiplier)."))
    FName Param_Strength = FName("Strength");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "Parameter name for stamp falloff curve control."))
    FName Param_Falloff = FName("Falloff");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "Parameter name for per-tick fade amount scalar."))
    FName Param_FadeAmount = FName("FadeAmount");

    // Auto fade settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "Enable continuous fade of older footprints each tick."))
    bool bEnableAutoFade = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ClampMin = "0.0", ToolTip = "Amount (0-1) of existing mask removed per second when auto fade enabled."))
    float FadePerSecond = 0.02f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|FootprintMask", meta = (ToolTip = "If true the render target is cleared at BeginPlay."))
    bool bClearOnBeginPlay = true;

    UFUNCTION(BlueprintCallable, Category = "DAI_UltraSky|FootprintMask")
    void InitializeRenderTarget();

    UFUNCTION(BlueprintCallable, Category = "DAI_UltraSky|FootprintMask")
    void ClearMask(const FLinearColor &ClearColor = FLinearColor::Black);

    UFUNCTION(BlueprintCallable, Category = "DAI_UltraSky|FootprintMask")
    void StampAtWorldLocation(FVector WorldLocation, float Strength = 1.0f);

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|FootprintMask")
    bool ContainsPoint(const FVector &WorldLocation) const;

protected:
    virtual void OnConstruction(const FTransform &Transform) override;
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

private:
    UPROPERTY(Transient, meta = (ToolTip = "Runtime dynamic instance of StampMaterial."))
    TObjectPtr<UMaterialInstanceDynamic> StampMID;

    UPROPERTY(Transient, meta = (ToolTip = "Runtime dynamic instance of FadeMaterial."))
    TObjectPtr<UMaterialInstanceDynamic> FadeMID;

    bool WorldToUV(const FVector &WorldLocation, FVector2D &OutUV) const;
    void EnsureMIDs();
    void ApplyFade(float DeltaSeconds);
    void BindUltraSky();
};
