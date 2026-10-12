// Game/Unsorted_10A6A150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091CA00.h"
#include "Game/Class_1091DEE0.h"
#include "Game/Class_10A6A150.h"
#include "Game/cFootstepListener.h"

extern Class_1091DEE0* DAT_10f2c928;

// FUNCTION: 0x10A6A150 ?FUN_10a6a150@Class_10A6A150@@QAEXXZ
void Class_10A6A150::FUN_10a6a150()
{
    Unknown04 = false;
    Class_1091DEE0* Mgr = DAT_10f2c928;
    if (Mgr)
    {
        Class_1091CA00* Obj = Mgr->GetFont(0);
        if (Obj)
            Obj->FUN_1091ca00(Unknown08);
    }
}

// FUNCTION: 0x10A6AD50 ?OnNoteTrack@cFootstepListener@@UAEXHHHH@Z
void cFootstepListener::OnNoteTrack(int Type, int A, int B, int C)
{
    if (Type >= 0x2a && Type <= 0x2b)
        HandleNoteTrack(A, B, C);
}
