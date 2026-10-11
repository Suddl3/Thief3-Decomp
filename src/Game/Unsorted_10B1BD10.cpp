// Game/Unsorted_10B1BD10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B1D170.h"
#include "Game/Class_10E79488.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10B1BD70.h"

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B1BE80 ?FUN_10b1be80@Class_10E79488@@UAEXH@Z
void Class_10E79488::FUN_10b1be80(int A)
{
    if (DAT_10f35dec)
    {
        Class_10B1BD70* Obj = DAT_10f35dec->UnknownBC;
        if (Obj)
            Obj->FUN_10b1bd70();
    }
}

// FUNCTION: 0x10B1D170 ?FUN_10b1d170@Class_10B1D170@@QAEXXZ
void Class_10B1D170::FUN_10b1d170()
{
    FUN_10b1c520();
    FUN_10b1c5c0();
    FUN_10b1cab0();
}
