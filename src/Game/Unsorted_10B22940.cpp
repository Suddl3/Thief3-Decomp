// Game/Unsorted_10B22940.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B22D60.h"

class Class_10B22D60_Unknown94
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
};

class Class_10B22D60_Slot
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int Virtual5(int A, int B);
};

// FUNCTION: 0x10B22AC0 ?FUN_10b22ac0@Class_10B22D60@@QAEHXZ
int Class_10B22D60::FUN_10b22ac0()
{
    int Kind = Unknown94->Virtual4();
    if (Kind == 0x18 || Kind == 0x1d || Kind == 0x1e || Kind == 0x1c)
        return 1;
    return 0;
}

// FUNCTION: 0x10B22B90 ?UpdateSlot@Class_10B22D60@@QAEXH@Z
void Class_10B22D60::UpdateSlot(int A)
{
    Class_10B22D60_Slot** Slot = FUN_10b22940(A);
    if (Slot)
    {
        int Value = (*Slot)->Virtual5(m_Body, A);
        if (Value != (*Slot)->Virtual4())
            SetSlot((void**)Slot, Value);
    }
}
