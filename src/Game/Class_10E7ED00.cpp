// Game/Class_10E7ED00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Object_10A18FC0.h"

Object_10A18FC0* FUN_10a18fc0();

class Class_10E7ED00
{
public:
    void FUN_10b3e260();

    char Unknown00[0x78];
    int Unknown78;
    int Unknown7C;
    int Unknown80;
    int Unknown84;
    float Unknown88;
    float Unknown8C;
    bool Unknown90;
};

// FUNCTION: 0x10B3E260 ?FUN_10b3e260@Class_10E7ED00@@QAEXXZ
void Class_10E7ED00::FUN_10b3e260()
{
    Unknown78 = 0;
    Unknown7C = 0;
    Unknown88 = (float)FUN_10a18fc0()->Virtual2();
    Unknown8C = (float)FUN_10a18fc0()->Virtual3();
    Unknown80 = 0;
    Unknown84 = 0;
    Unknown90 = true;
}
