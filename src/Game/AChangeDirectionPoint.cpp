// Game/AChangeDirectionPoint.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10BBF5D0.h"

class AAIPathPoint;

// FUNCTION: 0x10B93950 ??0AChangeDirectionPoint@@QAE@XZ
AChangeDirectionPoint::AChangeDirectionPoint()
{
}

// FUNCTION: 0x10BC2C10 ?FUN_10bbeec0@AChangeDirectionPoint@@UAEXH@Z
void AChangeDirectionPoint::Virtual72(int p1)
{
    AAIPathPoint* Src = (AAIPathPoint*)p1;
    if (Src->IsA(AAIPathPoint::StaticClass()) && Src->Virtual94() != 1 && Src->Virtual94() != 7)
    {
        pad.FUN_10bc0eb0(this, Src);
        AAIPathPoint::Virtual72((int)Src);
    }
}
