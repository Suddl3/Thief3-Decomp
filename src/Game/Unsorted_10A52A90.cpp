// Game/Unsorted_10A52A90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A52B30.h"
#include "Game/Class_10E67FB0.h"
#include "Game/Class_10E67FD0.h"
#include "Game/WindowManager.h"

extern WindowManager* GWindowManager;

// FUNCTION: 0x10A52A90 ?FUN_10a52a90@Class_10E67FD0@@UAEXH@Z
void Class_10E67FD0::FUN_10a52a90(int A)
{
    bool Old = Virtual54();
    Unknown0C8 = A;
    if (Virtual54() != Old)
        Virtual88(Virtual54());
}

// FUNCTION: 0x10A52AF0 ?FUN_10a52af0@Class_10E67FB0@@UAEXM@Z
void Class_10E67FB0::FUN_10a52af0(float DeltaTime)
{
    if (Unknown14)
        return;
    Unknown1C += DeltaTime;
    Unknown04 = Unknown08 + Unknown10 * (Unknown1C / Unknown18);
    if (Unknown1C >= Unknown18)
    {
        Unknown04 = Unknown0C;
        Unknown14 = true;
    }
}

// FUNCTION: 0x10A52B30 ?FUN_10a52b30@Class_10A52B30@@QAEXXZ
void Class_10A52B30::FUN_10a52b30()
{
    for (int i = 0; i < UnknownB8; i++)
    {
        if (UnknownC0[i])
            GWindowManager->FUN_109e8ae0(UnknownC0[i]);
    }
    UnknownB8 = 0;
}
