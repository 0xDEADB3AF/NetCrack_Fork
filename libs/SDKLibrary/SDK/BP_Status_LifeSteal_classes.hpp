#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_LifeSteal

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Status_LifeSteal.BP_Status_LifeSteal_C
// 0x0028 (0x0070 - 0x0048)
class UBP_Status_LifeSteal_C final : public UPalStatusLifeSteal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 OutText;                                           // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                        EffectIntervalTimeSec;                             // 0x0060(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SpawnEffectWaitTimer;                              // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Status_LifeSteal(int32 EntryPoint);
	void OnBeginStatus();
	void OnEndStatus();
	void OnLifeSteal(int32 Damage);
	void TickStatus(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_LifeSteal_C">();
	}
	static class UBP_Status_LifeSteal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_LifeSteal_C>();
	}
};
static_assert(alignof(UBP_Status_LifeSteal_C) == 0x000008, "Wrong alignment on UBP_Status_LifeSteal_C");
static_assert(sizeof(UBP_Status_LifeSteal_C) == 0x000070, "Wrong size on UBP_Status_LifeSteal_C");
static_assert(offsetof(UBP_Status_LifeSteal_C, UberGraphFrame) == 0x000048, "Member 'UBP_Status_LifeSteal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Status_LifeSteal_C, OutText) == 0x000050, "Member 'UBP_Status_LifeSteal_C::OutText' has a wrong offset!");
static_assert(offsetof(UBP_Status_LifeSteal_C, EffectIntervalTimeSec) == 0x000060, "Member 'UBP_Status_LifeSteal_C::EffectIntervalTimeSec' has a wrong offset!");
static_assert(offsetof(UBP_Status_LifeSteal_C, SpawnEffectWaitTimer) == 0x000068, "Member 'UBP_Status_LifeSteal_C::SpawnEffectWaitTimer' has a wrong offset!");

}
