#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataflowEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class DataflowEngine.DataflowEdNode
// 0x0020 (0x00B8 - 0x0098)
class UDataflowEdNode final : public UEdGraphNode
{
public:
	uint8                                         Pad_98[0x20];                                      // 0x0098(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowEdNode">();
	}
	static class UDataflowEdNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowEdNode>();
	}
};
static_assert(alignof(UDataflowEdNode) == 0x000008, "Wrong alignment on UDataflowEdNode");
static_assert(sizeof(UDataflowEdNode) == 0x0000B8, "Wrong size on UDataflowEdNode");

// Class DataflowEngine.Dataflow
// 0x0028 (0x0088 - 0x0060)
class UDataflow final : public UEdGraph
{
public:
	uint8                                         Pad_60[0x10];                                      // 0x0060(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bActive;                                           // 0x0070(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        Targets;                                           // 0x0078(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Dataflow">();
	}
	static class UDataflow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflow>();
	}
};
static_assert(alignof(UDataflow) == 0x000008, "Wrong alignment on UDataflow");
static_assert(sizeof(UDataflow) == 0x000088, "Wrong size on UDataflow");
static_assert(offsetof(UDataflow, bActive) == 0x000070, "Member 'UDataflow::bActive' has a wrong offset!");
static_assert(offsetof(UDataflow, Targets) == 0x000078, "Member 'UDataflow::Targets' has a wrong offset!");

}
