// Game/Unsorted_10ABF200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10ABF1B0.h"

Struct_10ABF1B0* __stdcall FindCitySectionGoal(int A);

// FUNCTION: 0x10ABF200 ?SetCitySectionGoalState@@YGXHD@Z
void __stdcall SetCitySectionGoalState(int A, char B)
{
    FindCitySectionGoal(A)->Unknown20 = B;
}
