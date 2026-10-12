// Game/Unsorted_10B9EEE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9F200.h"
#include "Game/cIntArray.h"

class Class_10B9F200_Item
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
};

// FUNCTION: 0x10B9F200 ?FUN_10b9f200@Class_10B9F200@@QAEXXZ
void Class_10B9F200::FUN_10b9f200()
{
    Unknown3C.SetCount(0);
    FUN_10b9d2b0();
    FUN_10b9ea00(0);
    int Count = m_Count;
    if (Count)
    {
        Class_10B9F200_Item* Item = m_Items[Count - 1];
        if (Item)
        {
            Item->Virtual6();
            Item->Virtual7();
        }
    }
    FUN_10b9d660();
}
