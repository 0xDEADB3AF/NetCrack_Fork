#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PropMeat

#include "Basic.hpp"

#include "BP_Prop_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PropMeat.BP_PropMeat_C
// 0x0000 (0x02D8 - 0x02D8)
class ABP_PropMeat_C final : public ABP_Prop_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PropMeat_C">();
	}
	static class ABP_PropMeat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PropMeat_C>();
	}
};
static_assert(alignof(ABP_PropMeat_C) == 0x000008, "Wrong alignment on ABP_PropMeat_C");
static_assert(sizeof(ABP_PropMeat_C) == 0x0002D8, "Wrong size on ABP_PropMeat_C");

}
