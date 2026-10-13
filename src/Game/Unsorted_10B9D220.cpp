// Game/Unsorted_10B9D220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B9E410_Item.h"
#include "Game/Class_10B9E410_Member.h"
#include "Game/Class_10BB8300.h"
#include "Game/Object_10B9CAC0.h"
#include "Game/cStateStack.h"
#include "Game/cString.h"

class Class_10B9CAC0
{
public:
    void NotifyAllyKilled(int A);

    char Unknown00[0xC];
    Class_10BB8300* Unknown0C;
    int m_Count;
    char Unknown14[4];
    Object_10B9CAC0** m_Stack;
};

// FUNCTION: 0x10B9D330 ?NotifyAllyKilled@Class_10B9CAC0@@QAEXH@Z
void Class_10B9CAC0::NotifyAllyKilled(int A)
{
    if (Unknown0C->FUN_10bb8c00())
    {
        cString Name("+combatwitness:ally_killed");
        (m_Count == 0 ? 0 : m_Stack[m_Count - 1])->Virtual35(Name, 1);
    }
}
