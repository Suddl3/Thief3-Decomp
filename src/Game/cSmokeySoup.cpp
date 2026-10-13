// Game/cSmokeySoup.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E871C8.h"
#include "Game/Window.h"
#include "Game/cSmokeySoup.h"

Class_10E871C8* GetSoupManager();

// FUNCTION: 0x10B70F20 ?Update@cSmokeySoup@@QAEXH@Z
void cSmokeySoup::Update(int A)
{
    FUN_10a53560(A);
    if (GetSoupManager()->Unknown102F4 > 0)
    {
        FUN_10b70ac0(A);
        GetSoupManager()->FUN_10b70db0(A);
    }
}

// FUNCTION: 0x10B70F60 ?AddToArray@cSmokeySoup@@UAEXHH@Z
void cSmokeySoup::AddToArray(int p1, int p2)
{
    GetSoupManager()->FUN_10b70d40(p1, p2);
}
