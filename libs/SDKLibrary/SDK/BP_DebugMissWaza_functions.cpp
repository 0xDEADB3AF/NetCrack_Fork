#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugMissWaza

#include "Basic.hpp"

#include "BP_DebugMissWaza_classes.hpp"
#include "BP_DebugMissWaza_parameters.hpp"


namespace SDK
{

// Function BP_DebugMissWaza.BP_DebugMissWaza_C.ExecuteUbergraph_BP_DebugMissWaza
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugMissWaza_C::ExecuteUbergraph_BP_DebugMissWaza(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugMissWaza_C", "ExecuteUbergraph_BP_DebugMissWaza");

	Params::BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugMissWaza.BP_DebugMissWaza_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_DebugMissWaza_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugMissWaza_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugMissWaza.BP_DebugMissWaza_C.SetTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_DebugMissWaza_C::SetTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugMissWaza_C", "SetTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugMissWaza.BP_DebugMissWaza_C.Shoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_DebugMissWaza_C::Shoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugMissWaza_C", "Shoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugMissWaza.BP_DebugMissWaza_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugMissWaza_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugMissWaza_C", "TickAction");

	Params::BP_DebugMissWaza_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

