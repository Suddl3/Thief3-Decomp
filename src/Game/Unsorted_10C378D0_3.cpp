// Game/Unsorted_10C378D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C37960.h"

class Class_10C378D0
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
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19(int Value);
};

// FUNCTION: 0x10C378D0 ?SetItemMode@@YAXPAVClass_10C37960@@PAXH@Z
void SetItemMode(Class_10C37960* A, void* B, int C)
{
    ((Class_10C378D0*)B)->Virtual19(C);
    switch (C)
    {
    case 0:
        A->Virtual8(B);
        break;
    case 1:
        A->Virtual9(B);
        break;
    case 2:
        A->Virtual29();
        A->Virtual10(B);
        break;
    }
}
