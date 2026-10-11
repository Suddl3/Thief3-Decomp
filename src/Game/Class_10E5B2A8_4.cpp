// Game/Class_10E5B2A8_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10F46DA0.h"

class Class_10E5B2A8
{
public:
    virtual void FUN_109e30d0(int Event, UObject* A, int B, int C);

    Class_10E5B2A8();

    void FUN_109e2c10(INT A, AZoneProperties* B);
    void FUN_109e2ce0(UObject* Obj, int A, int B);
    void FUN_109e2fa0(UObject* A, int B, int C);
    void FUN_109e3060(UObject* A, int B, int C);
    void FUN_109e2d50(int A, AZoneProperties* B);

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x109E2FA0 ?FUN_109e2fa0@Class_10E5B2A8@@QAEXPAVUObject@@HH@Z
void Class_10E5B2A8::FUN_109e2fa0(UObject* A, int B, int C)
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
