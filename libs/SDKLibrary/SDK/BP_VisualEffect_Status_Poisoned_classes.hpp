#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_Status_Poisoned

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisualEffect_Status_Poisoned.BP_VisualEffect_Status_Poisoned_C
// 0x0010 (0x0080 - 0x0070)
class UBP_VisualEffect_Status_Poisoned_C final : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VisualEffect_Status_Poisoned(int32 EntryPoint);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_Status_Poisoned_C">();
	}
	static class UBP_VisualEffect_Status_Poisoned_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_Status_Poisoned_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_Status_Poisoned_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_Status_Poisoned_C");
static_assert(sizeof(UBP_VisualEffect_Status_Poisoned_C) == 0x000080, "Wrong size on UBP_VisualEffect_Status_Poisoned_C");
static_assert(offsetof(UBP_VisualEffect_Status_Poisoned_C, UberGraphFrame) == 0x000070, "Member 'UBP_VisualEffect_Status_Poisoned_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Status_Poisoned_C, Niagara) == 0x000078, "Member 'UBP_VisualEffect_Status_Poisoned_C::Niagara' has a wrong offset!");

}
