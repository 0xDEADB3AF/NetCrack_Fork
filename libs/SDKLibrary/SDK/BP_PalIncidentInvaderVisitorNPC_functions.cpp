#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalIncidentInvaderVisitorNPC

#include "Basic.hpp"

#include "BP_PalIncidentInvaderVisitorNPC_classes.hpp"
#include "BP_PalIncidentInvaderVisitorNPC_parameters.hpp"


namespace SDK
{

// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.EndProc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalIncidentInvaderVisitorNPC_C::EndProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "EndProc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.Get Character Location Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalCharacterLocationType               CharacterLocationType                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderVisitorNPC_C::Get_Character_Location_Type(EPalCharacterLocationType* CharacterLocationType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "Get Character Location Type");

	Params::BP_PalIncidentInvaderVisitorNPC_C_Get_Character_Location_Type Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterLocationType != nullptr)
		*CharacterLocationType = Parms.CharacterLocationType;
}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.Get Chosen Row Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalVisitorNPCDatabaseRow        ChosenRowData                                          (Parm, OutParm)

void UBP_PalIncidentInvaderVisitorNPC_C::Get_Chosen_Row_Data(struct FPalVisitorNPCDatabaseRow* ChosenRowData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "Get Chosen Row Data");

	Params::BP_PalIncidentInvaderVisitorNPC_C_Get_Chosen_Row_Data Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ChosenRowData != nullptr)
		*ChosenRowData = std::move(Parms.ChosenRowData);
}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.GetInvaderStartPoint
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PalIncidentInvaderVisitorNPC_C::GetInvaderStartPoint(struct FVector* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "GetInvaderStartPoint");

	Params::BP_PalIncidentInvaderVisitorNPC_C_GetInvaderStartPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	return Parms.ReturnValue;
}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.IsSquad
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderVisitorNPC_C::IsSquad(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "IsSquad");

	Params::BP_PalIncidentInvaderVisitorNPC_C_IsSquad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.OnAllCharacterSpawned
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APalAIController*>         Param_MemberController                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PalIncidentInvaderVisitorNPC_C::OnAllCharacterSpawned(TArray<class APalAIController*>& Param_MemberController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "OnAllCharacterSpawned");

	Params::BP_PalIncidentInvaderVisitorNPC_C_OnAllCharacterSpawned Parms{};

	Parms.Param_MemberController = std::move(Param_MemberController);

	UObject::ProcessEvent(Func, &Parms);

	Param_MemberController = std::move(Parms.Param_MemberController);
}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.StartProc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalIncidentInvaderVisitorNPC_C::StartProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "StartProc");

	UObject::ProcessEvent(Func, nullptr);
}

}
