// Game/cIntArray_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10C00A60.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x10A81B10 ?InsertAt@cIntArray@@QAEXHPAH@Z
void cIntArray::InsertAt(int Index, int* Value)
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
