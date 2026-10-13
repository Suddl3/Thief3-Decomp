// Game/Unsorted_10C004A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"
#include "Game/Class_10991FF0.h"
#include "Game/Class_10BB67F0.h"

class Class_10BB48E0
{
public:
    void FUN_10bb4870(void* A, FVector* B);
};

Class_10BB48E0* FUN_10bb5660();

// FUNCTION: 0x10C005D0 ?FUN_10c005d0@@YA_NPAVClass_10BAA3C0@@PAVFVector@@1@Z
bool FUN_10c005d0(Class_10BAA3C0* A, FVector* B, FVector* C)
{
    float Dz = ((Class_10991FF0*)((Class_10C7D570*)A)->FUN_10c7d570())->FUN_10991ff0();
    FVector Tmp;
    Tmp.X = C->X;
    Tmp.Z = Dz + C->Z;
    Tmp.Y = C->Y;
    *B = Tmp;
    void* Found = ((Class_10BB67F0*)FUN_10bb5660())->FUN_10bb67f0((int)C, 0, A);
    if (!Found)
        return false;
    ((Class_10BB48E0*)FUN_10bb5660())->FUN_10bb4870(Found, B);
    float Dz2 = ((Class_10991FF0*)((Class_10C7D570*)A)->FUN_10c7d570())->FUN_10991ff0();
    B->Z = (Dz2 + B->Z) + 5.0f;
    return true;
}
