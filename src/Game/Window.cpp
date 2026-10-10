// Game/Window.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Window.h"

typedef unsigned long DWORD;

// FUNCTION: 0x109E3820 ?HasFlag@Window@@UAEHK@Z
BOOL Window::HasFlag(DWORD Flag)
{
    return (Flags & Flag) != 0;
}

// FUNCTION: 0x109E3840 ?SetFlag@Window@@UAEXK@Z
void Window::SetFlag(DWORD Flag)
{
    Flags |= Flag;
}

// FUNCTION: 0x109E38E0 ?GetParent@Window@@UAEPAV1@XZ
Window* Window::GetParent()
{
    return Parent;
}
