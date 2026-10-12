// Game/cZoneManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cZoneManager.h"

class AInfo;

class AZoneProperties
{
    DECLARE_CLASS(AZoneProperties, AInfo, 0x0, Engine)

public:
    BYTE Unknown00[0x90];
    INT m_FleshBSPZone;                     // 0x90: inherited from AActor
};

// FUNCTION: 0x109E2CE0 ?RemoveZone@cZoneManager@@QAEXPAVUObject@@HH@Z
void cZoneManager::RemoveZone(UObject* Obj, int A, int B)
{
    AZoneProperties* Zone = Cast<AZoneProperties>(Obj);
    RemoveFromBucket(Zone->m_FleshBSPZone, Zone);
}
