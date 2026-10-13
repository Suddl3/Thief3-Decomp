// Game/Unsorted_10AC1680.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include <math.h>

// The method writes the object's centre into the buffer it is given and returns a pointer to it.
// The object's corners are the FVector Min and Max fields at 0 and 0xC.
class Class_1096D6F0
{
public:
    FVector* FUN_1096d6f0(FVector* Out);

    FVector Min;
    FVector Max;
};

// FUNCTION: 0x10AC1720 ?BoxesOverlap@@YA_NPAVClass_1096D6F0@@0@Z
bool BoxesOverlap(Class_1096D6F0* A, Class_1096D6F0* B)
{
    FVector Ca;
    FVector Cb;
    FVector* PA = A->FUN_1096d6f0(&Ca);
    FVector* PB = B->FUN_1096d6f0(&Cb);
    FVector Delta = *PB - *PA;
    const FVector& Ea = (A->Max - A->Min) * 0.5f;
    const FVector& Eb = (B->Max - B->Min) * 0.5f;
    return fabs(Delta.X) <= Eb.X + Ea.X && fabs(Delta.Y) <= Eb.Y + Ea.Y && fabs(Delta.Z) <= Eb.Z + Ea.Z;
}
