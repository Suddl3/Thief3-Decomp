// Game/AGarrett_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "T3Player/T3PlayerClasses.h"
#include "Game/Class_10C56E40.h"
#include "Game/Class_10C56E40_Field00.h"
#include "Game/Class_10E9C330.h"

Class_10E9C330* FUN_10c56cf0();

// FUNCTION: 0x10B21630 ?Destroy@AGarrett@@UAEXXZ
void AGarrett::Destroy()
{
    Super::Destroy();
    FUN_10c56cf0()->Virtual0(0);
}
