// Game/Unsorted_10BF90A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10971570.h"

extern UClass* DAT_10f34910;

UClass* FUN_10970f30(const char* Name);

void FUN_10970780();

// FUNCTION: 0x10BF9510 ?FUN_10bf9510@@YA_NPAVUObject@@@Z
bool FUN_10bf9510(UObject* Obj)
{
    if (Obj)
    {
        if (!DAT_10f34910)
        {
            DAT_10f34910 = FUN_10970f30("Engine");
            FUN_10970780();
        }
        if (Obj->IsA(DAT_10f34910))
        {
            bool Result;
            ((Class_10971570*)Obj)->FUN_10971570(0x2000533, &Result);
            return !Result;
        }
    }
    return false;
}
