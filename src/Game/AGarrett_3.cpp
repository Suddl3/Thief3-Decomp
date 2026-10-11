// Game/AGarrett_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "T3Player/T3PlayerClasses.h"
#include "Game/Class_10C56E40.h"
#include "Game/Class_10C56E40_Field00.h"
#include "Game/SoundSimulator.h"

SoundSimulator* GetSoundSimulator();

// FUNCTION: 0x10B21630 ?Destroy@AGarrett@@UAEXXZ
void AGarrett::Destroy()
{
    Super::Destroy();
    GetSoundSimulator()->Virtual0(0);
}
