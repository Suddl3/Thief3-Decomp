// Game/Class_10E6C5D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C5D0.h"

// FUNCTION: 0x10A8A530 ?FUN_10a8a530@Class_10E6C5D0@@UAEHH@Z
int Class_10E6C5D0::FUN_10a8a530(int p1)
{
    if (!m_Next)
        return 0;
    return m_Next->FUN_10a8a530(p1);
}
