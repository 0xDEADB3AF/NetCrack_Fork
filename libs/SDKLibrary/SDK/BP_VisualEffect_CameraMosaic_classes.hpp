#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_CameraMosaic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_VisualEffect_CameraBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisualEffect_CameraMosaic.BP_VisualEffect_CameraMosaic_C
// 0x0018 (0x00C0 - 0x00A8)
class UBP_VisualEffect_CameraMosaic_C final : public UBP_VisualEffect_CameraBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_VisualEffect_CameraMosaic_C;     // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Weight_Value;                                      // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   KeyName;                                           // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CalcScreenBounds(const struct FVector& Origin, const struct FVector& Box_Extents, class APlayerController* Player, struct FVector4* Rect);
	void ExecuteUbergraph_BP_VisualEffect_CameraMosaic(int32 EntryPoint);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void Update_Mosaic(double Param_Weight_Value);
	void UpdateEffectValue(double WeightValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_CameraMosaic_C">();
	}
	static class UBP_VisualEffect_CameraMosaic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_CameraMosaic_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_CameraMosaic_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_CameraMosaic_C");
static_assert(sizeof(UBP_VisualEffect_CameraMosaic_C) == 0x0000C0, "Wrong size on UBP_VisualEffect_CameraMosaic_C");
static_assert(offsetof(UBP_VisualEffect_CameraMosaic_C, UberGraphFrame_BP_VisualEffect_CameraMosaic_C) == 0x0000A8, "Member 'UBP_VisualEffect_CameraMosaic_C::UberGraphFrame_BP_VisualEffect_CameraMosaic_C' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_CameraMosaic_C, Weight_Value) == 0x0000B0, "Member 'UBP_VisualEffect_CameraMosaic_C::Weight_Value' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_CameraMosaic_C, KeyName) == 0x0000B8, "Member 'UBP_VisualEffect_CameraMosaic_C::KeyName' has a wrong offset!");

}

