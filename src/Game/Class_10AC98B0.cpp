// Game/Class_10AC98B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10AC14F0.h"
#include "Game/Class_10AC98B0.h"
#include "Game/Class_10E6FD1C.h"
#include "Game/Class_10AC99D0.h"

struct Struct_10AA3520
{
    char Unknown00[0x8];
    Class_1098E330* Unknown08;
    char Unknown0C[0x4];
    Class_10AC14F0* Unknown10;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10AC9840 ?FUN_10ac9840@Class_10AC98B0@@QAEXXZ
void Class_10AC98B0::FUN_10ac9840()
{
    Class_10AC14F0* Camera = DAT_10f35dec->Unknown10;
    float First = 75.0f;
    float Second = 60.0f;
    DAT_10f35dec->Unknown08->FUN_1098e330(0x100534, (int*)&First);
    DAT_10f35dec->Unknown08->FUN_1098e330(0x100777, (int*)&Second);
    Camera->FUN_10ac14f0(First, 0, Second, true);
    FUN_10ac9570();
}

// FUNCTION: 0x10AC98B0 ?FUN_10ac98b0@Class_10AC98B0@@QAEXXZ
void Class_10AC98B0::FUN_10ac98b0()
{
    if (Unknown04)
        FUN_10ac9840();
}

// FUNCTION: 0x10AC98C0 ?FUN_10ac98c0@Class_10AC98B0@@QAEXH@Z
void Class_10AC98B0::FUN_10ac98c0(int A)
{
    if (Unknown05)
        FUN_10ac9620(A);
    else if (Unknown04)
        FUN_10ac9840();
}
