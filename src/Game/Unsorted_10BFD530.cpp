// Game/Unsorted_10BFD530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10991270.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10BFD4E0.h"
#include "Game/Class_10BFE6B0.h"

// FUNCTION: 0x10BFE6B0 ?FUN_10bfe6b0@Class_10BFE6B0@@QAEXHH@Z
void Class_10BFE6B0::FUN_10bfe6b0(int Index, int Count)
{
    for (int i = Index; i < Index + Count; i++)
        ((Class_10BFD4E0*)Unknown00)[i].~Class_10BFD4E0();
    FUN_10af3bd0(Index, Count, 0x3C);
}
