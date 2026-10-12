// Game/cStateStack_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cStateStack.h"
#include "Game/Class_10B9E410_Member.h"

class Class_10B9E410_Item;

// FUNCTION: 0x10B9DC40 ?FUN_10b9dc40@cStateStack@@QAEXH@Z
void cStateStack::FUN_10b9dc40(int A)
{
    Class_10B9E410_Member* Obj = m_Member;
    Class_10B9E410_Item* Top = m_Count == 0 ? 0 : m_Stack[m_Count - 1];
    int Key = Unknown0C;
    ApplyNextState(Obj->Virtual43(Key, Top, A));
}
