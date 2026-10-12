// Game/Class_10E6C5D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C5D0.h"

// FUNCTION: 0x10A8A510 ?FUN_10a8a510@Class_10E6C5D0@@UAEHHPAV1@@Z
int Class_10E6C5D0::FUN_10a8a510(int p1, Class_10E6C5D0* p2)
{
    if (!m_Next)
        return 0;
    return m_Next->FUN_10a8a510(p1, p2->m_Next);
}
