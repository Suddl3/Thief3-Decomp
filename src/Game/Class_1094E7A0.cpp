// Game/Class_1094E7A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1094E620.h"
#include "Game/Class_1094E7A0.h"
#include "Game/Struct_1094E7A0.h"

class Object_1094E5D0
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11(int A, int B, int* C, int D);
};

struct Struct_1094E5D0_Item
{
    char Unknown00[8];
    Object_1094E5D0* Unknown08;
};

// FUNCTION: 0x1094E5D0 ?GetItemValue@Class_1094E7A0@@QAEHHH@Z
int Class_1094E7A0::GetItemValue(int A, int B)
{
    int Result = 0;
    Struct_1094E7A0* Slot = &m_Slots[A];
    if (B < Slot->Unknown14)
    {
        Struct_1094E5D0_Item* Item = &Slot->Unknown10[B];
        if (Item->Unknown08->Virtual11(0, 0, &Result, 0) < 0)
            return 0;
    }
    return Result;
}
