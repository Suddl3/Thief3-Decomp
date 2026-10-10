// Game/Unsorted_10B36450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B15960.h"
#include "Game/Class_10E7C410.h"

class WindowManager;

extern WindowManager* GWindowManager;

void* FUN_10b154c0();

// FUNCTION: 0x10B36450 ?FUN_10b36450@Class_10E7C410@@UAEHHHH@Z
int Class_10E7C410::FUN_10b36450(int A, int B, int C)
{
    if (GWindowManager)
        ((Class_10B15960*)FUN_10b154c0())->FUN_10b15960(0);
    return 1;
}
