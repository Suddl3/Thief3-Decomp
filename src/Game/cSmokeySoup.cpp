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
