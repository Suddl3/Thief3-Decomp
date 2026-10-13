// Game/Unsorted_109415F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A3ACD0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109415F0.h"

Class_10905A90_Member* GetAllocator();

void FUN_1092bdb0(void* Block);

// The interface at +0x08/+0x0C: slot 2 is a stdcall Release that takes only this.
class Class_109415F0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void __stdcall Virtual2();
};

// The interface at +0x14: the same release in slot 2.
class Class_109415F0_Unknown14
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void __stdcall Virtual2();
};

// FUNCTION: 0x109415F0 ?FUN_109415f0@Class_109415F0@@QAEXXZ
void Class_109415F0::FUN_109415f0()
{
    if (Unknown00)
    {
        FUN_1092bdb0(Unknown00);
        Unknown00 = 0;
    }
    for (int i = 0; i < 2; i++)
    {
        if (Unknown08[i])
        {
            Unknown08[i]->Virtual2();
            Unknown08[i] = 0;
        }
    }
    Class_109415F0_Unknown14* Obj = Unknown14;
    Unknown10 = 0;
    if (Obj)
    {
        Obj->Virtual2();
        Unknown14 = 0;
    }
    Unknown04 = 0;
    Unknown05 = 0;
    Unknown06 = 0;
    Unknown18 = 0;
    Unknown20.Resize(0);
    int Capacity = !Unknown34 ? 0 : Unknown30 / 6;
    GetAllocator()->Virtual8(0, 0);
    if (0 > Capacity)
    {
        int NewCapacity = 0;
        if (Capacity)
            NewCapacity = 16;
        Unknown34 = GetAllocator()->Virtual3(Unknown34, NewCapacity * 6, 0, 0, 0, 0);
        Unknown30 = NewCapacity * 6;
    }
    else if (0 <= Capacity - 16)
    {
        GetAllocator()->Virtual5(Unknown34);
        Unknown34 = 0;
        Unknown30 = 0;
    }
    GetAllocator()->Virtual9();
    Unknown2C = 0;
}
