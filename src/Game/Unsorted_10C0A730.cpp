// Game/Unsorted_10C0A730.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C0A6B0.h"
#include "Game/Class_10C0A9A0.h"
#include "Game/Struct_10C0A6B0.h"

struct Struct_10C0A6B0;

// FUNCTION: 0x10C0A9A0 ?FUN_10c0a9a0@Class_10C0A9A0@@QAEXPAX@Z
void Class_10C0A9A0::FUN_10c0a9a0(void* Value)
{
    for (int i = Count - 1; i >= 0; i--)
    {
        Struct_10C0A6B0* Entry = &Entries[i];
        for (int j = Entry->Count - 1; j >= 0; j--)
        {
            if (Entry->Data[j] == Value)
            {
                FUN_10c0a0b0(Entry, j);
                break;
            }
        }
    }
}
