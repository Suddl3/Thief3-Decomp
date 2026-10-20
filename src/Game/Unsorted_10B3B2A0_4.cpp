// Game/Unsorted_10B3B2A0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10B3B2A0_Unknown1C
{
public:
    char Unknown00[4];
    int Unknown04;
};

struct Struct_10B7C170
{
    FVector Unknown00;
    FVector Unknown0C;
    float Unknown18;
    Class_10B3B2A0_Unknown1C* Unknown1C;
    int Unknown20;
    int Unknown24;
};

class Class_10D9B090
{
public:
    BYTE FUN_10d9d640(const FVector& A, const FVector& B, int C, Struct_10B7C170* Out, int D);
};

Class_10D9B090* FUN_10d9dcb0();

int __cdecl FUN_10a481f0(int A, int B);

int __cdecl FUN_10abcd90(int A);

// FUNCTION: 0x10B3B2A0 ?FUN_10b3b2a0@@YGHPAVFVector@@000@Z
int __stdcall FUN_10b3b2a0(FVector* A, FVector* B, FVector* Out1, FVector* Out2)
{
    FVector End = *A;
    FVector Start = *A;
    End += *B * 64.0f;

    Struct_10B7C170 Hit;
    Hit.Unknown00.X = 0.0f;
    Hit.Unknown00.Y = 0.0f;
    Hit.Unknown00.Z = 0.0f;
    Hit.Unknown0C.X = 0.0f;
    Hit.Unknown0C.Y = 0.0f;
    Hit.Unknown0C.Z = 0.0f;
    Hit.Unknown18 = 0.0f;
    Hit.Unknown1C = 0;
    Hit.Unknown20 = -1;
    Hit.Unknown24 = -1;

    if (FUN_10d9dcb0()->FUN_10d9d640(Start, End, 3, &Hit, 0))
    {
        if (Hit.Unknown0C.Z <= 0.01f)
        {
            *Out2 = Hit.Unknown0C;
            *Out1 = Hit.Unknown00;
            if (Hit.Unknown1C->Unknown04)
                return FUN_10abcd90(FUN_10a481f0(Hit.Unknown1C->Unknown04,
                                                 Hit.Unknown20 == -1 ? Hit.Unknown24 : Hit.Unknown20));
        }
    }
    return 0;
}
