// Game/Class_10E5B2A8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E5B2A8.h"

class AInfo;

class AZoneProperties
{
    DECLARE_CLASS(AZoneProperties, AInfo, 0x0, Engine)

public:
    BYTE Unknown00[0x90];
    INT m_FleshBSPZone;                     // 0x90: inherited from AActor
};

// FUNCTION: 0x109E2CE0 ?RemoveZone@Class_10E5B2A8@@QAEXPAVUObject@@HH@Z
void Class_10E5B2A8::RemoveZone(UObject* Obj, int A, int B)
{
    AZoneProperties* Zone = Cast<AZoneProperties>(Obj);
    RemoveFromBucket(Zone->m_FleshBSPZone, Zone);
}
