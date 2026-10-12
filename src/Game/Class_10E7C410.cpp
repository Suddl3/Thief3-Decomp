// Game/Class_10E7C410.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B15960.h"
#include "Game/Class_10E7C410.h"

class WindowManager;

extern WindowManager* GWindowManager;

void* GetWindowManager();

// FUNCTION: 0x10B36450 ?FUN_10b36450@Class_10E7C410@@UAEHHHH@Z
int Class_10E7C410::FUN_10b36450(int A, int B, int C)
{
    if (GWindowManager)
        ((Class_10B15960*)GetWindowManager())->OpenMainMenuWindow(0);
    return 1;
}
