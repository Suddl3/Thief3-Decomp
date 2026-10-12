// Game/Class_Field0c_D.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B7AC10.h"
#include "Game/Class_Field0c_D.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10B471F0 ?FUN_10b471f0@Class_Field0c_D@@QAEMH@Z
float Class_Field0c_D::FUN_10b471f0(int A)
{
    int Index = FindIndex(A);
    if (Index >= 0)
        return Unknown08[Index]->FUN_10b7ac10();
    return DAT_10eafbdc;
}
