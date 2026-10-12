// Game/Unsorted_10B37640.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC92F0.h"
#include "Game/Class_10B22D20.h"
#include "Game/Class_10B379E0.h"
#include "Game/Class_10B37FA0.h"
#include "Game/Class_10B39580.h"
#include "Game/Class_10B3A460.h"
#include "Game/Class_10B47660.h"
#include "Game/Class_10B48300.h"
#include "Game/Class_10E7C584.h"
#include "Game/Class_10F3A3D8.h"

extern Class_10F3A3D8* DAT_10f3a3d8;

void FUN_10d660b0();

Class_10B3A460* GetEntries();

class Class_10AF7F80
{
public:
    const char* FUN_10af7f80();
};

int FUN_10af3690(const char* A, const char* B);

extern const char* DAT_10ff3830;

struct Struct_10B379E0
{
    char Unknown00[0x18];
    Class_10AF7F80 Unknown18;
    char Unknown19[0x23];
    int Unknown3C;
};

class Class_10B21560
{
public:
    char Unknown00[0x490];
    unsigned Unknown490_0 : 1;
    unsigned Unknown490_1 : 1;
};

// FUNCTION: 0x10B379E0 ?FUN_10b379e0@Class_10B379E0@@QAEXPAUStruct_10B379E0@@H@Z
void Class_10B379E0::FUN_10b379e0(Struct_10B379E0* A, int B)
{
    if (A->Unknown3C && &A->Unknown18)
        Unknown04->Unknown490_1 = FUN_10af3690(A->Unknown18.FUN_10af7f80(), DAT_10ff3830) == 0;
}

// FUNCTION: 0x10B37FA0 ?FUN_10b37fa0@Class_10B37FA0@@QAEXHHH@Z
void Class_10B37FA0::FUN_10b37fa0(int A, int B, int C)
{
    Unknown08->RefreshSlot();
    FUN_10d660b0();
    DAT_10f3a3d8->Unknown13C->FUN_10ac92f0();
    FUN_10b37640(B, C);
}

// FUNCTION: 0x10B39500 ?FUN_10b39500@Class_10E7C584@@UAEXH@Z
void Class_10E7C584::FUN_10b39500(int A)
{
    for (int i = 0; i < 8; i++)
        Unknown0C[i]->FUN_10b48300(A);
}

// FUNCTION: 0x10B39580 ?FUN_10b39580@Class_10B39580@@QAEXHH@Z
void Class_10B39580::FUN_10b39580(int A, int B)
{
    int Index = GetEntries()->GetEntry(A)->m_Index;
    Unknown0C[Index]->FUN_10b47660(A, B);
}
