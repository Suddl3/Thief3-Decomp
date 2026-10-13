// Game/Unsorted_10B1DB30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A18E80.h"

extern float DAT_10eafbdc;

class Object_10A18FC0 : public Class_10A18E80
{
};

Object_10A18FC0* FUN_10a18fc0();

class Class_10B21820
{
public:
    char Unknown00[0x450];
    unsigned Unknown450_0 : 1;
    unsigned Unknown450_1 : 1;
    unsigned Unknown450_2 : 1;
};

void FUN_10b20650(Class_10B21820* Object);

class Class_10B1DB30
{
public:
    char Unknown00[0x54C];
    unsigned char Unknown54C;
};

// FUNCTION: 0x10B1DB30 ?FUN_10b1db30@@YAXPAVClass_10B1DB30@@MPAM@Z
void FUN_10b1db30(Class_10B1DB30* Obj, float Value, float* Bounds)
{
    if (Value >= Bounds[2])
    {
        Obj->Unknown54C = 2;
        return;
    }
    if (Value >= Bounds[1])
    {
        if (Obj->Unknown54C != 2 || Value < Bounds[18])
            Obj->Unknown54C = 1;
        return;
    }
    if (Value >= Bounds[0])
    {
        if (Obj->Unknown54C != 1 || Value < Bounds[17])
            Obj->Unknown54C = 0;
        return;
    }
    if (Obj->Unknown54C != 0 || Value < Bounds[16])
        Obj->Unknown54C = 3;
}

// FUNCTION: 0x10B1DBD0 ?LerpScaled@@YAMMMMM@Z
float LerpScaled(float A, float B, float C, float D)
{
    return ((D - C) * A + C) * B;
}

// FUNCTION: 0x10B1DC40 ?FUN_10b1dc40@@YAHXZ
int FUN_10b1dc40()
{
    if (FUN_10a18fc0()->FUN_10a18e80(0) > DAT_10eafbdc)
        return 1;
    return 0;
}

// FUNCTION: 0x10B21170 ?FUN_10b21170@@YAXPAVClass_10B21820@@@Z
void FUN_10b21170(Class_10B21820* Object)
{
    if (Object->Unknown450_2)
        FUN_10b20650(Object);
}
