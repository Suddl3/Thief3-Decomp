// Game/Unsorted_109523D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cD3DStateCache.h"
#include "Game/Class_10952690.h"
#include "Game/Info_10952690.h"

extern cD3DStateCache* DAT_10f31be0;

// FUNCTION: 0x10952690 ?FUN_10952690@Class_10952690@@QAEXXZ
void Class_10952690::FUN_10952690()
{
    Info_10952690 Info;
    Info.Unknown00 = Unknown80;
    Info.Unknown04 = Unknown84;
    Info.Unknown08 = Unknown88;
    Info.Unknown0C = 0;
    DAT_10f31be0->FUN_10937280(0, &Info);
}
