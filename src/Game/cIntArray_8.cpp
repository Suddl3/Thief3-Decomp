// Game/cIntArray_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

struct Struct_10C08690;

// FUNCTION: 0x10C2A2D0 ?SetMember@cIntArray@@QAEXHD@Z
void cIntArray::SetMember(int Item, char Flag)
{
    int Index = FindIndex(Item);
    if (Flag == 1)
    {
        if (Index == -1)
        {
            int Count = Unknown00;
            SetCount(Count + 1);
            Data[Count] = Item;
        }
    }
    else if (Index != -1)
    {
        RemoveAt(Index);
    }
}
