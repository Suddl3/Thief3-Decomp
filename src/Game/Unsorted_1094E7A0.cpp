// Game/Unsorted_1094E7A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094E7A0.h"
#include "Game/Class_Field108.h"
#include "Game/Struct_1094E7A0.h"

class Class_10E4AB88
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int GetCount();

    char Unknown04[0x104];
    Class_Field108* Unknown108;
    char Unknown10C[4];
    int Unknown110;
};

extern int DAT_10f2c720;

class Class_1094E7A0_Unknown114
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(int A, int B, int* C);
};

// FUNCTION: 0x1094E7A0 ?GetHandleValue@Class_1094E7A0@@QAEHH@Z
int Class_1094E7A0::GetHandleValue(int A)
{
    int Result = 0;
    if (Unknown114[DAT_10f2c720])
    {
        int Handle = m_Slots[m_CurrentSlot].Unknown20;
        if (Unknown114[DAT_10f2c720]->Virtual6(0, Handle, &Result) < 0)
            return 0;
    }
    return Result;
}

// FUNCTION: 0x1094E800 ?GetCount@Class_10E4AB88@@UAEHXZ
int Class_10E4AB88::GetCount()
{
    return Unknown108[Unknown110].Unknown14;
}
