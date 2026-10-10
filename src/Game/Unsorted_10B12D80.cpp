// Game/Unsorted_10B12D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10B12120.h"
#include "Game/Class_10B12D80.h"

// FUNCTION: 0x10B12D80 ?FUN_10b12d80@Class_10B12D80@@QAEXHH@Z
void Class_10B12D80::FUN_10b12d80(int Index, int Count)
{
    for (int i = Index; i < Index + Count; i++)
        ((Class_10B12120*)Unknown00)[i].~Class_10B12120();
    FUN_10af3bd0(Index, Count, 0x1C);
}
