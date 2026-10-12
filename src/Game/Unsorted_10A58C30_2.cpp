// Game/Unsorted_10A58C30_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"

// FUNCTION: 0x10A58CB0 ?CopyFrom@cIntArray@@QAEXABV1@@Z
void cIntArray::CopyFrom(const cIntArray& Other)
{
    SetCount(Other.Count);
    for (int i = 0; i < Count; i++)
        Data[i] = Other.Data[i];
}
