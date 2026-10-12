// Game/Unsorted_10A4EB60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A4EFB0.h"
#include "Game/Class_10A4FC00.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10BB7C00.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A4EFB0 ?Free@Class_10A4EFB0@@QAEXXZ
void Class_10A4EFB0::Free()
{
    FUN_10a4e9d0(0);
    if (m_BufferSize)
    {
        GetAllocator()->Virtual5(m_Buffer);
        m_Buffer = 0;
        m_BufferSize = 0;
    }
}

// FUNCTION: 0x10A4FC00 ?FUN_10a4fc00@Class_10A4FC00@@QAEXH@Z
void Class_10A4FC00::FUN_10a4fc00(int Slack)
{
    for (int i = 0; i < Unknown04; i++)
        ((Class_10BB7C00*)Unknown00)[i].FUN_10bb7c00();
    Unknown04 = 0;
    Unknown08 = Slack;
    FUN_10af3b50(0x1c);
}
