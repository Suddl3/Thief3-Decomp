// Game/Unsorted_10C5B9D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10A32000.h"
#include "Game/Class_10C5B9D0.h"
#include "Game/Class_10C5BA20.h"
#include "Game/Struct_10C5BA20.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x10C5B9D0 ?FUN_10c5b9d0@Class_10C5B9D0@@QAEXXZ
void Class_10C5B9D0::FUN_10c5b9d0()
{
    if (Unknown3C.Unknown00 > 1)
    {
        Class_10A32000* Arr = &Unknown3C;
        int Index = Unknown3C.Unknown00 - 1;
        if (Index != Arr->Unknown00 - 1)
        {
            int From = Index + 1;
            int To = Index;
            int Size = Arr->Unknown00 - Index - 1;
            if (From != To && Size)
                memmove(Arr->Unknown08 + To, Arr->Unknown08 + From, Size);
        }
        Arr->FUN_10a32000(Arr->Unknown00 - 1);
    }
}

// FUNCTION: 0x10C5BA20 ?FUN_10c5ba20@Class_10C5BA20@@QAEPAV1@ABV1@@Z
Class_10C5BA20* Class_10C5BA20::FUN_10c5ba20(const Class_10C5BA20& A)
{
    Unknown00 = A.Unknown00;
    Unknown04 = A.Unknown04;
    Unknown08 = A.Unknown08;
    Unknown0C = A.Unknown0C;
    Unknown18 = A.Unknown18;
    Unknown1C = A.Unknown1C;
    Unknown20 = A.Unknown20;
    Unknown24 = A.Unknown24;
    return this;
}
