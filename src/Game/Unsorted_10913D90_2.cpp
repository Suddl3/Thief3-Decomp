// Game/Unsorted_10913D90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_109140C0.h"
#include "Game/Class_10914D60.h"

// FUNCTION: 0x109140C0 ?FUN_109140c0@Class_109140C0@@QAEXHAAVClass_109081E0@@H@Z
void Class_109140C0::FUN_109140c0(int A, Class_109081E0& B, int C)
{
    for (int i = Unknown04 - 1; i >= 0; i--)
    {
        Unknown0C[i]->FUN_10915160(A, B, C);
        if (B.Unknown00 && ((int*)B.Unknown00)[-1])
            break;
    }
}
