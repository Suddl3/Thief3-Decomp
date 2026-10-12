// Game/Unsorted_10B8C7B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10D9B090.h"
#include "Game/Class_10B8C7B0.h"

struct Struct_10D9E5E0_Param
{
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
    virtual void Virtual18(float A);
};

Class_10D9B090* FUN_10d9dcb0();

// FUNCTION: 0x10B8C7B0 ?Refresh@Class_10B8C7B0@@QAEXXZ
void Class_10B8C7B0::Refresh()
{
    if (Unknown0C)
    {
        if (m_SingleMode)
        {
            FUN_10d9dcb0()->FUN_10d9e490(m_Single);
            return;
        }
        for (int i = 0; i < m_EntryCount; i++)
        {
            m_Entries[i]->Virtual18(-1.0f);
            FUN_10d9dcb0()->FUN_10d9e490(m_Entries[i]);
        }
    }
}
