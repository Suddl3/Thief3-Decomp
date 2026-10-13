// Game/Unsorted_10B15E30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B154C0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/WindowManager.h"
#include "Game/cString.h"
#include "Game/Class_10B45AD0.h"

// FUNCTION: 0x10B15E30 ?FUN_10b15e30@Class_10B154C0@@QAEXPAXH@Z
void Class_10B154C0::FUN_10b15e30(void* A, int B)
{
    Class_10B45AD0* Window;
    {
        cString Name("HUDWindow.AlertTextOverlay");
        Window = (Class_10B45AD0*)((WindowManager*)this)->FindWindowByName(Name);
    }
    if (Window)
    {
        if (Window->Virtual39() == 0x65)
        {
            Window->FUN_10b2a610(A, &B);
        }
    }
}
