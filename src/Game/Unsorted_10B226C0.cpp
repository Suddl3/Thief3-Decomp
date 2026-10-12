// Game/Unsorted_10B226C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B228A0.h"
#include "Game/Class_10E7A768.h"
#include "Game/Object_10B22790.h"

class cLockPickController
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
};

struct Struct_10F02BBC
{
    bool Unknown00;
    char Unknown01[7];
};

extern Struct_10F02BBC DAT_10f02bbc[];

// FUNCTION: 0x10B22790 ??1Class_10E7A768@@UAE@XZ
Class_10E7A768::~Class_10E7A768()
{
    for (int i = 0; i < 34; i++)
    {
        if (m_Objects[i])
        {
            delete m_Objects[i];
            m_Objects[i] = 0;
        }
    }
    Unknown90 = 0;
    Unknown94 = 0;
}

// FUNCTION: 0x10B228A0 ?FUN_10b228a0@Class_10B228A0@@QAEHXZ
int Class_10B228A0::FUN_10b228a0()
{
    if (DAT_10f02bbc[Unknown90->Virtual4()].Unknown00 && DAT_10f02bbc[Unknown94->Virtual4()].Unknown00)
        return 1;
    return 0;
}

// FUNCTION: 0x10B22B70 ??_GClass_10E7A768@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B22790's definition in this unit.
