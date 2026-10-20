// Game/Class_10E6AC50_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cRemovableIntArray.h"

class Object_10A63310
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A);
};

class Class_10E6AC50
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
    virtual void RemoveItemAt(int Index);

    char Unknown04[0x10];
    cRemovableIntArray m_Count;
};

// FUNCTION: 0x10A63310 ?RemoveItemAt@Class_10E6AC50@@UAEXH@Z
void Class_10E6AC50::RemoveItemAt(int Index)
{
    ((Object_10A63310**)m_Count.Data)[Index]->Virtual1(0);
    m_Count.EraseAt(Index);
}
