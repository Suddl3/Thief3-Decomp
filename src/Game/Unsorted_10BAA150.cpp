// Game/Unsorted_10BAA150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10991FF0.h"
#include "Game/Class_10BAA150.h"

// FUNCTION: 0x10BAA150 ?FUN_10baa150@Class_10BAA150@@QAE?AVFVector@@XZ
FVector Class_10BAA150::FUN_10baa150()
{
    FVector Result = Unknown34->Unknown2C;
    Result.Z -= Unknown34->FUN_10991ff0();
    return Result;
}
