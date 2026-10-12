// Game/Unsorted_109526D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cD3DStateCache.h"

extern cD3DStateCache* DAT_10f31be0;

class Class_109526D0
{
public:
    char Unknown00[0x38];
    int Unknown38;

    void FUN_109526d0();
};

// FUNCTION: 0x109526D0 ?FUN_109526d0@Class_109526D0@@QAEXXZ
void Class_109526D0::FUN_109526d0()
{
    DAT_10f31be0->SetVertexShaderConstantScalar(0x10, Unknown38);
}
