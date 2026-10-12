// Game/Unsorted_10BA8DF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cLineSegment.h"

void FUN_10c05f10(const cLineSegment* A, const cLineSegment* B, int C, int D);

// FUNCTION: 0x10BA8DF0 ?FUN_10ba8df0@@YAXHHHHH@Z
void FUN_10ba8df0(int A, int B, int C, int D, int E)
{
    cLineSegment First(A, B);
    cLineSegment Second(C, D);
    FUN_10c05f10(&First, &Second, E, 1);
}
