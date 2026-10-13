// Game/Unsorted_10B18D20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <stdlib.h>
#include "Game/Static_10B18D00.h"
#include "Game/Class_10B22020.h"

class Class_10B22020;

int WrapAngle(int Value);

class Class_10A37860
{
public:
    bool FUN_10a37860();

    char Unknown00[0x10];
    int Unknown10;
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x10];
    Class_10A37860* Unknown10;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

// FUNCTION: 0x10B18D20 ?FUN_10b18d20@Static_10B18D00@@QAEXPAVClass_10B22020@@@Z
void Static_10B18D00::FUN_10b18d20(Class_10B22020* A)
{
    if (DAT_10f3a3d8->Unknown10->FUN_10a37860())
        return;
    Class_10A37860* Obj = DAT_10f3a3d8->Unknown10;
    int Delta = WrapAngle(Obj->Unknown10 - A->Unknown404);
    int Limit = (int)(A->Unknown454 * 165000.0f);
    if (abs(Delta) > Limit)
    {
        if (Delta > 0)
            A->Unknown410 = (float)Limit;
        else
            A->Unknown410 = (float)-Limit;
    }
    else
        A->Unknown410 = (float)Delta;
}
