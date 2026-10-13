// Game/cVolumeManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Engine/EngineClasses.h"
#include "Game/cActorManager.h"
#include "Game/Class_10A4C550.h"
#include "Game/Class_10AA6290.h"
#include "Game/cVolumeManager.h"

class FVector;

class cVolume;

Class_10AA6290* FUN_10aa6040();

struct Class_10A71380_Arg2
{
    char Unknown00[4];
    int Unknown04;
};

struct Class_10A71380_Arg3
{
    char Unknown00[4];
    BYTE* Unknown04;
};

// FUNCTION: 0x10A71380 ?Virtual8@cVolumeManager@@UAEXHHH@Z
void cVolumeManager::Virtual8(int A, int B, int C)
{
    AVolume* Volume = (AVolume*)A;
    if (Volume->IsA(AVolume::StaticClass()))
    {
        if (((Class_10A71380_Arg2*)B)->Unknown04 == 0x8038b)
        {
            BYTE* Flag = ((Class_10A71380_Arg3*)C)->Unknown04;
            Virtual7((int)Volume);
            FUN_10aa6040()->FUN_10aa6290((int)Volume);
            if (!Volume->bDeleteMe && !(Volume->ObjectFlags & 0x800000) && Flag && !(*Flag & 1))
                FUN_10a71210(Volume);
        }
    }
}
