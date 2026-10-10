// Game/Class_10E79488_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B15960.h"
#include "Game/Class_10E79488.h"

class WindowManager;

extern WindowManager* GWindowManager;

void* FUN_10b154c0();

void* FUN_10b1bde0(void* Name);

// FUNCTION: 0x10B1BE20 ?FUN_10b1be20@Class_10E79488@@UAEXHPAXH@Z
void Class_10E79488::FUN_10b1be20(int A, void* Name, int Mode)
{
    if (Mode != -1 && GWindowManager)
        static_cast<Class_10B15960*>(FUN_10b154c0())->FUN_10b160b0(A, FUN_10b1bde0(Name), Mode == 0);
}
