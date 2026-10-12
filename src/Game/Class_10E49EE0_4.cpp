// Game/Class_10E49EE0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49EE0_Member.h"
#include "Game/Class_10E49F0C.h"
#include "Game/Class_10E49EE0.h"

// FUNCTION: 0x10934320 ??_GClass_10E49EE0@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10934340's definition in this unit.

// FUNCTION: 0x10934340 ??1Class_10E49EE0@@UAE@XZ
Class_10E49EE0::~Class_10E49EE0()
{
    if (m_Member)
    {
        ((Class_10E49EE0_Member*)m_Member)->Virtual2();
        m_Member = 0;
    }
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
    Unknown24 = 0;
}
