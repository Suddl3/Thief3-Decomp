// Game/Unsorted_10A4EB60_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10A4FC00.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10BB7C00.h"

// FUNCTION: 0x10A4FC50 ?RemoveRange@Class_10A4FC00@@QAEXHH@Z
void Class_10A4FC00::RemoveRange(int Index, int Count)
{
    for (int i = Index; i < Index + Count; i++)
        ((Class_10BB7C00*)Unknown00)[i].FUN_10bb7c00();
    FUN_10af3bd0(Index, Count, 0x1c);
}
