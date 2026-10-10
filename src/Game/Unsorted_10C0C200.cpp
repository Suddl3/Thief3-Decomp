// Game/Unsorted_10C0C200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C0C8E0.h"

double FUN_10c00480();

class Class_10C0C8E0_Unknown0C
{
public:
    char Unknown00[0x2C];
    int Unknown2C;
    int Unknown30;
    char Unknown34[0x28];
    float Unknown5C;
};

// FUNCTION: 0x10C0C410 ?FUN_10c0c410@Class_10C0C8E0@@QAEXXZ
void Class_10C0C8E0::FUN_10c0c410()
{
    for (int i = 0; i < Unknown04; i++)
    {
        Class_10C0C8E0_Unknown0C* Item = Unknown0C[i];
        float Old = Item->Unknown5C;
        if (FUN_10c00480() - Old > 60.0)
            FUN_10c0c200(Item->Unknown30, Item->Unknown2C);
    }
}
