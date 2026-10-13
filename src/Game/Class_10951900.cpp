// Game/Class_10951900.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10939570.h"
#include "Game/Class_109514C0.h"
#include "Game/Class_109516C0.h"
#include "Game/Class_109516C0_Entry.h"
#include "Game/Class_10951900.h"
#include "Game/cFilteredList.h"
#include "Game/Struct_10951A40.h"
#include "Game/Struct_One2.h"
#include "Game/Struct_One4.h"
#include "Game/Struct_Pair0.h"
#include "Game/Struct_Zero4.h"
#include "Game/Struct_Zero5.h"
#include "Game/Class_10E4AC6C.h"

extern Class_10939570* DAT_10f323fc;

// FUNCTION: 0x10951660 ?Reset@Class_10951900@@QAEXXZ
void Class_10951900::Reset()
{
    if (m_Mode == 1 && Unknown18 == 0x3f800000)
        m_Flags &= ~0x400;
    m_Mode = 0;
    if (Unknown24)
    {
        Unknown24->ReleaseAll();
        delete Unknown24;
        Unknown24 = 0;
    }
    if (m_Handle)
    {
        DAT_10f323fc->FUN_1093bce0(m_Handle);
        m_Handle = 0;
    }
}

// FUNCTION: 0x10951900 ?Acquire@Class_10951900@@QAEXPAHH@Z
void Class_10951900::Acquire(int* A, int B)
{
    Reset();
    m_Mode = B;
    if (B)
    {
        m_Handle = (Class_10953590*)DAT_10f323fc->FUN_1093bd40(A, 0, 0);
        if (!m_Handle)
            m_Mode = 0;
        else if (m_Mode == 1)
            m_Flags |= 0x400;
    }
}
