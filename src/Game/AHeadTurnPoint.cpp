// Game/AHeadTurnPoint.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"
#include "Engine/EngineClasses.h"
#include "Game/Struct_10BC2D00_List.h"

// FUNCTION: 0x10B93B30 ??0AHeadTurnPoint@@QAE@XZ
AHeadTurnPoint::AHeadTurnPoint()
{
}

// FUNCTION: 0x10BC2D00 ?Virtual72@AHeadTurnPoint@@UAEXH@Z
void AHeadTurnPoint::Virtual72(int A)
{
    AAIPathPoint* Param = (AAIPathPoint*)A;
    if (Param->IsA(AAIPathPoint::StaticClass()) && Param->Virtual94() == 2)
    {
        if (((Struct_10BC2D00_List*)pad.FUN_10bbf5d0())->Count > 0)
        {
            AAIPathPoint* First = ((Struct_10BC2D00_List*)pad.FUN_10bbf5d0())->Items[0];
            if (Param != First)
                pad.FUN_10bc0150(this, First);
        }
        AAIPathPoint::Virtual72((int)Param);
    }
}
