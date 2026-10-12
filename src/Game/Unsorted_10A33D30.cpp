// Game/Unsorted_10A33D30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A33E80.h"

// FUNCTION: 0x10A33E80 ?SetRange@Class_10A33E80@@QAEPAV1@_J0@Z
Class_10A33E80* Class_10A33E80::SetRange(__int64 A, __int64 B)
{
    if (A < B)
    {
        m_Min = A;
        m_Max = B;
    }
    else
    {
        m_Max = A;
        m_Min = B;
    }
    return this;
}
