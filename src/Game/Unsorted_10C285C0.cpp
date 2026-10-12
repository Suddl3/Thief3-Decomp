// Game/Unsorted_10C285C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C16580.h"
#include "Game/Class_10C28B10.h"
#include "Game/cString.h"
#include "Game/Class_10C285C0.h"
#include "Game/Class_10C28740.h"

double GetTimeSeconds();

int FUN_10c28480(int A, cString* B, cString* C);

// FUNCTION: 0x10C285C0 ?ResolveHeadFlex@Class_10C285C0@@QAEXXZ
void Class_10C285C0::ResolveHeadFlex()
{
    cString Head("head");
    cString HeadFlex("head_flex");
    m_HeadFlex = FUN_10c28480(Unknown00, &HeadFlex, &Head);
}

// FUNCTION: 0x10C28740 ?ResolveSpineFlex@Class_10C28740@@QAEXXZ
void Class_10C28740::ResolveSpineFlex()
{
    cString Spine("M1 Spine1");
    {
        cString SpineFlex("spine_flex2");
        m_SpineFlex = FUN_10c28480(Unknown00, &SpineFlex, &Spine);
    }
    if (m_SpineFlex)
        return;
}

// FUNCTION: 0x10C28B10 ??0Class_10C28B10@@QAE@HH@Z
Class_10C28B10::Class_10C28B10(int A, int B) : Unknown00(A), Unknown08(B)
{
    Unknown10 = GetTimeSeconds();
}
