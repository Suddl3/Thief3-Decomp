// Game/Class_10E9B0F8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E9B0F8.h"
#include "Game/Class_10E9B088.h"
#include "Game/Class_109B6520.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10C3D400 ?FUN_10c3d400@Class_10E9B0F8@@UAEXE@Z
void Class_10E9B0F8::FUN_10c3d400(unsigned char param)
{
    Unknown28 = param;
}

// FUNCTION: 0x10C3D430 ?FUN_10c3d430@Class_10E9B0F8@@UAEXXZ
void Class_10E9B0F8::FUN_10c3d430()
{
    Unknown2A = !Unknown28;
}

// FUNCTION: 0x10C3D450 ?FUN_10c3d450@Class_10E9B0F8@@UAEMXZ
float Class_10E9B0F8::FUN_10c3d450()
{
    if (Unknown24 >= 0)
        return Unknown34->Virtual67(Unknown24);
    return DAT_10eafbdc;
}

// FUNCTION: 0x10C3D470 ?FUN_10c3d470@Class_10E9B0F8@@UAEMXZ
float Class_10E9B0F8::FUN_10c3d470()
{
    if (Unknown24 >= 0)
        return Unknown34->FUN_109b6540(Unknown24);
    return DAT_10eafbdc;
}

// FUNCTION: 0x10C3D490 ?FUN_10c3d490@Class_10E9B0F8@@UAEMXZ
float Class_10E9B0F8::FUN_10c3d490()
{
    if (Unknown24 >= 0)
        return Unknown34->FUN_109b6520(Unknown24);
    return DAT_10eafbdc;
}
