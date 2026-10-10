// Game/Unsorted_10B39530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39530.h"
#include "Game/Class_10B3A460.h"
#include "Game/Class_10B481C0.h"

Class_10B3A460* FUN_10b3abf0();

// FUNCTION: 0x10B39530 ?FUN_10b39530@Class_10B39530@@QAEXHMMHHHM@Z
void Class_10B39530::FUN_10b39530(int A, float B, float C, int D, int E, int F, float G)
{
    int Index = FUN_10b3abf0()->FUN_10b3a460(A)->Unknown1C;
    Unknown0C[Index]->FUN_10b481c0(A, B, C, D, E, 0, F, G);
}
