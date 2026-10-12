// Game/cStateGuard.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cStateGuard.h"
#include "Game/Class_109081E0.h"

int FUN_10bb0b10(int A, int B, int C, const Class_109081E0& Name);

// FUNCTION: 0x10BB1910 ?FUN_10bb1910@cStateGuard@@UAEHHHH@Z
int cStateGuard::FUN_10bb1910(int A, int B, int C)
{
    Class_109081E0 Name("STATE_GUARD");
    FUN_10bb0b10(A, B, C, Name);
    return 1;
}
