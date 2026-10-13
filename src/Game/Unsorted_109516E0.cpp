// Game/Unsorted_109516E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10939570.h"
#include "Game/cFilteredList.h"
#include "Game/Struct_One2.h"
#include "Game/Struct_One4.h"
#include "Game/Struct_Pair0.h"
#include "Game/Struct_Zero4.h"
#include "Game/Struct_Zero5.h"
#include "Game/Class_10E4AC6C.h"
#include "Game/Class_10951900.h"

extern Class_10939570* DAT_10f323fc;

// FUNCTION: 0x10951780 ??0Class_10E4AC6C@@QAE@XZ
Class_10E4AC6C::Class_10E4AC6C() : Unknown04(0)
{
    Unknown0C = 1.0f;
    Unknown10 = 1.0f;
    Unknown14 = 1.0f;
    Unknown18 = 1.0f;
    Unknown2C = 1.0f;
    Unknown30 = 1.0f;
    Unknown34 = 1.0f;
    Unknown38 = 1.0f;
    Unknown1C = 1.0f;
    Unknown28 = 0;
    Unknown3C = 0;
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

// FUNCTION: 0x10951A60 ??_GClass_10E4AC6C@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10951780's definition in this unit.
