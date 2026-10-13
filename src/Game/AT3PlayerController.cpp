// Game/AT3PlayerController.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B1D3D0.h"
#include "Game/Class_10B228A0.h"
#include "T3Player/T3PlayerClasses.h"
#include "Game/Class_10E79488.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Struct_10AA3520_Member.h"
#include "Game/Class_10ABDC10.h"

struct Struct_10B1D1C0
{
    int Unknown00;
    Class_10B228A0* Unknown04;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

// FUNCTION: 0x10B1D1C0 ?FUN_10b1d1c0@AT3PlayerController@@UAEHXZ
int AT3PlayerController::Virtual98()
{
    Struct_10B1D1C0* Handle = pad0.Unknown00;
    return (!Handle ? 0 : Handle->Unknown04)->FUN_10b228a0();
}

// FUNCTION: 0x10B1D290 ?FUN_10b1d290@AT3PlayerController@@UAEXHHHH@Z
void AT3PlayerController::Virtual107(int A, int B, int C, int D)
{
    DAT_10f3a3d8->Unknown150->FUN_10abdc10(A, B, C, D, 0);
}
