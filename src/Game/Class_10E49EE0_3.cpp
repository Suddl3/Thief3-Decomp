// Game/Class_10E49EE0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cD3DStateCache.h"
#include "Game/Class_10E49EE0.h"

extern cD3DStateCache* DAT_10f31be0;

// FUNCTION: 0x109342F0 ?FUN_109342f0@Class_10E49EE0@@UAEHH@Z
int Class_10E49EE0::FUN_109342f0(int A)
{
    if (m_Member == 0)
        return 0x80040721;
    DAT_10f31be0->SetStreamSource(m_Member, Unknown20);
    return 0;
}
