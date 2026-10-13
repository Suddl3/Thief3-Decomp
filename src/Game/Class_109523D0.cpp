// Game/Class_109523D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cD3DStateCache.h"
#include "Game/Class_109523D0.h"
#include "Game/Class_10952640.h"
#include "Game/Info_10952690.h"

// FUNCTION: 0x109523D0 ?HasAllBits@Class_109523D0@@QAE_NH@Z
bool Class_109523D0::HasAllBits(int Mask)
{
    for (int i = 0; i < 9; i++)
    {
        int Bit = 1 << i;
        if ((Mask & Bit) && !(m_Flags & Bit))
            return false;
    }
    return true;
}

// FUNCTION: 0x10952410 ?FUN_10952410@Class_109523D0@@QAEHPAH@Z
int Class_109523D0::FUN_10952410(int* Key)
{
    int Count = 0;
    if (m_Flags & 0x1)
    {
        *Key = 0;
        Count = 1;
    }
    if (m_Flags & 0x2)
    {
        *Key = 1;
        Count++;
    }
    if (m_Flags & 0x4)
    {
        *Key = 2;
        Count++;
    }
    if (m_Flags & 0x8)
    {
        *Key = 3;
        Count++;
    }
    if (m_Flags & 0x10)
    {
        *Key = 4;
        Count++;
    }
    if (m_Flags & 0x20)
    {
        *Key = 5;
        Count++;
    }
    if (m_Flags & 0x40)
    {
        *Key = 6;
        Count++;
    }
    if (m_Flags & 0x80)
    {
        *Key = 7;
        Count++;
    }
    if (m_Flags & 0x100)
    {
        *Key = 8;
        Count++;
    }
    return Count;
}
