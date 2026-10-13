// Game/Unsorted_109E3CB0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Struct_109E3CB0.h"
#include "AICore/AICoreClasses.h"

class ULevel;

// Spawns an actor of Class in Level (its SpawnActor is slot 46); the FRotator H is a rotation rate.
AAIPathPoint* FUN_10a49f00(ULevel* Level, UClass* Class, int C, int D, FVector E, FVector F, FRotator G,
                           FRotator H, bool I);

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x109E3CB0 ?SpawnAIPathPoint@@YGPAVAAIPathPoint@@PAVUClass@@@Z
AAIPathPoint* __stdcall SpawnAIPathPoint(UClass* Class)
{
    AAIPathPoint* Point = FUN_10a49f00(DAT_10f35dec->UnknownCC->Unknown00, Class, 0, 0, FVector(0, 0, 0),
                                       FVector(0, 0, 0), FRotator(0, 0, 0), FRotator(0, 0, 0), false);
    Point->bShouldTickInAppTime = 1;
    Point->FUN_10b06230(0x4000);
    return Point;
}
