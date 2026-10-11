// Game/Unsorted_10A81B10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"
#include "Game/Class_10C00A60.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x10A81B10 ?FUN_10a81b10@Class_10BFBD70@@QAEXHPAH@Z
void Class_10BFBD70::FUN_10a81b10(int Index, int* Value)
{
    int Old = Unknown00;
    if (Index == Old)
    {
        ((Class_10C00A60*)this)->FUN_10c00a60(Old + 1);
        Data[Old] = *Value;
    }
    else
    {
        ((Class_10C00A60*)this)->FUN_10c00a60(Old + 1);
        int Dst = Index + 1;
        int Src = Index;
        int Move = Unknown00 - Index - 1;
        if (Src != Dst && Move)
            memmove(&Data[Dst], &Data[Src], Move * sizeof(int));
        Data[Index] = *Value;
    }
}
