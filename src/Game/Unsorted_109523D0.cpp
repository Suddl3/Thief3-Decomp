// Game/Unsorted_109523D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cD3DStateCache.h"
#include "Game/Class_109523D0.h"
#include "Game/Class_10952640.h"
#include "Game/Info_10952690.h"

extern cD3DStateCache* DAT_10f31be0;

// FUNCTION: 0x109523D0 ?HasAllBits@Class_109523D0@@QAE_NH@Z
bool Class_109523D0::HasAllBits(int Mask)
{
    for (int i = 0; i < 9; i++)
    {
        int Bit = 1 << i;
        if ((Mask & Bit) && !(m_Flags & Bit))
            return false;
    }
    return true;
}

// FUNCTION: 0x10952640 ?FUN_10952640@Class_10952640@@QAEXXZ
void Class_10952640::FUN_10952640()
{
    float W = 0.0f;
    if (Unknown4C)
        W = Unknown7C;
    Info_10952690 Info;
    Info.Unknown0C = W;
    Info.Unknown00 = Unknown70;
    Info.Unknown04 = Unknown74;
    Info.Unknown08 = Unknown78;
    DAT_10f31be0->FUN_10937280(0, &Info);
}
