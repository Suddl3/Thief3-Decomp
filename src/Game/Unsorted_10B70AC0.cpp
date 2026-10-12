// Game/Unsorted_10B70AC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E871C8.h"
#include "Game/cSmokeySoup.h"

Class_10E871C8* GetSoupManager();

extern bool DAT_10f31a60;

bool FUN_10abc140();

// FUNCTION: 0x10B70F60 ?AddToArray@cSmokeySoup@@UAEXHH@Z
void cSmokeySoup::AddToArray(int p1, int p2)
{
    GetSoupManager()->FUN_10b70d40(p1, p2);
}

// FUNCTION: 0x10B710F0 ?FUN_10b710f0@@YAXXZ
void FUN_10b710f0()
{
    if (FUN_10abc140())
        DAT_10f31a60 = false;
}
