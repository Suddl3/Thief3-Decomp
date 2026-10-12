// Game/cIntArray_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"

// FUNCTION: 0x10A58C70 ?AppendAll@cIntArray@@QAEXABV1@@Z
void cIntArray::AppendAll(const cIntArray& Other)
{
    int OldCount = Count;
    SetCount(Other.Count + OldCount);
    for (int i = 0; i < Other.Count; i++)
        Data[OldCount + i] = Other.Data[i];
}
