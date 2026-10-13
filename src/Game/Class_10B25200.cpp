// Game/Class_10B25200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B16930.h"
#include "Game/Class_10B24DB0.h"
#include "Game/Class_10B25200.h"
#include "Game/Struct_10B25010.h"
#include "Game/Class_10B1B8A0.h"
#include "Game/Class_10B25010_Member.h"

void* GetWindowManager();

// FUNCTION: 0x10B24D70 ?SetJunkState@Class_10B25200@@QAEXXZ
void Class_10B25200::SetJunkState()
{
    Unknown28 = 3;
    Unknown48 = 3;
    static_cast<Class_10B16930*>(GetWindowManager())->FUN_10b166a0();
}

// FUNCTION: 0x10B24D90 ?ClearJunkState@Class_10B25200@@QAEXXZ
void Class_10B25200::ClearJunkState()
{
    Unknown28 = 0;
    Unknown48 = 0;
    static_cast<Class_10B16930*>(GetWindowManager())->FUN_10b16780();
}

// FUNCTION: 0x10B251C0 ?SetJunkItem@Class_10B25200@@QAEXH@Z
void Class_10B25200::SetJunkItem(int A)
{
    m_JunkItem = A;
    ((Class_10B16930*)GetWindowManager())->ShowJunkItemWindow(A);
    Unknown48 = Unknown28 = 3;
    ((Class_10B16930*)GetWindowManager())->FUN_10b166a0();
}

// FUNCTION: 0x10B25200 ?ClearJunkItem@Class_10B25200@@QAEXXZ
void Class_10B25200::ClearJunkItem()
{
    m_JunkItem = 0;
    ((Class_10B16930*)GetWindowManager())->FUN_10b16930();
    Unknown28 = 0;
    Unknown48 = 0;
    ((Class_10B16930*)GetWindowManager())->FUN_10b16780();
}
