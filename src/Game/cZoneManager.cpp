// Game/cZoneManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cZoneManager.h"
#include "Engine/EngineClasses.h"

class AInfo;

// FUNCTION: 0x109E2CE0 ?RemoveZone@cZoneManager@@QAEXPAVUObject@@HH@Z
void cZoneManager::RemoveZone(UObject* Obj, int A, int B)
{
    AZoneProperties* Zone = Cast<AZoneProperties>(Obj);
    RemoveFromBucket(Zone->m_FleshBSPZone, Zone);
}
