// Game/Unsorted_10948D30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B59770.h"
#include "Game/Struct_10B597B0.h"
#include <math.h>

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class Class_10948D30
{
public:
    void RemoveItem(int Key);

    char Unknown00[0x4C];
    int Unknown4C;
    char Pad50[0x14];
    Class_10B59770 Items;
};

class Class_10948DE0
{
public:
    void FUN_10948de0();

    char Unknown00[0x140];
    int Unknown140;
    char Unknown144[0xC0];
    bool Unknown204;
    bool Unknown205;
    char Unknown206[0x2];
    float Unknown208;
    float Unknown20C;
    float Unknown210;
    float Unknown214;
    float Unknown218;
    float Unknown21C;
};

// FUNCTION: 0x10948D30 ?RemoveItem@Class_10948D30@@QAEXH@Z
void Class_10948D30::RemoveItem(int Key)
{
    int Count = Items.Count;
    if (Count != 0)
    {
        Struct_10B597B0* Entry = Items.Data;
        Class_10B59770* List = &Items;
        int Index = 0;
        for (; Index < Items.Count; Index++, Entry++)
        {
            if (Entry->Unknown00 == Key)
                break;
        }
        if (Index < Count)
        {
            if (Index != List->Count - 1)
            {
                int From = Index + 1;
                int To = Index;
                int Moved = List->Count - Index - 1;
                if (From != To && Moved)
                    memmove(List->Data + To, List->Data + From, Moved * sizeof(Struct_10B597B0));
            }
            List->Resize(List->Count - 1);
        }
    }
    Unknown4C = 0;
}

// FUNCTION: 0x10948DE0 ?FUN_10948de0@Class_10948DE0@@QAEXXZ
void Class_10948DE0::FUN_10948de0()
{
    Unknown204 = false;
    Unknown205 = false;
    if (Unknown140 != 0)
    {
        if (fabsf(Unknown208) + fabsf(Unknown20C) + fabsf(Unknown210) > 0.001f)
            Unknown204 = true;
        if (fabsf(Unknown214) + fabsf(Unknown218) + fabsf(Unknown21C) > 0.001f)
            Unknown205 = true;
    }
}
