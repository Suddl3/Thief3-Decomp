// Game/Unsorted_109419E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091CCB0.h"
#include "Game/Class_10941AC0.h"

class Class_109415F0
{
public:
    void FUN_109415f0();

    char Unknown00[0x44];
};

// FUNCTION: 0x10941AC0 ?Reset@Class_10941AC0@@QAEXXZ
void Class_10941AC0::Reset()
{
    for (int i = 0; i < Unknown04.Unknown00; i++)
        ((Class_109415F0*)Unknown04.Unknown08)[i].FUN_109415f0();
    Unknown04.FUN_1091c8d0(0);
    Unknown1C = 0;
    Unknown18 = -1;
    Unknown00 = false;
}
