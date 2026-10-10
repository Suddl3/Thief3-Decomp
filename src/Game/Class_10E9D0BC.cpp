// Game/Class_10E9D0BC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C685F0.h"
#include "Game/Class_10E9D0BC.h"
#include "Game/Config.h"

// FUNCTION: 0x10C685F0 ?FUN_10c685f0@Class_10C685F0@@QAEXXZ
void Class_10C685F0::FUN_10c685f0()
{
    FUN_10c682d0();
    Unknown74 = true;
    Unknown75 = true;
}

// FUNCTION: 0x10C686C0 ??0Class_10E9D0BC@@QAE@XZ
Class_10E9D0BC::Class_10E9D0BC()
    : DefaultInnerRadius(400.0f), DefaultOuterRadius(1600.0f)
{
    Config::Instance()->GetFloat("Cadence", "DefaultInnerRadius", &DefaultInnerRadius, 0);
    Config::Instance()->GetFloat("Cadence", "DefaultOuterRadius", &DefaultOuterRadius, 0);
}
