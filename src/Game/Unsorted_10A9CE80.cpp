// Game/Unsorted_10A9CE80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10C3D3B0.h"
#include "Game/Class_10E6B764.h"
#include "Game/Struct_10AA3520.h"

extern Struct_10AA3520* DAT_10f35dec;

class Object_10A9CE80_B
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual Class_1098E3D0* Virtual8();
};

class Object_10A9CE80_C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10C3D3B0* Virtual4(int A);
};

// FUNCTION: 0x10A9CE80 ?FUN_10a9ce80@@YGHHPAVObject_10A9CE80_B@@PAVObject_10A9CE80_C@@@Z
int __stdcall FUN_10a9ce80(int A, Object_10A9CE80_B* B, Object_10A9CE80_C* C)
{
    Class_1098E3D0* Actor = B->Virtual8();
    float F0 = C->Virtual4(0)->Class_10C3D3B0::FUN_10c3d3b0();
    float F1 = C->Virtual4(1)->Class_10C3D3B0::FUN_10c3d3b0();
    float F2 = C->Virtual4(2)->Class_10C3D3B0::FUN_10c3d3b0();
    int Position[3] = { (int)F1, (int)F2, (int)F0 };
    Actor->FUN_1098e3d0(0x80017, Position);
    int Id = 0;
    Actor->FUN_1098e330(0x800526, &Id);
    DAT_10f35dec->Unknown7C->FUN_10a6ae00(Actor, Id);
    return 1;
}
