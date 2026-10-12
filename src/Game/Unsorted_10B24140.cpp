// Game/Unsorted_10B24140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"
#include "Game/WindowManager.h"
#include "Game/Class_10B17210.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10C08690;

extern WindowManager* GWindowManager;

void appRequestExit(int Force);

void* FUN_10b154c0();

// FUNCTION: 0x10B244A0 ?FUN_10b244a0@@YAXH@Z
void FUN_10b244a0(int Mode)
{
    if (Mode == 1)
    {
        appRequestExit(0);
        return;
    }
    cIntArray Found;
    ((Class_10B17210*)FUN_10b154c0())->FUN_10b17210(Found);
    GWindowManager->Virtual3();
}
