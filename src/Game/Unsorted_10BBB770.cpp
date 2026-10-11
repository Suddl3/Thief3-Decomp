// Game/Unsorted_10BBB770.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The class map's names.
#include "Core/Core.h"

struct Struct_10BA9EF0
{
    Struct_10BA9EF0() {}
    Struct_10BA9EF0(const FVector& V, const Struct_10BA9EF0& P)
        : Unknown00(V.X + P.Unknown00), Unknown04(V.Y + P.Unknown04), Unknown08(V.Z + P.Unknown08)
    {
    }

    float Unknown00;
    float Unknown04;
    float Unknown08;
};

class Class_10E5CBD8
{
public:
    Struct_10BA9EF0 FUN_10ba9ef0();
    void FUN_10baa240(FVector* Out);
};

FVector FUN_10c055d0(const FVector* V);

class Class_10BBB8B0
{
public:
    int FUN_10bbb770(float Scale);
    char FUN_10bbb580(const Struct_10BA9EF0& Position);

    char Unknown00[8];
    Class_10E5CBD8* Unknown08;
};

// FUNCTION: 0x10BBB770 ?FUN_10bbb770@Class_10BBB8B0@@QAEHM@Z
int Class_10BBB8B0::FUN_10bbb770(float Scale)
{
    FVector A;
    Unknown08->FUN_10baa240(&A);
    FVector B = FUN_10c055d0(&A);
    float Factor = Scale * 16.0f;
    B.X *= Factor;
    B.Y *= Factor;
    B.Z *= Factor;
    Struct_10BA9EF0 D(B, Unknown08->FUN_10ba9ef0());
    return FUN_10bbb580(D) == 1;
}
