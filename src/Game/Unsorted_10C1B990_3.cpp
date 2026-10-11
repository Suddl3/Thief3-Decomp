// Game/Unsorted_10C1B990_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"

typedef float FLOAT;

class FVector
{
public:
    FVector() {}
    FVector(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}

    FLOAT X, Y, Z;
};

extern void* DAT_10e98e28[];

class Class_10C1B840
{
public:
    Class_10C1B840(int A, int B, int C, int D, int E, float F);
    ~Class_10C1B840();

    void** Unknown00;
    int Unknown04[4];
    float Unknown14;
    int Unknown18[12];
};

class Class_10E98E28 : public Class_10C1B840
{
public:
    Class_10E98E28(int A, const FVector& B, Class_10C7D570* C, int D, float E, float F, float G);

    FVector Unknown48;
    float Unknown54;
    int Unknown58;
};

class Class_10C1BA60_Member
{
public:
    char Unknown00[0x118];
    float Unknown118;
};

// FUNCTION: 0x10C1BA60 ??0Class_10E98E28@@QAE@HABVFVector@@PAVClass_10C7D570@@HMMM@Z
Class_10E98E28::Class_10E98E28(int A, const FVector& B, Class_10C7D570* C, int D, float E, float F, float G)
    : Class_10C1B840(A, (int)C, D, (int)F, (int)G, 1.0f)
{
    Unknown00 = DAT_10e98e28;
    Unknown48 = B;
    Unknown54 = E;
    Unknown58 = 0;
    Unknown14 = ((Class_10C1BA60_Member*)C->FUN_10c7d570())->Unknown118 + Unknown14;
}
