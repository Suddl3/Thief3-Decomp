// Game/APatrolPoint.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"
#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10B95220 ?InternalConstructor@APatrolPoint@@SAXPAX@Z
void APatrolPoint::InternalConstructor(void* X)
{
    new ((EInternal*)X) APatrolPoint();
}

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

// FUNCTION: 0x10BC2EB0 ?Virtual91@APatrolPoint@@UAEHXZ
int APatrolPoint::Virtual91()
{
    int Key = 0x20027;
    int Flag;
    FUN_1098e330(0x8003bd, &Flag);
    if (Flag)
        Key = 0x20368;
    int Result = 0;
    FUN_1098e330(Key, &Result);
    return Result;
}
