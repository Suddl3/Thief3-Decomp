// Game/Unsorted_10B3A540.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10F3A3D8.h"

class APlayerPawn;

class AGarrett
{
    DECLARE_CLASS(AGarrett, APlayerPawn, 0x800, T3Player)
};

extern Class_10F3A3D8* DAT_10f3a3d8;

extern const char* DAT_10e7cda8[];

class Class_10B21560
{
public:
    unsigned char FUN_10b21560();
};

struct Struct_10B3A540
{
    char Unknown00[0x1C];
    int Unknown1C;
    int Unknown20;
    char Unknown24[0x8];
};

class Class_10B3A540
{
public:
    const char* FUN_10b3a540(int A);

    Struct_10B3A540 Unknown00[1];
};

// FUNCTION: 0x10B3A540 ?FUN_10b3a540@Class_10B3A540@@QAEPBDH@Z
const char* Class_10B3A540::FUN_10b3a540(int A)
{
    Class_10B21560* Garrett = (Class_10B21560*)Cast<AGarrett>(DAT_10f3a3d8->Unknown08);
    if (Garrett->FUN_10b21560())
        return DAT_10e7cda8[Unknown00[A].Unknown20];
    return DAT_10e7cda8[Unknown00[A].Unknown1C];
}
