#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_PalEffectFadeIn

#include "Basic.hpp"

#include "BP_VisualEffect_PalEffectFadeIn_classes.hpp"
#include "BP_VisualEffect_PalEffectFadeIn_parameters.hpp"


namespace SDK
{

// Function BP_VisualEffect_PalEffectFadeIn.BP_VisualEffect_PalEffectFadeIn_C.ExecuteUbergraph_BP_VisualEffect_PalEffectFadeIn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_PalEffectFadeIn_C::ExecuteUbergraph_BP_VisualEffect_PalEffectFadeIn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_PalEffectFadeIn_C", "ExecuteUbergraph_BP_VisualEffect_PalEffectFadeIn");

	Params::BP_VisualEffect_PalEffectFadeIn_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeIn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_PalEffectFadeIn.BP_VisualEffect_PalEffectFadeIn_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_PalEffectFadeIn_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_PalEffectFadeIn_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_PalEffectFadeIn.BP_VisualEffect_PalEffectFadeIn_C.TickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_PalEffectFadeIn_C::TickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_PalEffectFadeIn_C", "TickVisualEffect");

	Params::BP_VisualEffect_PalEffectFadeIn_C_TickVisualEffect Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
