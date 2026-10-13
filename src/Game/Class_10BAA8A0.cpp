// Game/Class_10BAA8A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10BAA8A0.h"
#include "Game/Class_10BC9D40.h"
#include "Game/Class_10E98C8C.h"
#include "AICore/AICoreClasses.h"

// FUNCTION: 0x10BAA8A0 ?FUN_10baa8a0@Class_10BAA8A0@@QAE_NXZ
bool Class_10BAA8A0::FUN_10baa8a0()
{
    if (FUN_10baa750() && FUN_10baa750()->GetCurrent())
        return FUN_10baa750()->GetCurrent()->Virtual3() == 5;
    return false;
}
