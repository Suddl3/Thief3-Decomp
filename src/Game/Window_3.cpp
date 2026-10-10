// Game/Window_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Window.h"

typedef unsigned long DWORD;

// FUNCTION: 0x109E3860 ?ClearFlag@Window@@UAEXK@Z
void Window::ClearFlag(DWORD Flag)
{
    Flags &= ~Flag;
}
