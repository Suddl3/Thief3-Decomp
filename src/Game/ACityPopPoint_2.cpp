// Game/ACityPopPoint_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Engine/EngineClasses.h"
#include "AICore/AICoreClasses.h"

// FUNCTION: 0x10BC2E50 ?Virtual72@APatrolPoint@@UAEXH@Z
void APatrolPoint::Virtual72(int Param)
{
    AAIPathPoint* Src = (AAIPathPoint*)Param;
    if (Src->IsA(AAIPathPoint::StaticClass()))
    {
        if (Src->Virtual96() != 1)
            AAIPathPoint::Virtual72(Param);
    }
}
