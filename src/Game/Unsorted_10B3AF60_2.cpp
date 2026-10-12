// Game/Unsorted_10B3AF60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B3B220.h"
#include "Game/Class_10B3C740.h"
#include "Game/Struct_10B53A00.h"
#include "Game/Class_10B3B220_Item.h"
#include "Game/Class_10B3B220_Unknown0B0.h"

// FUNCTION: 0x10B3B220 ?GrabItem@Class_10B3B220@@QAEXPAUStruct_10B53A00@@@Z
void Class_10B3B220::GrabItem(Struct_10B53A00* P)
{
    Class_10B3B220_Item* Item = P->Unknown0B0->Virtual6();
    Item->Virtual19(1);
    if (Item->Unknown104)
        P->Unknown450 |= 2;
}

// FUNCTION: 0x10B3C740 ?FUN_10b3c740@Class_10B3C740@@QAEHM@Z
int Class_10B3C740::FUN_10b3c740(float p1)
{
    float Out;
    return FUN_10b3c0a0(p1, &Out, &p1);
}
