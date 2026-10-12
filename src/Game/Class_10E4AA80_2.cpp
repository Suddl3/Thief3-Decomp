// Game/Class_10E4AA80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10E4AA80
{
public:
    virtual void Update(int A);

    void FUN_1094ca70(int A);
    float FUN_1094c700();
    void FUN_1094b730();
    void FUN_10948e80();
    void IntegrateOffsets(float A);

    char Unknown04[0x58];
    int Unknown5C;
    int Unknown60;
    char Pad64[0x14];
    float Field78;
    char Pad7C[0x188];
    bool Unknown204;
    bool Unknown205;
    char Pad206[2];
    FVector Unknown208;
    FVector Unknown214;
    FVector Unknown220;
    FVector Unknown22C;
};

void FUN_10957150(FVector* A);

// FUNCTION: 0x10949060 ?IntegrateOffsets@Class_10E4AA80@@QAEXM@Z
void Class_10E4AA80::IntegrateOffsets(float A)
{
    if (Unknown204)
        Unknown220 += Unknown208 * A;
    else
    {
        Unknown220.X = 0.0f;
        Unknown220.Y = 0.0f;
        Unknown220.Z = 0.0f;
    }
    Unknown220.Z = 0.0f;
    if (Unknown205)
    {
        Unknown22C += Unknown214 * A;
        FUN_10957150(&Unknown22C);
    }
    else
    {
        Unknown22C.X = 0.0f;
        Unknown22C.Y = 0.0f;
        Unknown22C.Z = 0.0f;
    }
}
