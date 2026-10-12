// Game/Class_10E5B2A8_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10F46DA0.h"
#include "Game/Class_10E5B2A8.h"

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x109E2FA0 ?AddZone@Class_10E5B2A8@@QAEXPAVUObject@@HH@Z
void Class_10E5B2A8::AddZone(UObject* A, int B, int C)
{
    if (!A->IsA(AZoneProperties::StaticClass()))
        return;
    AZoneProperties* Zone = Cast<AZoneProperties>(A);
    if (Zone->m_FleshBSPZone != -1)
        FUN_109e2d50(Zone->m_FleshBSPZone, Zone);
    DAT_10f46da0->Virtual1((Class_10E8C35C_Secondary*)this, 0x26, (Struct_10C14320*)Zone, -1);
    DAT_10f46da0->Virtual1((Class_10E8C35C_Secondary*)this, 0x27, (Struct_10C14320*)Zone, -1);
    DAT_10f46da0->Virtual1((Class_10E8C35C_Secondary*)this, 0x70, (Struct_10C14320*)Zone, -1);
}
