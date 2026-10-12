// Game/cStateFlee.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cStateFlee.h"
#include "Game/Class_109081E0.h"

int FUN_10bb0b10(int A, int B, int C, const Class_109081E0& Name);

// FUNCTION: 0x10BB1C40 ?FUN_10bb1c40@cStateFlee@@UAEHHHH@Z
int cStateFlee::FUN_10bb1c40(int A, int B, int C)
{
    Class_109081E0 Name("STATE_FLEE");
    return FUN_10bb0b10(A, B, C, Name);
}
