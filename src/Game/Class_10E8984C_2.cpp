// Game/Class_10E8984C_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8984C.h"

// FUNCTION: 0x10B925E0 ?FUN_10b925e0@Class_10E8984C@@UAEXPAVClass_10B90750_Arg1@@HH@Z
void Class_10E8984C::FUN_10b925e0(Class_10B90750_Arg1* A, int B, int C)
{
    if (A)
    {
        if (m_Flags & 0x10)
            ((Class_10E8984C*)this)->FUN_10b92330(A, B, C);
        if (m_Flags & 0x81)
            FUN_10b90ab0(A, B, C);
        if (m_Flags & 0x1)
            FUN_10b923b0(A, B, C);
        if (m_Flags & 0x2)
            FUN_10b924d0(A, B, C);
        if (m_Flags & 0x8)
            FUN_10b90750(A, B, C);
        if (m_Flags & 0x40)
            FUN_10b90580(A, B, C);
    }
}
