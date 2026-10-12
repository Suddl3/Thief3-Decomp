// Game/Class_10E6C5D0_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C5D0.h"

// FUNCTION: 0x10A8A590 ?FUN_10a8a590@Class_10E6C5D0@@UAEHXZ
int Class_10E6C5D0::FUN_10a8a590()
{
    if (!m_Next)
        return 0;
    return m_Next->FUN_10a8a590();
}
