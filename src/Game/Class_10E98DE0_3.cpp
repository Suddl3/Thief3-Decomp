// Game/Class_10E98DE0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"
#include "Game/Class_10C1B840.h"

typedef float FLOAT;

extern void* DAT_10e98de0[];

class FVector
{
public:
    FVector() {}
    FVector(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}

    FLOAT X, Y, Z;
};

class Class_10E98DE0 : public Class_10C1B840
{
public:
    Class_10E98DE0(int A, FVector* B, Class_10C7D570* C, int D, void* E, float F, float G, float H);

    FVector m_Position;
    void* Unknown54;
};

// The result of Class_10C7D570::FUN_10c7d570: a float at +0x118.
class Class_10C1B9B0_FUN_10c7d570
{
public:
    char Unknown00[0x118];
    float Unknown118;
};

// FUNCTION: 0x10C1B9B0 ??0Class_10E98DE0@@QAE@HPAVFVector@@PAVClass_10C7D570@@HPAXMMM@Z
Class_10E98DE0::Class_10E98DE0(int A, FVector* B, Class_10C7D570* C, int D, void* E, float F, float G, float H)
    : Class_10C1B840(A, (int)C, D, (int)F, (int)G, H)
{
    Unknown00 = DAT_10e98de0;
    m_Position = *B;
    Unknown54 = E;
    Unknown0C.Unknown08 = ((Class_10C1B9B0_FUN_10c7d570*)C->FUN_10c7d570())->Unknown118 + Unknown0C.Unknown08;
}
