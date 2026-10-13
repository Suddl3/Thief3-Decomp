// Game/Class_10BF1C40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"
#include "Game/Struct_10BA91E0.h"
#include "Game/Class_10BF1C40.h"
#include "Game/Class_10BF1C40_Result.h"
#include "Game/Class_10BF1C40_Unknown04.h"
#include "Game/Class_10BF1C40_Unknown40.h"

extern float DAT_10eafbdc;

extern float DAT_10e66518;

float Distance(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

// FUNCTION: 0x10BEF470 ?FUN_10bef470@Class_10BF1C40@@QAE_NXZ
bool Class_10BF1C40::FUN_10bef470()
{
    float L;
    if (Unknown40)
        L = Unknown40->Virtual71();
    else
        L = 0.0f;
    if (FUN_10bef370() < L)
        return false;
    ((Class_10BF1C40_Result*)Unknown04->Unknown08->FUN_10c7d570())->Virtual98();
    if (L < DAT_10eafbdc)
        return true;
    if (L < Unknown50)
        return true;
    return false;
}

// FUNCTION: 0x10BF1C40 ?FUN_10bf1c40@Class_10BF1C40@@QAE_NXZ
bool Class_10BF1C40::FUN_10bf1c40()
{
    if (Unknown40 == 0)
        return false;
    float F1 = Unknown40->Virtual71();
    float F2 = FUN_10bef370();
    if (F2 < F1)
        return true;
    Struct_10BA91E0 A;
    if (!FUN_10bf0ea0(&A, 0x15, true))
        return false;
    Struct_10BA91E0 B = *Unknown40->Virtual70();
    float F3 = Distance(&A, &B);
    ((Class_10BF1C40_Result*)Unknown04->Unknown08->FUN_10c7d570())->Virtual98();
    if (F3 < DAT_10eafbdc)
        return false;
    if (F3 < Unknown50)
        return false;
    float V = (F2 - Unknown50) * DAT_10e66518 + Unknown50;
    if (!(V < Unknown50 * 1.5))
        V = Unknown50 * 1.5;
    if (V < F1)
        return true;
    return false;
}
