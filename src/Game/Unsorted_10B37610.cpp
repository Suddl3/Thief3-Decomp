// Game/Unsorted_10B37610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B22C40.h"
#include "Game/Class_10B37610.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Class_10ACF3A0.h"

extern Class_10F3A3D8* DAT_10f3a3d8;

struct Struct_10B37610
{
    char Unknown00[0x458];
    int Unknown458;
};

// FUNCTION: 0x10B37610 ?FUN_10b37610@Class_10B37610@@QAEXHHH@Z
void Class_10B37610::FUN_10b37610(int A, int B, int C)
{
    Unknown04->Unknown458 = DAT_10f3a3d8->UnknownFC->FUN_10acf3a0(A);
    Unknown08->FUN_10b22c40(A);
}
