// Game/AAIPathPoint_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/Class_10BBF5D0.h"
#include "AICore/AICoreClasses.h"

class AAIPathPoint;

// FUNCTION: 0x10BC2C90 ?FUN_10bc2c90@AAIPathPoint@@QAEXPAV1@@Z
void AAIPathPoint::FUN_10bc2c90(AAIPathPoint* Param)
{
    if (Param->IsA(AAIPathPoint::StaticClass()) && Param->Virtual94() == 1)
    {
        pad.FUN_10bc0eb0(this, Param);
        AAIPathPoint::Virtual72((int)Param);
    }
}
