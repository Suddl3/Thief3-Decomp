// Game/Unsorted_10B22940_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B19300.h"
#include "Game/Class_10B22D60.h"

class Class_10E6BA58;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6BA58* A, int B, int C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10B19300;

Class_10B19300* FUN_10b190e0();

class Class_10B22D60_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int A);
    virtual void Virtual3(int A);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void* Virtual12(void* A);
};

// FUNCTION: 0x10B229C0 ?FUN_10b229c0@Class_10B22D60@@QAEXPAPAXH@Z
void Class_10B22D60::FUN_10b229c0(void** A, int B)
{
    char Local[0x14];
    ((Class_10B22D60_Unknown08*)*A)->Virtual3(Unknown04);
    *A = Unknown08[B];
    ((Class_10B22D60_Unknown08*)*A)->Virtual2(Unknown04);
    DAT_10f46da0->Virtual5(0x4a, Unknown04, -1, 0);
    if (*A == Unknown90)
    {
        FUN_10b190e0()->FUN_10de9b20(((Class_10B22D60_Unknown08*)*A)->Virtual12(Local));
    }
}
