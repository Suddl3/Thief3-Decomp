// Game/Unsorted_10C307A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C30700.h"
#include "Game/Class_10C30700_Unknown140.h"

// FUNCTION: 0x10C307A0 ?FUN_10c307a0@Class_10C30700@@QAEXHH@Z
void Class_10C30700::FUN_10c307a0(int A, int B)
{
    Unknown99 = true;
    for (int i = 0; i < Unknown138; i++)
        Unknown140[i]->Virtual2(A, B);
    Unknown99 = false;
}
