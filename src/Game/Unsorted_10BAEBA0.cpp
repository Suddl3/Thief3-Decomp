// Game/Unsorted_10BAEBA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BAEC00.h"
#include "Game/Class_10BAEC40.h"
#include "Game/Class_10BAEC80.h"

// FUNCTION: 0x10BAEC00 ?Empty@Class_10BAEC00@@QAEXXZ
void Class_10BAEC00::Empty()
{
    SetCount(0);
    if (m_BlockBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_BlockBytes = 0;
    }
}

// FUNCTION: 0x10BAEC40 ?FUN_10baec40@Class_10BAEC40@@QAEXXZ
void Class_10BAEC40::FUN_10baec40()
{
    SetCount(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10BAEC80 ?FUN_10baec80@Class_10BAEC80@@QAEXXZ
void Class_10BAEC80::FUN_10baec80()
{
    FUN_10a211e0(0);
    if (m_BlockBytes)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        m_BlockBytes = 0;
    }
}
