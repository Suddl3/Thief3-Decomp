// Game/Unsorted_10C276C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10AA82C0.h"
#include "Game/Class_10C276C0.h"

// FUNCTION: 0x10C276C0 ?FUN_10c276c0@Class_10C276C0@@QAEXXZ
void Class_10C276C0::FUN_10c276c0()
{
    void* Ptr = Unknown14->FUN_10aa82c0();
    int Value = *(int*)Ptr;
    if (Value != 0)
    {
        cIntArray Items;
        FUN_10c27630(Items);
        UpdateFlags((int)&Items);
    }
}
