// Game/Unsorted_10A370F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_1096D780.h"
#include "Game/Class_1096D780_Field98.h"
#include "Game/Struct_10B1DCA0.h"
#include "Game/Class_10DA0870.h"

class Class_1096D780;

// FUNCTION: 0x10A37270 ?FUN_10a37270@@YA_NPAVClass_1096D780@@ABVFRotator@@@Z
bool FUN_10a37270(Class_1096D780* A, const FRotator& B)
{
    bool Result = static_cast<Class_1096D780_Field98*>(A->Get())->Virtual41(A, B) != 0;
    if (!A->UnknownB0)
        return Result;
    Struct_10B1DCA0 Coords(FVector(0.0f, 0.0f, 0.0f));
    Coords.FUN_109620b0(B);
    A->UnknownB0->FUN_10da0870(&Coords);
    return true;
}
