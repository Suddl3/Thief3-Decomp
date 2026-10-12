// Game/Unsorted_10930650.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10930A40.h"
#include "Game/Class_109329F0.h"

Class_10905A90_Member* GetAllocator();

extern Class_109329F0 DAT_10eff31c;

extern bool DAT_10f31bb4;

// FUNCTION: 0x10930A40 ?Free@Class_10930A40@@QAEXXZ
void Class_10930A40::Free()
{
    FUN_10930450(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10932B40 ?FUN_10932b40@@YAXXZ
void FUN_10932b40()
{
    if (!DAT_10f31bb4)
    {
        DAT_10eff31c.Reset(0x40);
        DAT_10f31bb4 = true;
    }
}
