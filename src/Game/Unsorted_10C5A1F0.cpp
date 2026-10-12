// Game/Unsorted_10C5A1F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C5A1F0.h"

// FUNCTION: 0x10C5A1F0 ?Free@Class_10C5A1F0@@QAEXXZ
void Class_10C5A1F0::Free()
{
    FUN_10c59330(0x40);
    ::operator delete(m_Buckets);
    Unknown04 = 0;
    Unknown0C = 0;
    m_Buckets = 0;
    Unknown00 = 0;
}
