// Game/Class_10A707F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10A370C0.h"
#include "Game/Class_10A707F0.h"
#include "Game/Class_10B06220.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Struct_10AA3520_Unknown78.h"
#include "Game/Class_1098E330.h"
#include "Game/cString.h"
#include "Game/Class_1091CA00.h"
#include "Game/Class_1091DEE0.h"
#include "Game/Struct_10ABC6F0.h"
#include "Game/Class_10A701F0.h"
#include "Game/Class_10B37FE0_Unknown04.h"
#include "Game/Class_10B37FE0_Unknown04_Unknown460.h"
#include "Game/Class_10B37FE0_Unknown0B4.h"
#include "Game/Struct_10978840.h"

extern Struct_10AA3520* DAT_10f35dec;

struct Struct_10A6FE10_Arg
{
    int Unknown00;
    char Unknown04[0x8];
    int Unknown0C;
};

bool FUN_10a37080(Class_10A370C0* A, FVector& B);

class Class_10A48230
{
public:
    char Unknown00[0xE8];
    Class_1098E330* Unknown0E8;
};

Class_10A48230* FUN_10a48230(int A, int B);

// FUNCTION: 0x10A6FE10 ?FUN_10a6fe10@Class_10A707F0@@QAEXPAVClass_10B06220@@HH@Z
void Class_10A707F0::FUN_10a6fe10(Class_10B06220* A, int B, int C)
{
    Class_10B06220* Other = (Class_10B06220*)B;
    if (A && Other && A->Unknown24 == Other->Unknown24)
        return;
    FVector Pos;
    FVector Out;
    if (!FUN_10a37080((Class_10A370C0*)A, Pos))
    {
        FVector Tmp;
        Pos = *A->Unknown38.FUN_109eff30(&Tmp);
    }
    {
        FVector Dir = Pos;
        Dir.Normalize();
        Out = Dir;
        Struct_10A6FE10_Arg* Arg = (Struct_10A6FE10_Arg*)C;
        DAT_10f35dec->Unknown78->Virtual21(A, B, Arg->Unknown00 + 0xc, &Out, Arg->Unknown0C);
    }
}

// FUNCTION: 0x10A707F0 ?FUN_10a707f0@Class_10A707F0@@QAE_NPAVClass_10B06220@@HH@Z
bool Class_10A707F0::FUN_10a707f0(Class_10B06220* A, int B, int C)
{
    Class_10A48230* Found = FUN_10a48230(B, C);
    if (Found)
    {
        int Key = 0;
        Found->Unknown0E8->FUN_1098e330(0x800523, &Key);
        if (Key != 0)
        {
            FUN_10a6fe10(A, B, C);
            A->FUN_10ada010(0x2000399);
            return true;
        }
    }
    return false;
}
