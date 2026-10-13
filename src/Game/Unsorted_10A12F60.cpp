// Game/Unsorted_10A12F60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A16BC0.h"
#include "Game/Class_10A16BF0.h"
#include "Game/Class_10A18E80.h"
#include "Game/Class_10C00A60.h"

class cConversationManager
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
    virtual int AddChild(int Value);

    int Unknown04;
    Class_10C00A60 m_ChildCount;
};

void FUN_10a196d0();

void FUN_10a19c00();

void FUN_10a1b850();

// FUNCTION: 0x10A141A0 ?AddChild@cConversationManager@@UAEHH@Z
int cConversationManager::AddChild(int Value)
{
    Class_10C00A60* Array = &m_ChildCount;
    int Index = Array->m_Count;
    Array->FUN_10c00a60(Index + 1);
    Array->m_Data[Index] = Value;
    return 1;
}

// FUNCTION: 0x10A18E80 ?FUN_10a18e80@Class_10A18E80@@QAEMH@Z
float Class_10A18E80::FUN_10a18e80(int Index)
{
    return Unknown638[Index];
}

// FUNCTION: 0x10A1E3D0 ?FUN_10a1e3d0@@YAXXZ
void FUN_10a1e3d0()
{
    FUN_10a196d0();
    FUN_10a19c00();
    FUN_10a1b850();
}
