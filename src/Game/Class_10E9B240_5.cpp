// Game/Class_10E9B240_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Arg_10A48720.h"
#include "Game/cLocomotionCommand.h"

class Class_109BBBA0;

void FUN_10a48720(int A, int* B, int C, int D, Class_109BBBA0* E, int F, Arg_10A48720 G);

// FUNCTION: 0x10C3E010 ?FUN_10c3e010@cLocomotionCommand@@UAEXH@Z
void cLocomotionCommand::FUN_10c3e010(int A)
{
    FUN_10c3d600(A);
    Arg_10A48720 Flags;
    FUN_10a48720(A, &Unknown48, Unknown50, Unknown4C, Unknown70, m_Handle, Flags);
}
