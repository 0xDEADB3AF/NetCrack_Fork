#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatMeleeState_AttackForNearSwing

#include "Basic.hpp"

#include "BP_AINPC_CombatMeleeState_AttackForNearSwing_classes.hpp"
#include "BP_AINPC_CombatMeleeState_AttackForNearSwing_parameters.hpp"


namespace SDK
{

// Function BP_AINPC_CombatMeleeState_AttackForNearSwing.BP_AINPC_CombatMeleeState_AttackForNearSwing_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatMeleeState_AttackForNearSwing_C::ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_AttackForNearSwing_C", "ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing");

	Params::BP_AINPC_CombatMeleeState_AttackForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AINPC_CombatMeleeState_AttackForNearSwing.BP_AINPC_CombatMeleeState_AttackForNearSwing_C.StateEnter
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatMeleeState_AttackForNearSwing_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_AttackForNearSwing_C", "StateEnter");

	UObject::ProcessEvent(Func, nullptr);
}

}

