// Game/Class_10E98F90_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C1B840.h"

typedef float FLOAT;

extern void* DAT_10e98f90[];

class FVector
{
public:
    FVector() {}
    FVector(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}

    FLOAT X, Y, Z;
};

struct Struct_10C1BF40
{
    char Unknown00[0x2C];
    FVector Unknown2C;
};

class Class_10E98F90 : public Class_10C1B840
{
public:
    Class_10E98F90* FUN_10c1bf40(Struct_10C1BF40* A, int B, int C, int D, float E, float F);

    int Unknown48;
    FVector Unknown4C;
};

// FUNCTION: 0x10C1BF40 ?FUN_10c1bf40@Class_10E98F90@@QAEPAV1@PAUStruct_10C1BF40@@HHHMM@Z
Class_10E98F90* Class_10E98F90::FUN_10c1bf40(Struct_10C1BF40* A, int B, int C, int D, float E, float F)
{
    this->Class_10C1B840::Class_10C1B840((int)A, C, D, (int)E, (int)F, 1.0f);
    Unknown00 = DAT_10e98f90;
    Unknown48 = B;
    Unknown4C.X = 0;
    Unknown4C.Y = 0;
    Unknown4C.Z = 0;
    if (A)
        Unknown4C = A->Unknown2C;
    return this;
}
