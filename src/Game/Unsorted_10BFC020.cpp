// Game/Unsorted_10BFC020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFC020.h"

class Class_10BFC020_Item
{
public:
    virtual int Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual float Virtual6(int A);
};

// FUNCTION: 0x10BFC020 ?SumValuesFor@Class_10BFC020@@QAEMH@Z
float Class_10BFC020::SumValuesFor(int A)
{
    float Sum = 0.0f;
    for (int i = 0; i < m_Count; i++)
    {
        Class_10BFC020_Item* Item = m_Items[i];
        if (Item->Virtual0() == A)
            Sum += Item->Virtual6(0);
    }
    return Sum;
}
