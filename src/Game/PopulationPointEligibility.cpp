// Game/PopulationPointEligibility.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10974340.h"
#include "Game/Class_1098E330.h"

class Class_109EFF30
{
public:
    FVector* FUN_109eff30(FVector* Out);
};

class Class_10B21560
{
public:
    char Unknown00[0x2C];
    FVector Position;
    char Unknown38[0x60];
    Class_10974340* Unknown98;
};

class Class_10A491B0_Point
{
public:
    char Unknown00[0x2C];
    FVector Position;
};

class Class_10A491B0_View
{
public:
    char Unknown00[0x38];
    Class_109EFF30 Unknown38;
};

extern Struct_10AA3520* DAT_10f35dec;

extern bool DAT_10f3a058;

extern float DAT_10f3a054;

extern float DAT_10eafbdc;

inline float Dot(const FVector& A, const FVector& B)
{
    return A.X * B.X + A.Y * B.Y + A.Z * B.Z;
}

// FUNCTION: 0x10A491B0 ?FUN_10a491b0@@YA_NPAX@Z
bool FUN_10a491b0(void* A)
{
    bool Ready = DAT_10f3a058;
    if (!Ready)
    {
        int Level = DAT_10f35dec->Unknown08->Unknown98->FUN_10974340();
        if (Level)
        {
            ((Class_1098E330*)Level)->FUN_1098e330(0x10064C, (int*)&DAT_10f3a054);
            DAT_10f3a054 *= 16.0f;
            DAT_10f3a058 = true;
            Ready = true;
        }
    }
    if (!Ready)
        return false;
    FVector Delta = ((Class_10A491B0_Point*)A)->Position - DAT_10f35dec->Unknown08->Position;
    FVector Temporary;
    return Dot(Delta, Delta) < DAT_10f3a054 * DAT_10f3a054 ||
        Dot(Delta, *((Class_10A491B0_View*)DAT_10f35dec->Unknown10)->Unknown38.FUN_109eff30(&Temporary)) > DAT_10eafbdc;
}
