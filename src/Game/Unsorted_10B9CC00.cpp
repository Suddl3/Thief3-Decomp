// Game/Unsorted_10B9CC00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10B9CC00.h"

float appFrand();

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

struct Struct_10B9CC00
{
    float Unknown00;
    char Unknown04[0x18];
    unsigned char Unknown1C;
};

// FUNCTION: 0x10B9CC00 ?FUN_10b9cc00@Class_10B9CC00@@QAEHPAUStruct_10B9CC00@@@Z
int Class_10B9CC00::FUN_10b9cc00(Struct_10B9CC00* Arg)
{
    if (Arg)
    {
        switch (Arg->Unknown1C)
        {
        case 0x18:
            return 0x4c;
        case 0x19:
            return 0x7b;
        case 0x14:
        case 0x1b:
            break;
        case 1:
            if (Unknown0C->Unknown08->FUN_10dbd510(0x100837)->FUN_10bbdb40() < Arg->Unknown00)
                return 0;
        default:
            {
                Class_10C7D570* Obj = Unknown0C->Unknown08;
                if (appFrand() < Obj->FUN_10dbd510(0x100835)->FUN_10bbdb40())
                    return 0x28;
            }
            break;
        }
    }
    return 0;
}
