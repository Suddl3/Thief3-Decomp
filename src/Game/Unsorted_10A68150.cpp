// Game/Unsorted_10A68150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A68150.h"
#include "Game/Class_10BFBD70.h"

// FUNCTION: 0x10A68150 ?FUN_10a68150@Class_10A68150@@QAEXH@Z
void Class_10A68150::FUN_10a68150(int Item)
{
    int Index = Unknown10.FindIndex(Item);
    if (Index != -1)
        Unknown10.FUN_109dff50(Index);
}
