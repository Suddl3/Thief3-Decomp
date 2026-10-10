// Game/Unsorted_10A58C70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"

// FUNCTION: 0x10A58C70 ?FUN_10a58c70@Class_10BFBD70@@QAEXABV1@@Z
void Class_10BFBD70::FUN_10a58c70(const Class_10BFBD70& Other)
{
    int OldCount = Count;
    FUN_10bfbd70(Other.Count + OldCount);
    for (int i = 0; i < Other.Count; i++)
        Data[OldCount + i] = Other.Data[i];
}
