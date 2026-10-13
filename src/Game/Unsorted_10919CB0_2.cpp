// Game/Unsorted_10919CB0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cTextRenderer.h"
#include "Game/Class_1091A4F0.h"
#include "Game/Class_1091B3F0.h"
#include "Game/Struct_1091A610.h"
#include "Game/Struct_1091A610Header.h"
#include "Game/cString.h"
#include "Game/Class_1091A590.h"

// FUNCTION: 0x1091A590 ??1Class_1091A590@@QAE@XZ
Class_1091A590::~Class_1091A590()
{
}

// FUNCTION: 0x1091B3F0 ?Free@Class_1091B3F0@@QAEXXZ
void Class_1091B3F0::Free()
{
    SetCount(0);
    if (m_Capacity)
    {
        GetAllocator()->Virtual5(Items);
        Items = 0;
        m_Capacity = 0;
    }
}
