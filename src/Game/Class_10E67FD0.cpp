// Game/Class_10E67FD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E67FD0.h"
#include "Game/Class_10A52B30.h"
#include "Game/cFloatInterpolator.h"
#include "Game/WindowManager.h"

// FUNCTION: 0x109E3730 ?FUN_109e3730@Class_10E67FD0@@UAEHH@Z
int Class_10E67FD0::FUN_109e3730(int A)
{
    Virtual6(A);
    return A;
}

// FUNCTION: 0x10A52A90 ?FUN_10a52a90@Class_10E67FD0@@UAEXH@Z
void Class_10E67FD0::FUN_10a52a90(int A)
{
    bool Old = Virtual54();
    Unknown0C8 = A;
    if (Virtual54() != Old)
        Virtual88(Virtual54());
}
