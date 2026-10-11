// Game/Unsorted_10C08010.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C08480.h"
#include "Game/Class_10963740.h"
#include "Game/Class_10C06F30.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10BA91E0.h"

class FVector;

// Copied whole from include/Game/Class_10C25EB0.h, except FUN_10c25ff0 takes an int:
// the call pushes 0xff, not the sign-extended -1 a char argument gives.
class Class_10C25EB0 : public Class_10963740
{
public:
    char FUN_10c25fb0();
    FVector FUN_10c25eb0();
    void FUN_10c25ff0(int Value);
    void FUN_10c26030(float Value);
};

double FUN_10c00480();

float FUN_10c064c0();

int FUN_10c00430(Struct_10BA91E0* P);

// The object at arg1: its field at +0x8 is a Class_10C7D570.
class Class_10C08010_Arg1
{
public:
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

// The object Class_10C7D570::FUN_10c7d570 returns: a position at +0x2C.
class Class_10C08010_Result
{
public:
    char Unknown00[0x2C];
    Struct_10BA91E0 Unknown2C;
};

// The object at this+0x4: its field at +0x4 is a Class_10C06F30.
class Class_10C08010_Unknown04
{
public:
    char Unknown00[4];
    Class_10C06F30* Unknown04;
};

class Class_10C08010
{
public:
    void FUN_10c08010(Class_10C08010_Arg1* A, Struct_10BA91E0* P, int Unused3, float* Radius, int Unused5);

    char Unknown00[4];
    Class_10C08010_Unknown04* Unknown04;
};

// FUNCTION: 0x10C08010 ?FUN_10c08010@Class_10C08010@@QAEXPAVClass_10C08010_Arg1@@PAUStruct_10BA91E0@@HPAMH@Z
void Class_10C08010::FUN_10c08010(Class_10C08010_Arg1* A, Struct_10BA91E0* P, int Unused3, float* Radius, int Unused5)
{
    float R = *Radius;
    int Index = FUN_10c00430(&((Class_10C08010_Result*)A->Unknown08->FUN_10c7d570())->Unknown2C);
    Class_10C25EB0 Out;
    for (float Y = P->Unknown04 - R; R + P->Unknown04 >= Y; Y += FUN_10c064c0())
    {
        for (float X = P->Unknown00 - R; R + P->Unknown00 >= X; X += FUN_10c064c0())
        {
            Struct_10BA91E0 Vec;
            Vec.Unknown00 = X;
            Vec.Unknown04 = Y;
            Vec.Unknown08 = P->Unknown08;
            Unknown04->Unknown04->FUN_10c06f30(&Out, (int)&Vec);
            if (FUN_10c00430(&Vec) == Index)
            {
                Out.FUN_10c25ff0(0xff);
                Out.FUN_10c26030((float)FUN_10c00480());
            }
        }
    }
}

// FUNCTION: 0x10C08480 ?FUN_10c08480@Class_10C08480@@QAEPAV1@XZ
Class_10C08480* Class_10C08480::FUN_10c08480()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = true;
    Unknown14 = 0;
    Unknown18 = 0;
    return this;
}
