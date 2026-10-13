// Game/WindowManager_12.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_109E6D60.h"
#include "Game/WindowManager.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10B45AD0.h"

extern const char DAT_10e79150[];

class Class_10B45AD0;

// FUNCTION: 0x10B16110 ?FUN_10b16110@WindowManager@@QAEXHH@Z
void WindowManager::FUN_10b16110(int A, int B)
{
    int Window;
    {
        cString Name(DAT_10e79150);
        Window = FindWindowByName(Name);
    }
    if (Window)
    {
        if (((Class_10B45AD0*)Window)->Virtual39() == 0x66)
        {
            ((Class_10B45AD0*)Window)->FUN_10b2b910(A, B);
        }
    }
}
