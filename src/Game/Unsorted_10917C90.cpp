// Game/Unsorted_10917C90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6D8F0.h"
#include "Game/Struct_10917D20.h"
#include "Game/Class_109242E0.h"

class Class_1091E940
{
public:
    void SetProjection(int A, int B);

    int Unknown00;
    Struct_10917D20 Unknown04;
    char Unknown44[0x13C];
    float Unknown180;
    int Unknown184;
};

extern Class_1091E940* DAT_10f2c738;

extern Class_109242E0* DAT_10f319a0;

// FUNCTION: 0x10917D20 ?FUN_10917d20@@YAXPBUStruct_10917D20@@MHH@Z
void FUN_10917d20(const Struct_10917D20* Matrix, float A, int B, int C)
{
    if (DAT_10f2c738)
    {
        DAT_10f2c738->Unknown184 = B;
        DAT_10f2c738->Unknown180 = A;
        DAT_10f2c738->Unknown04 = *Matrix;
        DAT_10f2c738->SetProjection(C, 1);
        DAT_10f319a0->Class_10E6D8F0::FUN_10c3e130((int)DAT_10f2c738);
    }
}
