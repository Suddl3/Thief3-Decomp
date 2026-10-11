// Game/Unsorted_10AC8AE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_Field04.h"
#include "Game/Struct_10AA3520.h"

void* FUN_10ac89c0();

void FUN_10ac87f0(void* A, int B, int C);

void FUN_10a36b00(int A, void** B, void** C, int D, int E, FString F, int G);

extern Struct_10AA3520* DAT_10f35dec;

// Class_Field04's header places UnknownDC after its base (+0x364 in the compiled layout); this
// function reads the same field at +0xdc, so the field is declared here at its real offset.
struct Struct_10AC8AE0_Field
{
    char Pad00[0xdc];
    FString UnknownDC;
};

// FUNCTION: 0x10AC8AE0 ?FUN_10ac8ae0@@YAXXZ
void FUN_10ac8ae0()
{
    Class_Field04* Field = (Class_Field04*)FUN_10ac89c0();
    if (Field)
    {
        FString A;
        FString B;
        FString C;
        FUN_10ac87f0(Field, (int)&A, (int)&B);
        if (Field->FUN_1098e290(0x4081e, &C) == 0)
            C = ((Struct_10AC8AE0_Field*)Field)->UnknownDC;
        FUN_10a36b00((int)DAT_10f35dec->Unknown08, (void**)&A, (void**)&B, 0, 0, C, 0);
    }
}
