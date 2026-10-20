// Game/Unsorted_10C003E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10BA91E0.h"

class FVector
{
public:
    float X, Y, Z;
};

// What FUN_10947090 returns: the record for the point.
class Struct_10947090
{
public:
    char Unknown00[0x30];
    int Unknown30;
};

class Class_10947090
{
public:
    Struct_10947090* FUN_10947090(const FVector* Point);
};

class Class_10924100
{
public:
    char Unknown00[0xC];
    Class_10947090* Unknown0C;
};

extern Class_10924100* DAT_10f2c740;

// FUNCTION: 0x10C003E0 ?FUN_10c003e0@@YA_NPBVFVector@@@Z
bool FUN_10c003e0(const FVector* Point)
{
    if (DAT_10f2c740 && DAT_10f2c740->Unknown0C)
    {
        FVector V;
        V.X = Point->X;
        V.Y = Point->Y;
        V.Z = Point->Z;
        if (!DAT_10f2c740->Unknown0C->FUN_10947090(&V))
            return false;
    }
    return true;
}

// FUNCTION: 0x10C00430 ?FUN_10c00430@@YAHPAUStruct_10BA91E0@@@Z
int __cdecl FUN_10c00430(Struct_10BA91E0* Point)
{
    if (DAT_10f2c740 && DAT_10f2c740->Unknown0C)
    {
        FVector V;
        V.X = Point->Unknown00;
        V.Y = Point->Unknown04;
        V.Z = Point->Unknown08;

        Struct_10947090* Record = DAT_10f2c740->Unknown0C->FUN_10947090(&V);
        if (Record)
            return Record->Unknown30;
    }
    return -1;
}
