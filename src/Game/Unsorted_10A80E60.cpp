// Game/Unsorted_10A80E60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A80E60.h"

class Class_10A80E60_Unknown0C
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
    virtual void Virtual8(int Param);
};

// FUNCTION: 0x10A80E60 ?DispatchToElements@Class_10A80E60@@QAEXH@Z
void Class_10A80E60::DispatchToElements(int Param)
{
    for (int i = 0; i < m_Count; i++)
        m_Elements[i]->Virtual8(Param);
}
