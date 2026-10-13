// Game/Unsorted_10A4DF00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A4DF00.h"
#include "Game/Struct_10A4DF00.h"

// FUNCTION: 0x10A4DF00 ?FUN_10a4df00@Class_10A4DF00@@QAEHH@Z
int Class_10A4DF00::FUN_10a4df00(int Index)
{
    if (Index >= 0x42 || Index < 0)
        return 0;
    if (Entries[Index].Count == 0)
        return 0;
    for (int i = 0; i < Entries[Index].Count; i++)
    {
        int Value = Entries[Index].Values[i];
        if ((Value < 0x88 || Value > 0x8b) && (Value < 0xa4 || Value > 0xb7))
            return Entries[Index].Values[i];
    }
    return 0;
}
