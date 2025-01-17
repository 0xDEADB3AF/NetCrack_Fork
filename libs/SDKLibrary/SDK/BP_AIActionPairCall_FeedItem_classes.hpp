#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionPairCall_FeedItem

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "BP_AIActionPairCallBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIActionPairCall_FeedItem.BP_AIActionPairCall_FeedItem_C
// 0x0018 (0x0168 - 0x0150)
class UBP_AIActionPairCall_FeedItem_C final : public UBP_AIActionPairCallBase_C
{
public:
	struct FPalItemSlotId                         FeedItemSlotId;                                    // 0x0150(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         FeedItemNum;                                       // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CreatePairBehaviorActionDynamicParameter(struct FActionDynamicParameter* Param_DynamicParameter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionPairCall_FeedItem_C">();
	}
	static class UBP_AIActionPairCall_FeedItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionPairCall_FeedItem_C>();
	}
};
static_assert(alignof(UBP_AIActionPairCall_FeedItem_C) == 0x000008, "Wrong alignment on UBP_AIActionPairCall_FeedItem_C");
static_assert(sizeof(UBP_AIActionPairCall_FeedItem_C) == 0x000168, "Wrong size on UBP_AIActionPairCall_FeedItem_C");
static_assert(offsetof(UBP_AIActionPairCall_FeedItem_C, FeedItemSlotId) == 0x000150, "Member 'UBP_AIActionPairCall_FeedItem_C::FeedItemSlotId' has a wrong offset!");
static_assert(offsetof(UBP_AIActionPairCall_FeedItem_C, FeedItemNum) == 0x000164, "Member 'UBP_AIActionPairCall_FeedItem_C::FeedItemNum' has a wrong offset!");

}

