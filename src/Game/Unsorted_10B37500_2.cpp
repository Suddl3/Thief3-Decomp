// Game/Unsorted_10B37500_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ACA550.h"
#include "Game/Class_10B22D60.h"
#include "Game/Class_10B375B0.h"
#include "Game/Class_10B395B0.h"
#include "Game/Class_10B395E0.h"
#include "Game/Class_10B39670.h"
#include "Game/Class_10B3A460.h"
#include "Game/Class_10B46F10.h"
#include "Game/Class_10B47AB0.h"
#include "Game/Class_10F3A3D8.h"

extern Class_10F3A3D8* DAT_10f3a3d8;

struct Struct_10B375B0
{
    char Unknown00[8];
    int Unknown08;
};

class Class_10B47A00
{
public:
    void FUN_10b47a00(int A);
};

Class_10B3A460* FUN_10b3abf0();

// FUNCTION: 0x10B375B0 ?FUN_10b375b0@Class_10B375B0@@QAEXHPAUStruct_10B375B0@@H@Z
void Class_10B375B0::FUN_10b375b0(int A, Struct_10B375B0* B, int C)
{
    if (B->Unknown08 == 1)
        Unknown08->FUN_10b22c10();
    DAT_10f3a3d8->Unknown124->FUN_10aca550(Unknown04);
}

// FUNCTION: 0x10B395B0 ?FUN_10b395b0@Class_10B395B0@@QAEXH@Z
void Class_10B395B0::FUN_10b395b0(int A)
{
    Class_10B47A00* Item = Unknown0C[FUN_10b3abf0()->FUN_10b3a460(A)->Unknown1C];
    Item->FUN_10b47a00(A);
}

// FUNCTION: 0x10B395E0 ?FUN_10b395e0@Class_10B395E0@@QAEXH@Z
void Class_10B395E0::FUN_10b395e0(int A)
{
    Class_10B47AB0* Item = Unknown0C[FUN_10b3abf0()->FUN_10b3a460(A)->Unknown1C];
    Item->FUN_10b47ab0(A);
}

// FUNCTION: 0x10B39670 ?FUN_10b39670@Class_10B39670@@QAEXH@Z
void Class_10B39670::FUN_10b39670(int A)
{
    Class_10B46F10* Item = Unknown0C[FUN_10b3abf0()->FUN_10b3a460(A)->Unknown1C];
    Item->FUN_10b46f10(A);
}
