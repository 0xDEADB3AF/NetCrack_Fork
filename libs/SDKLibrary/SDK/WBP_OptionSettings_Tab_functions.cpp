#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_Tab

#include "Basic.hpp"

#include "WBP_OptionSettings_Tab_classes.hpp"
#include "WBP_OptionSettings_Tab_parameters.hpp"


namespace SDK
{

// Function WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C.SwitchTabTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_Tab_C::SwitchTabTo(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_Tab_C", "SwitchTabTo");

	Params::WBP_OptionSettings_Tab_C_SwitchTabTo Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C.SwitchTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Next                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_Tab_C::SwitchTab(bool Next)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_Tab_C", "SwitchTab");

	Params::WBP_OptionSettings_Tab_C_SwitchTab Parms{};

	Parms.Next = Next;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C.SetupTabs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle>      Names                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_OptionSettings_Tab_C::SetupTabs(const TArray<struct FDataTableRowHandle>& Names)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_Tab_C", "SetupTabs");

	Params::WBP_OptionSettings_Tab_C_SetupTabs Parms{};

	Parms.Names = std::move(Names);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_OptionSettings_C*            SettingPanel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_Tab_C::Setup(class UWBP_OptionSettings_C* SettingPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_Tab_C", "Setup");

	Params::WBP_OptionSettings_Tab_C_Setup Parms{};

	Parms.SettingPanel = SettingPanel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C.ExecuteUbergraph_WBP_OptionSettings_Tab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_Tab_C::ExecuteUbergraph_WBP_OptionSettings_Tab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_Tab_C", "ExecuteUbergraph_WBP_OptionSettings_Tab");

	Params::WBP_OptionSettings_Tab_C_ExecuteUbergraph_WBP_OptionSettings_Tab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
