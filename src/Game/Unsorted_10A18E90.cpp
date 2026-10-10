// Game/Unsorted_10A18E90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A18F80.h"
#include "Game/Class_10A18FA0.h"
#include "Game/Class_10A88A50.h"
#include "Game/Class_10E5D70C.h"
#include "Game/Info_10A18FA0.h"
#include "Game/Object_10A18F40.h"

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

// FUNCTION: 0x10A18F80 ?FUN_10a18f80@Class_10A18F80@@QAE_NH@Z
bool Class_10A18F80::FUN_10a18f80(int p1)
{
    if (!Unknown04)
        return false;
    return Unknown04->FUN_10a88a50(p1);
}

// FUNCTION: 0x10A18FA0 ?FUN_10a18fa0@Class_10A18FA0@@QAE_NH@Z
bool Class_10A18FA0::FUN_10a18fa0(int Index)
{
    return Unknown320[Index].Unknown00 > 0;
}
