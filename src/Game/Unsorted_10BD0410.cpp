// Game/Unsorted_10BD0410.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_10BD0960.h"
#include "Game/Class_10C1A690.h"
#include "Game/Class_10E9313C.h"
#include "Game/Class_10E97B00.h"

// FUNCTION: 0x10BD06A0 ??0Class_10E9313C@@QAE@XZ
Class_10E9313C::Class_10E9313C()
    : Unknown04(0), Unknown08(DAT_10e47660), Unknown10(0.0f, 0.0f, 0.0f), Unknown1C(0), Unknown20(0), Unknown24(0.5f),
      Unknown28(20), Unknown2C(1), Unknown30(false), Unknown34(DAT_10e47660), Unknown38(false)
{
}

// FUNCTION: 0x10BD0960 ?Empty@Class_10BD0960@@QAEXXZ
void Class_10BD0960::Empty()
{
    for (int i = 0; i < m_Count; i++)
        m_Items[i].Free();
    m_Count = 0;
}
