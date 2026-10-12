// Game/Class_10E49F38_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cD3DStateCache.h"
#include "Game/Class_10E49F38.h"

extern cD3DStateCache* DAT_10f31be0;

// FUNCTION: 0x10934860 ?FUN_10934860@Class_10E49F38@@UAEHH@Z
int Class_10E49F38::FUN_10934860(int A)
{
    if (Unknown14 == 0)
        return 0x80040721;
    DAT_10f31be0->SetStreamSource(Unknown14, Unknown1C);
    return 0;
}
