// Game/Class_10E5D70C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E5D70C.h"
#include "Game/Object_10A18F40.h"
#include "Game/Class_10A4DFD0.h"
#include "Game/Class_10A18F80.h"
#include "Game/Class_10A18FA0.h"
#include "Game/Class_10A88A50.h"
#include "Game/Info_10A18FA0.h"

Class_10A4DFD0* __stdcall FUN_10a4f900(int A, Object_10A18F40* B, void** C);

// FUNCTION: 0x10A18E50 ?FUN_10a18e50@Class_10E5D70C@@QAEXHHHH@Z
void Class_10E5D70C::FUN_10a18e50(int A, int B, int C, int D)
{
    if (!A)
        A = Unknown674;
    Virtual8(A, B, C, D);
}

// FUNCTION: 0x10A18F10 ?FUN_10a18f10@Class_10E5D70C@@QAEXXZ
void Class_10E5D70C::FUN_10a18f10()
{
    for (int i = 0; i < 14; i++)
        FUN_10a4f900(i, Unknown04, &Unknown638[i])->FUN_10a4dfd0();
}

// FUNCTION: 0x10A18F40 ?FUN_10a18f40@Class_10E5D70C@@UAEXM@Z
void Class_10E5D70C::FUN_10a18f40(float A)
{
    if (Unknown04)
    {
        FUN_10a18e90();
        FUN_10a18f10();
        Unknown04->Virtual2(A);
        Unknown670 = A;
    }
}
