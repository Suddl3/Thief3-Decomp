// Game/cSoundStreamingManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cSoundStreamingManager.h"
#include "Game/Struct_10A334E0.h"

// FUNCTION: 0x10A334E0 ?ClearItems@cSoundStreamingManager@@QAEXXZ
void cSoundStreamingManager::ClearItems()
{
    for (int i = 0; i < 5; i++)
        FUN_10a33040(i, Struct_10A334E0());
}
