// Game/Unsorted_10BFFA60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/cIntArray.h"
#include "Game/Class_1096D780.h"
#include "AICore/AICoreClasses.h"

class AAIPathPoint;

class Class_10BFF980_Param;

class Class_10BBEFC0
{
public:
    AAIPathPoint* FUN_10bbefc0();
};

void SplitPointsByClass(Class_10BFF980_Param* Value, cIntArray* B, cIntArray* A);

// FUNCTION: 0x10BFFDE0 ?FUN_10bffde0@@YGHPAVClass_1096D780@@@Z
int __stdcall FUN_10bffde0(Class_1096D780* Param)
{
    AAIPathPoint* Point = ((Class_10BBEFC0*)Param)->FUN_10bbefc0();
    if (Point != 0 && Point->IsA(AAIPathPoint::StaticClass()) && Point->Virtual94() == 1 && Point->FUN_10bbefa0() != 0)
    {
        cIntArray B;
        cIntArray A;
        SplitPointsByClass((Class_10BFF980_Param*)Param->Get(), &B, &A);
        return Point->FUN_10bbf140(&B, &A);
    }
    return 0;
}
