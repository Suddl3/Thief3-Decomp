// Game/cLocomotionCommand.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cLocomotionCommand.h"
#include "Game/Class_109BBBA0.h"
#include "Game/Arg_10A48720.h"

class Class_109BBBA0;

void FUN_10a48720(int A, int* B, int C, int D, Class_109BBBA0* E, int F, Arg_10A48720 G);

// FUNCTION: 0x10C3D880 ?Start@cLocomotionCommand@@UAEXXZ
void cLocomotionCommand::Start()
{
    Virtual20();
    m_Active = true;
}

// FUNCTION: 0x10C3D890 ?Stop@cLocomotionCommand@@UAEXXZ
void cLocomotionCommand::Stop()
{
    if (m_Handle >= 0)
    {
        Unknown70->FUN_109bbba0(m_Handle);
        m_Handle = -1;
    }
    m_Active = false;
}

// FUNCTION: 0x10C3DFC0 ?FUN_10c3dfc0@cLocomotionCommand@@UAEHXZ
int cLocomotionCommand::FUN_10c3dfc0()
{
    return Unknown39 == 1;
}

// FUNCTION: 0x10C3DFD0 ?FUN_10c3dfd0@cLocomotionCommand@@UAEXH@Z
void cLocomotionCommand::FUN_10c3dfd0(int Value)
{
    Unknown34 = Value;
}

// FUNCTION: 0x10C3DFF0 ?FUN_10c3dff0@cLocomotionCommand@@UAEXE@Z
void cLocomotionCommand::FUN_10c3dff0(unsigned char Value)
{
    Unknown38 = Value;
}

// FUNCTION: 0x10C3E010 ?FUN_10c3e010@cLocomotionCommand@@UAEXH@Z
void cLocomotionCommand::FUN_10c3e010(int A)
{
    FUN_10c3d600(A);
    Arg_10A48720 Flags;
    FUN_10a48720(A, &Unknown48, Unknown50, Unknown4C, Unknown70, m_Handle, Flags);
}
