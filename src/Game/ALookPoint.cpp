// Game/ALookPoint.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"
#include "Engine/EngineClasses.h"
#include "Game/Struct_10BC2D00_List.h"

// FUNCTION: 0x10B93C50 ??0ALookPoint@@QAE@XZ
ALookPoint::ALookPoint()
{
}

// FUNCTION: 0x10BC2D90 ?Virtual72@ALookPoint@@UAEXH@Z
void ALookPoint::Virtual72(int p1)
{
    AAIPathPoint* Point = (AAIPathPoint*)p1;
    if (Point->IsA(AAIPathPoint::StaticClass()) && Point->Virtual94() == 2)
    {
        if (((Struct_10BC2D00_List*)pad.FUN_10bbf5c0())->Count > 0)
        {
            AAIPathPoint* First = ((Struct_10BC2D00_List*)pad.FUN_10bbf5c0())->Items[0];
            if (Point != First)
                pad.FUN_10bc0150(this, First);
        }
        AAIPathPoint::Virtual72((int)Point);
    }
}
