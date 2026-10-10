// Game/Unsorted_10C22BE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10C22CE0.h"

struct Struct_10C7D570
{
    char Unknown00[0x2C];
    Struct_10C22CE0 Unknown2C;
};

class Class_10943600
{
public:
    void FUN_10da4f50(int A);

    int Unknown00;
    int Unknown04;
    Struct_10C22CE0* Unknown08;
};

class Class_10C22CE0
{
public:
    bool FUN_10c22ce0(Class_10943600* A, int B, int C, int D);
    bool FUN_10c22420(Struct_10C22CE0* A, int B, int C, Struct_10C22CE0* D, int E);

    Class_10C7D570* Unknown00;
    char Unknown04[0x3C];
    Struct_10C22CE0 Unknown40;
    Struct_10C22CE0 Unknown4C;
};

// FUNCTION: 0x10C22CE0 ?FUN_10c22ce0@Class_10C22CE0@@QAE_NPAVClass_10943600@@HHH@Z
bool Class_10C22CE0::FUN_10c22ce0(Class_10943600* A, int B, int C, int D)
{
    Struct_10C7D570* R = (Struct_10C7D570*)Unknown00->FUN_10c7d570();
    Struct_10C22CE0* Src = &R->Unknown2C;
    Unknown40 = *Src;
    if (!FUN_10c22420(&Unknown4C, B, C, &Unknown40, D))
    {
        A->Unknown00 = 0;
        A->FUN_10da4f50(1);
        *A->Unknown08 = Unknown4C;
        return false;
    }
    return true;
}
