// Game/Unsorted_109E2A90_11.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class AInfo;

class AZoneProperties
{
    DECLARE_CLASS(AZoneProperties, AInfo, 0x0, Engine)

public:
    BYTE Unknown00[0x90];
    INT m_FleshBSPZone;                     // 0x90: inherited from AActor
};

class Class_10E5B2A8
{
public:
    void FUN_109e2c10(INT A, AZoneProperties* B);
    void FUN_109e2ce0(UObject* Obj, int A, int B);
};

// FUNCTION: 0x109E2CE0 ?FUN_109e2ce0@Class_10E5B2A8@@QAEXPAVUObject@@HH@Z
void Class_10E5B2A8::FUN_109e2ce0(UObject* Obj, int A, int B)
{
    AZoneProperties* Zone = Cast<AZoneProperties>(Obj);
    FUN_109e2c10(Zone->m_FleshBSPZone, Zone);
}
