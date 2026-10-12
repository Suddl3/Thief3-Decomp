// Game/Unsorted_109421E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10942BB0.h"
#include "Game/Class_10942BF0.h"
#include "Game/Class_109435A0.h"

extern "C" void* memcpy(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x10942760 ?ReadData@@YGXPAXHHPBDPAH@Z
void __stdcall ReadData(void* Dest, int Size, int Count, const char* Source, int* Position)
{
    memcpy(Dest, Source + *Position, Size * Count);
    *Position += Size * Count;
}

// FUNCTION: 0x10942BB0 ?SetBits@Class_10942BB0@@QAEXHI@Z
void Class_10942BB0::SetBits(int Flag, unsigned int Value)
{
    if (Flag == 0)
        Unknown158Bits19To31 = Value;
    else
        Unknown158Bits0To18 = Value;
}

// FUNCTION: 0x10942BF0 ?GetBits@Class_10942BF0@@QAEHH@Z
int Class_10942BF0::GetBits(int Flag)
{
    if (Flag == 0)
        return (Unknown158 >> 0x13) & 0x1fff;
    return Unknown158 & 0x7ffff;
}

// FUNCTION: 0x109435A0 ?Append@Class_109435A0@@QAEHPBF@Z
int Class_109435A0::Append(const short* Item)
{
    int Index = m_Count;
    Resize(Index + 1);
    m_Items[Index] = *Item;
    return Index;
}
