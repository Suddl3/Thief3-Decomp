// Game/Unsorted_10A19020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A19330.h"
#include "Game/Class_10BFBD70.h"

// FUNCTION: 0x10A19330 ?FUN_10a19330@Class_10A19330@@QAEXHH@Z
void Class_10A19330::FUN_10a19330(int Item, int Which)
{
    int Index = Unknown08[Which].FindIndex(Item);
    if (Index != -1)
        Unknown08[Which].FUN_109dff50(Index);
}
