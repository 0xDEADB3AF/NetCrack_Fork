#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CombatHeliRpidWeaponComponent_WingMiso

#include "Basic.hpp"

#include "BP_CombatHeliRpidWeaponComponent_WingMiso_classes.hpp"
#include "BP_CombatHeliRpidWeaponComponent_WingMiso_parameters.hpp"


namespace SDK
{

// Function BP_CombatHeliRpidWeaponComponent_WingMiso.BP_CombatHeliRpidWeaponComponent_WingMiso_C.GetMuzzleTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       MzlTF                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CombatHeliRpidWeaponComponent_WingMiso_C::GetMuzzleTransform(struct FTransform* MzlTF)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatHeliRpidWeaponComponent_WingMiso_C", "GetMuzzleTransform");

	Params::BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MzlTF != nullptr)
		*MzlTF = std::move(Parms.MzlTF);
}

}
