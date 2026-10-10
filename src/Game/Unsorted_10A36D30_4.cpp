// Game/Unsorted_10A36D30_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10A36CD0.h"

struct Struct_10AA3520
{
    char Unknown00[0x08];
    Struct_10A36CD0* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A36D30 ?FUN_10a36d30@@YAHXZ
int FUN_10a36d30()
{
    Struct_10A36CD0* Obj = DAT_10f35dec->Unknown08;
    if (Obj)
    {
        if (Obj->Unknown274)
            return 1;
        if (!Obj->Virtual123())
            return 2;
        if (Obj->Virtual85() == 1)
            return 3;
    }
    return 0;
}
