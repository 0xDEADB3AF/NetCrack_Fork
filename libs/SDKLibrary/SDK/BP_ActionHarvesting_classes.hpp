#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionHarvesting

#include "Basic.hpp"

#include "BP_ActionInteractBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionHarvesting.BP_ActionHarvesting_C
// 0x0000 (0x0180 - 0x0180)
class UBP_ActionHarvesting_C final : public UBP_ActionInteractBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionHarvesting_C">();
	}
	static class UBP_ActionHarvesting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionHarvesting_C>();
	}
};
static_assert(alignof(UBP_ActionHarvesting_C) == 0x000010, "Wrong alignment on UBP_ActionHarvesting_C");
static_assert(sizeof(UBP_ActionHarvesting_C) == 0x000180, "Wrong size on UBP_ActionHarvesting_C");

}

