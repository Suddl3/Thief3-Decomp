// Game/Unsorted_10B8CCD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B8CFB0.h"

class Class_10B8CFB0_Unknown08
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
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13(int A);

    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10B8CFB0 ?FUN_10b8cfb0@Class_10B8CFB0@@QAEXXZ
void Class_10B8CFB0::FUN_10b8cfb0()
{
    for (int i = 0; i < Unknown00; i++)
    {
        Class_10B8CFB0_Unknown08* Item = Unknown08[i];
        if (Item && Item->Unknown08 == 3)
            Item->Virtual13(1);
    }
}
