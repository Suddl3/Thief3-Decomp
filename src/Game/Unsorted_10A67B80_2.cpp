// Game/Unsorted_10A67B80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Engine/EngineClasses.h"
#include "Game/Class_10A67CA0.h"

struct Struct_10AA3520
{
    char Unknown00[8];
    UObject* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A67CA0 ?ResetSimtimePlayedTimer@Class_10A67CA0@@QAEXXZ
void Class_10A67CA0::ResetSimtimePlayedTimer()
{
    UObject* Obj = DAT_10f35dec->Unknown08;
    if (Obj)
        Cast<APlayerPawn>(Obj)->SimtimePlayedTimer = 0.0f;
}
