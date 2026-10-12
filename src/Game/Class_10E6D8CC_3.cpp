// Game/Class_10E6D8CC_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10E6D8CC.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x10AA6800 ?FUN_10aa6800@Class_10E6D8CC@@UAEHH@Z
int Class_10E6D8CC::FUN_10aa6800(int Index)
{
    cIntArray* List = &Unknown04;
    if (Index != List->Unknown00 - 1)
    {
        int From = Index + 1;
        int To = Index;
        int Count = List->Unknown00 - Index - 1;
        if (From != To && Count)
            memmove(List->Unknown08 + To, List->Unknown08 + From, Count * sizeof(int));
    }
    List->SetCount(List->Unknown00 - 1);
    return List->Unknown00 == 0;
}
