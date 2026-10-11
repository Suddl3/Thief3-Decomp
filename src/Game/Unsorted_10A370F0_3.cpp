// Game/Unsorted_10A370F0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_1096D780.h"
#include "Game/Class_1096D780_Field98.h"

// Class_10DA91B0 as Game/Class_10DA91B0.h declares it, without Pad18: the
// frame of the local below holds 0x18 bytes, so the object is 0x18 long.
class Class_10DA91B0
{
public:
    Class_10DA91B0();
    ~Class_10DA91B0();

    void FUN_10da91d0();

    char Unknown00[0x18];
};

class Class_10DA0870
{
public:
    bool FUN_10da0c00(FVector* A, Class_10DA91B0* B);
};

// FUNCTION: 0x10A370F0 ?FUN_10a370f0@@YA_NPAVClass_1096D780@@PAVFVector@@@Z
bool FUN_10a370f0(Class_1096D780* A, FVector* B)
{
    if (A->UnknownB0 == 0)
    {
        return ((Class_1096D780_Field98*)A->Get())->Virtual43(A, *B, 1, 0, 0) != 0;
    }
    Class_10DA91B0 Temp;
    if (A->UnknownB0->FUN_10da0c00(B, &Temp))
    {
        ((Class_1096D780_Field98*)A->Get())->Virtual43(A, *B, 0, 0, 0);
        return true;
    }
    return false;
}
