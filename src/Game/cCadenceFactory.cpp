// Game/cCadenceFactory.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C662F0.h"
#include "Game/cCadenceFactory.h"

Class_10C662F0* FUN_10c65090();

// FUNCTION: 0x10C47E70 ?FUN_10c47e70@cCadenceFactory@@UAE_NHHH@Z
bool cCadenceFactory::FUN_10c47e70(int A, int B, int C)
{
    if (m_bUseLoader)
        return FUN_10c65090()->TryCreate(A, B, C);
    return false;
}
