// Game/Unsorted_10AB8730_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AB8D30.h"
#include "Game/Class_10BFBD70.h"

// FUNCTION: 0x10AB8D30 ?FUN_10ab8d30@Class_10AB8D30@@QAEXHHHH@Z
void Class_10AB8D30::FUN_10ab8d30(int A, int B, int C, int D)
{
    Unknown00 = A;
    Unknown04 = B;
    Unknown08 = 0;
    Unknown0C = C;
    Unknown10 = 0;
    Class_10BFBD70* Arr = &Unknown18;
    Arr->FUN_10bfbd70(0);
    int Index = Arr->Unknown00;
    Arr->FUN_10bfbd70(Index + 1);
    Arr->Unknown08[Index] = D;
    Arr = &Unknown24;
    Arr->FUN_10bfbd70(0);
    int Index2 = Arr->Unknown00;
    Arr->FUN_10bfbd70(Index2 + 1);
    Arr->Unknown08[Index2] = Unknown0C;
}
