// Game/Class_10E5B7C8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B7C8.h"

// FUNCTION: 0x109E3C70 ?FlushPending@Class_10E5B7C8@@QAEXXZ
void Class_10E5B7C8::FlushPending()
{
    int Old = m_Pending;
    m_Pending = 0;
    FUN_109e87f0(Old);
}
