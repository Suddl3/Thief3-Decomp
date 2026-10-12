// Game/Unsorted_10A141D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A151A0.h"
#include "Game/Class_1090FD40.h"

class cIntArray
{
public:
    void FUN_10c00a60(int A);

    int Unknown00;
    int Unknown04;
};

class Object_10A14540_A
{
public:
    virtual ~Object_10A14540_A();
};

class cConversationManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Clear();

    char Unknown04[4];
    cIntArray m_ChildCount;
    Object_10A14540_A** m_Children;
    Class_1090FD40 Unknown14;
};

// FUNCTION: 0x10A14540 ?Clear@cConversationManager@@UAEXXZ
void cConversationManager::Clear()
{
    for (int i = 0; i < m_ChildCount.Unknown00; i++)
    {
        delete m_Children[i];
        m_Children[i] = 0;
    }
    m_ChildCount.FUN_10c00a60(0);
    Unknown14.FUN_1090f2c0(0);
    Unknown14.FUN_1090f2c0(0);
}

// FUNCTION: 0x10A151A0 ?Free@Class_10A151A0@@QAEXXZ
void Class_10A151A0::Free()
{
    FUN_10a15060(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
