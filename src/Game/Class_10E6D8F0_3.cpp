// Game/Class_10E6D8F0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA66B0_Unknown10.h"

class Class_10E6D8F0
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
    virtual int GetValue(int Index, int B);

    char Unknown04[4];
    int Unknown08;
    char Unknown0C[4];
    Class_10AA66B0_Unknown10** m_Items;
};

// FUNCTION: 0x10AA6680 ?GetValue@Class_10E6D8F0@@UAEHHH@Z
int Class_10E6D8F0::GetValue(int Index, int B)
{
    if (Index < Unknown08)
    {
        Class_10AA66B0_Unknown10* Item = m_Items[Index];
        if (Item)
            return Item->Virtual6(B);
    }
    return 0;
}
