#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AxeBase

#include "Basic.hpp"

#include "BP_MeleeWeaponBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AxeBase.BP_AxeBase_C
// 0x0000 (0x0580 - 0x0580)
class ABP_AxeBase_C final : public ABP_MeleeWeaponBase_C
{
public:
	struct FTransform GetLeftHandTransform() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AxeBase_C">();
	}
	static class ABP_AxeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AxeBase_C>();
	}
};
static_assert(alignof(ABP_AxeBase_C) == 0x000008, "Wrong alignment on ABP_AxeBase_C");
static_assert(sizeof(ABP_AxeBase_C) == 0x000580, "Wrong size on ABP_AxeBase_C");

}
