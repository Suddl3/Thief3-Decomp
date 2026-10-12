// Game/Unsorted_10C5C3B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C5C3A0.h"

// FUNCTION: 0x10C5C3B0 ?Release@Class_10C5C3A0@@QAEXXZ
void Class_10C5C3A0::Release()
{
    FUN_10c5bf20(0x40);
    ::operator delete(m_Buffer);
    Unknown04 = 0;
    Unknown0C = 0;
    m_Buffer = 0;
    Unknown00 = 0;
}
