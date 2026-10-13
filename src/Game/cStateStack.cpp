// Game/cStateStack.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9E410_Item.h"
#include "Game/cStateStack.h"
#include "Game/Class_10B9E410_Member.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BB8300.h"
#include "Game/Object_10B9CAC0.h"
#include "Game/cString.h"
#include "Game/Class_10B9D180.h"
#include "Game/Class_10B9D1A0.h"
#include "Game/Class_10B9D1C0.h"
#include "Game/Class_10B9D1E0.h"
#include "Game/Class_10B9D200.h"

class State_Patrol : public Class_10B9E410_Item
{
public:
    void FUN_10bef060();
};

class Class_10B9E410_Item;

// FUNCTION: 0x10B9CF20 ?FUN_10b9cf20@cStateStack@@QAEXXZ
void cStateStack::FUN_10b9cf20()
{
    if (Top() && Top()->Virtual3() == 0xB)
        static_cast<State_Patrol*>(Top())->FUN_10bef060();
}

// FUNCTION: 0x10B9CF60 ?FUN_10b9cf60@cStateStack@@QAEXXZ
void cStateStack::FUN_10b9cf60()
{
    Unknown1C = 0;
    if (Top()->Virtual3() == 0x11)
        Top()->Virtual34();
}

// FUNCTION: 0x10B9CFA0 ?FUN_10b9cfa0@cStateStack@@QAEXXZ
void cStateStack::FUN_10b9cfa0()
{
    Unknown20 = 0;
    if (Top()->Virtual3() == 0x12)
        Top()->Virtual34();
}

// FUNCTION: 0x10B9DC40 ?FUN_10b9dc40@cStateStack@@QAEXH@Z
void cStateStack::FUN_10b9dc40(int A)
{
    Class_10B9E410_Member* Obj = m_Member;
    Class_10B9E410_Item* Top = m_Count == 0 ? 0 : m_Stack[m_Count - 1];
    int Key = Unknown0C;
    ApplyNextState(Obj->Virtual43(Key, Top, A));
}

// FUNCTION: 0x10B9DC80 ?FUN_10b9dc80@cStateStack@@QAEXH@Z
void cStateStack::FUN_10b9dc80(int A)
{
    Class_10B9E410_Member* Obj = m_Member;
    Class_10B9E410_Item* Top = m_Count == 0 ? 0 : m_Stack[m_Count - 1];
    int Key = Unknown0C;
    ApplyNextState(Obj->Virtual44(Key, Top, A));
}

// FUNCTION: 0x10B9DCC0 ?FUN_10b9dcc0@cStateStack@@QAEXXZ
void cStateStack::FUN_10b9dcc0()
{
    if (m_Count)
    {
        Class_10B9E410_Item* Top = m_Stack[m_Count - 1];
        if (Top && Top->Virtual3() == 7)
            FUN_10b9d8d0();
    }
}

// FUNCTION: 0x10B9E410 ?FUN_10b9e410@cStateStack@@QAEXXZ
void cStateStack::FUN_10b9e410()
{
    Class_10B9E410_Member* Obj = m_Member;
    int Key = Unknown0C;
    ApplyNextState(Obj->Virtual28(Key));
}
