// Game/Unsorted_10C16300_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C16300.h"
#include "Engine/EngineClasses.h"

// FUNCTION: 0x10C16300 ?GetActor@Class_10C16300@@QAEPAVAActor@@XZ
AActor* Class_10C16300::GetActor()
{
    if (Unknown04 && Unknown04->IsA(AActor::StaticClass()))
        return (AActor*)Unknown04;
    return 0;
}
