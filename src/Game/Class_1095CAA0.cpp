// Game/Class_1095CAA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1095CAA0.h"
#include "Game/Struct_1095CAA0.h"

// FUNCTION: 0x1095CAA0 ?FUN_1095caa0@Class_1095CAA0@@QAE_NPAUStruct_1095CAA0@@@Z
bool Class_1095CAA0::FUN_1095caa0(Struct_1095CAA0* Other)
{
    if (!Other)
        return false;
    if (Unknown24 >= 0)
        return Other->Unknown10 == Unknown20;
    return Other->Unknown0C == Unknown20;
}
