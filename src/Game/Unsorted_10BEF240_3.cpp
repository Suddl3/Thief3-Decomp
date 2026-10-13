// Game/Unsorted_10BEF240_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10BA91E0.h"
#include "Game/Class_10BF1C40.h"
#include "Game/Class_10BF1C40_Result.h"
#include "Game/Class_10BF1C40_Unknown04.h"
#include "Game/Class_10BF1C40_Unknown40.h"

extern float DAT_10eafbdc;

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
