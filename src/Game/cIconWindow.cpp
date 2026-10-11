// Game/cIconWindow.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Window.h"
#include "Game/cIconWindow.h"

// FUNCTION: 0x10A5DAE0 ?PlacedPosition@cIconWindow@@UAE?AVFVector@@XZ
FVector cIconWindow::PlacedPosition()
{
    FVector Position = Window::PlacedPosition();
    return Position + Unknown1BC;
}
