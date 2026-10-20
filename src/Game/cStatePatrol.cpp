// Game/cStatePatrol.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cStatePatrol.h"
#include "Game/cString.h"

int FUN_10bb3730(int A, int B, int C, const cString& Name);

// FUNCTION: 0x10BB3A50 ?FUN_10bb3a50@cStatePatrol@@UAEHHHH@Z
int cStatePatrol::FUN_10bb3a50(int A, int B, int C)
{
    cString Name("STATE_PATROL");
    return FUN_10bb3730(A, B, C, Name);
}
