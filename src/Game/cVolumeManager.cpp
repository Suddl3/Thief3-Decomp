// Game/cVolumeManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/cActorManager.h"
#include "Game/Class_10A4C550.h"
#include "Game/Class_10AA6290.h"
#include "Game/cVolumeManager.h"
#include "Core/Core.h"
#include "Game/Class_10A69170.h"
#include "Game/Class_10A6A140.h"
#include "Game/Class_10E6B978.h"
#include "Game/Class_10E6BBCC.h"
#include <vector>
#include "Game/Class_10A111B0.h"
#include "Game/Class_10AB0400.h"
#include "Game/Struct_10AB0400.h"
#include "Game/Class_10A71C40.h"
#include "Game/Class_10A4C550_Iterator.h"
#include "Game/Struct_10A4C940_Node.h"

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

class cVolume
{
public:
    bool ContainsPoint(FVector V);
};

// FUNCTION: 0x10A70FA0 ?ContainsPoint@cVolumeManager@@UAE_NABVFVector@@PAVcVolume@@@Z
bool cVolumeManager::ContainsPoint(const FVector& A, cVolume* B)
{
    return B->ContainsPoint(A);
}

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

// FUNCTION: 0x10A73200 ?FindValue@cVolumeManager@@UAEPAHI@Z
int* cVolumeManager::FindValue(unsigned int Key)
{
    Class_10A4C550_Iterator It = m_Values.FUN_10a4c550(Key);
    return (int*)&It.Unknown00->Unknown0C;
}
