// Game/Unsorted_10B8B700.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/FCoords.h"
#include "Game/Object_10B8B6A0.h"

// FUNCTION: 0x10B8B700 ?FUN_10b8b700@@YA?AVFVector@@PAVObject_10B8B6A0@@@Z
FVector FUN_10b8b700(Object_10B8B6A0* A)
{
    FCoords Coords = A->Virtual44();
    FVector Offset;
    Offset.X = Coords.XAxis.X * 60.0f;
    Offset.Y = Coords.XAxis.Y * 60.0f;
    Offset.Z = Coords.XAxis.Z * 60.0f;
    return Coords.Origin + Offset;
}
