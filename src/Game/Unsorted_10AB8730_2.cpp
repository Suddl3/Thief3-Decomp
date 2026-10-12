// Game/Unsorted_10AB8730_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AB8D30.h"
#include "Game/cIntArray.h"

// FUNCTION: 0x10AB8D30 ?Init@Class_10AB8D30@@QAEXHHHH@Z
void Class_10AB8D30::Init(int A, int B, int C, int D)
{
    Unknown00 = A;
    Unknown04 = B;
    Unknown08 = 0;
    m_Current = C;
    Unknown10 = 0;
    cIntArray* Arr = &m_Items;
    Arr->SetCount(0);
    int Index = Arr->Unknown00;
    Arr->SetCount(Index + 1);
    Arr->Unknown08[Index] = D;
    Arr = &m_Values;
    Arr->SetCount(0);
    int Index2 = Arr->Unknown00;
    Arr->SetCount(Index2 + 1);
    Arr->Unknown08[Index2] = m_Current;
}
