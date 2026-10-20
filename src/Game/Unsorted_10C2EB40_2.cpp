// Game/Unsorted_10C2EB40_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cPositionList.h"
#include "Game/Struct_10C2EB70.h"
#include "Game/Class_10C2EB70.h"
#include "Game/Class_10C270D0.h"
#include "Game/MC_MoveToPoint.h"

// FUNCTION: 0x10C2EB40 ?FUN_10c2eb40@MC_MoveToPoint@@UAEXXZ
void MC_MoveToPoint::FUN_10c2eb40()
{
    if (Unknown48)
    {
        switch (Unknown48->FUN_10c3c2c0(1))
        {
        case 0:
            ((Class_10C270D0*)this)->Reset(); // Reset() belongs to the base the game derives from
            break;
        case 1:
            return;
        }
    }
}

// FUNCTION: 0x10C2EB70 ?FUN_10c2eb70@Class_10C2EB70@@QAEXPAUStruct_10C2EB70@@@Z
void Class_10C2EB70::FUN_10c2eb70(Struct_10C2EB70* Out)
{
    *Out = Unknown4C;
}
