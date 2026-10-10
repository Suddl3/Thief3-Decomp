// Game/Class_10E698F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Window.h"
#include "Game/Class_10E698F0.h"

// FUNCTION: 0x10A5DAE0 ?PlacedPosition@Class_10E698F0@@UAE?AVFVector@@XZ
FVector Class_10E698F0::PlacedPosition()
{
    FVector Position = Window::PlacedPosition();
    return Position + Unknown1BC;
}
