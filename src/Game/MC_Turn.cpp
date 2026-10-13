// Game/MC_Turn.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/MC_Turn.h"
#include "Game/cString.h"
#include "Game/Class_10B26930.h"
#include "Game/Class_10C38430.h"
#include "Game/Class_10E99370.h"
#include "Game/Class_10E993C0.h"
#include "Game/Class_10E9AAD0.h"
#include "Game/MC_Follow.h"
#include "Game/MC_PullToPoint.h"
#include "Game/Info_10C2F870.h"
#include "Game/Struct_10C35670.h"
#include "Game/Class_10C38610.h"
#include "Game/Class_10E993C4.h"
#include "Game/MC_FollowAbsolute.h"
#include "Game/Class_10E9AF04.h"

extern const char DAT_10e9adc8[];

// FUNCTION: 0x10C365D0 ?FUN_10c365d0@MC_Turn@@UAEXHM@Z
void MC_Turn::FUN_10c365d0(int A, float B)
{
    if (Unknown70)
        return;
    if (B == Unknown68)
        Unknown4C = true;
}

// FUNCTION: 0x10C365F0 ?FUN_10c365f0@MC_Turn@@UAEXHH@Z
void MC_Turn::FUN_10c365f0(int A, int B)
{
    if (Unknown70 == 1)
        return;
    if (Unknown6C == 0 || Unknown6C == A)
        Unknown4C = true;
}

// FUNCTION: 0x10C36860 ?GetControllerName@MC_Turn@@QAE?AVcString@@XZ
cString MC_Turn::GetControllerName()
{
    return cString(DAT_10e9adc8);
}
