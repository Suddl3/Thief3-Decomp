// Game/cZoneManager_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cZoneManager.h"

// FUNCTION: 0x109E30D0 ?HandleEvent@cZoneManager@@UAEXHPAVUObject@@HH@Z
void cZoneManager::HandleEvent(int Event, UObject* A, int B, int C)
{
    switch (Event)
    {
    case 36:
    case 37:
        AddZone(A, B, C);
        break;
    case 38:
    case 39:
        RemoveZone(A, B, C);
        break;
    case 112:
        FUN_109e3060(A, B, C);
        break;
    }
}
