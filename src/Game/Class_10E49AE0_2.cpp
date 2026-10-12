// Game/Class_10E49AE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49AE0.h"
#include "Game/Struct_10929510.h"

// FUNCTION: 0x10929530 ?SetPixel@Class_10E49AE0@@UAEXPAUStruct_10929510@@HHH@Z
void Class_10E49AE0::SetPixel(Struct_10929510* p1, int p2, int p3, int p4)
{
    ((int*)(p1->Bits + p1->Pitch * p3))[p2] = p4;
}
