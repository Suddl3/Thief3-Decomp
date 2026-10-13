// Game/Unsorted_10A33F30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10971570.h"

class UClass;

extern UClass* DAT_10f34910;

extern UClass* DAT_10f34998;

UClass* FUN_10970f30(char const* Name);

void FUN_10970780();

UClass* FUN_10994630(char const* Name);

void FUN_10994c40();

// FUNCTION: 0x10A33F30 ?FUN_10a33f30@@YA_NPAVUObject@@@Z
bool FUN_10a33f30(UObject* Obj)
{
    if (!Obj)
        return false;
    bool Flag;
    ((Class_10971570*)Obj)->FUN_10971570(0x2000533, &Flag);
    if (!DAT_10f34910)
    {
        DAT_10f34910 = FUN_10970f30("Engine");
        FUN_10970780();
    }
    if (Obj->IsA(DAT_10f34910) && !Flag)
        return false;
    if (!DAT_10f34998)
    {
        DAT_10f34998 = FUN_10994630("Engine");
        FUN_10994c40();
    }
    if (Obj->IsA(DAT_10f34998))
        return false;
    return Flag == 0x0e;
}
