// Game/Class_10E98EB8_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C1B840.h"

typedef float FLOAT;

extern void* DAT_10e98eb8[];

class FVector
{
public:
    FVector() {}
    FVector(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}

    FLOAT X, Y, Z;
};

class Class_10E98EB8 : public Class_10C1B840
{
public:
    Class_10E98EB8* FUN_10c1bc10(int A, void* B, const FVector& C, int D, int E, float F, float G);

    FVector Unknown48;
    void* Unknown54;
};

// FUNCTION: 0x10C1BC10 ?FUN_10c1bc10@Class_10E98EB8@@QAEPAV1@HPAXABVFVector@@HHMM@Z
Class_10E98EB8* Class_10E98EB8::FUN_10c1bc10(int A, void* B, const FVector& C, int D, int E, float F, float G)
{
    this->Class_10C1B840::Class_10C1B840(A, D, E, (int)F, (int)G, 1.0f);
    Unknown00 = DAT_10e98eb8;
    Unknown48 = C;
    Unknown54 = B;
    return this;
}
