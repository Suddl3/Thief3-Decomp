// Game/Unsorted_10A242E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A243E0.h"
#include "Game/Class_10A288C0.h"
#include "Game/Class_10A2B480.h"

// FUNCTION: 0x10A243E0 ?FUN_10a243e0@Class_10A243E0@@QAEXPAH@Z
void Class_10A243E0::FUN_10a243e0(int* p1)
{
    Unknown78 = *p1;
}

// FUNCTION: 0x10A2B480 ?Free@Class_10A2B480@@QAEXXZ
void Class_10A2B480::Free()
{
    if (m_Buffer)
        ::operator delete(m_Buffer);
    m_Buffer = 0;
    Unknown10 = 0;
    FUN_10a2b220();
}
