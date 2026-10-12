// Game/Class_10E98E70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E98E70.h"

// FUNCTION: 0x10C1AB70 ?ClearReference@Class_10E98E70@@UAEXPAX@Z
void Class_10E98E70::ClearReference(void* p1)
{
    if (m_Reference == p1)
        m_Reference = 0;
}
