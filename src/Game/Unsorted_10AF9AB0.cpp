// Game/Unsorted_10AF9AB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AF4C80.h"
#include "Game/Class_10AF9AB0.h"

// FUNCTION: 0x10AF9AB0 ?FUN_10af9ab0@Class_10AF9AB0@@QAEXGG@Z
void Class_10AF9AB0::FUN_10af9ab0(unsigned short A, unsigned short B)
{
    int First = A;
    int Last = B;
    for (int Step = First; Step < Last; Step++)
    {
        int Index = Unknown10.FUN_10af4c80(1, 4) + 1;
        if (Index == 0)
        {
            Unknown08 |= 2;
        }
        else
        {
            Unknown10.Unknown00[Index - 1] |= 2;
            if ((Unknown10.Unknown00[Index - 1] & 2) != 0 && Index - 1 < Unknown0C)
                Unknown0C = Index - 1;
        }
    }
}
