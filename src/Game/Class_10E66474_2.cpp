// Game/Class_10E66474_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cSoundStreamingManager.h"
#include "Game/Struct_10A334E0.h"

// FUNCTION: 0x10A33CE0 ?HandleEvent@cSoundStreamingManager@@UAEXHHHH@Z
void cSoundStreamingManager::HandleEvent(int A, int B, int C, int D)
{
    switch (A)
    {
    case 1:
        FUN_10a33c60();
        break;
    case 0x5A:
        FUN_10a33c60();
        if (Unknown54)
        {
            ClearItems();
            FUN_10a33c60();
        }
        break;
    case 0x70:
        HandleMoveEvent(B, C, D);
        break;
    }
}
