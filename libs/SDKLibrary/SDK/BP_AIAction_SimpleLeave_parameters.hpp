#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_SimpleLeave

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AIAction_SimpleLeave.BP_AIAction_SimpleLeave_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_SimpleLeave_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_SimpleLeave_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_SimpleLeave_C_ActionTick");
static_assert(sizeof(BP_AIAction_SimpleLeave_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_SimpleLeave_C_ActionTick");
static_assert(offsetof(BP_AIAction_SimpleLeave_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_SimpleLeave_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_SimpleLeave_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_SimpleLeave_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_SimpleLeave.BP_AIAction_SimpleLeave_C.ExecuteUbergraph_BP_AIAction_SimpleLeave
// 0x0028 (0x0028 - 0x0000)
struct BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave) == 0x000008, "Wrong alignment on BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave");
static_assert(sizeof(BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave) == 0x000028, "Wrong size on BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave");
static_assert(offsetof(BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave, EntryPoint) == 0x000000, "Member 'BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave, CallFunc_IsFalling_ReturnValue) == 0x000020, "Member 'BP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave::CallFunc_IsFalling_ReturnValue' has a wrong offset!");

}
