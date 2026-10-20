// Game/Unsorted_10B16EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_109E6D60.h"
#include "Game/cIntArray.h"
#include "Game/WindowManager.h"
#include "Game/cString.h"
#include "Game/Class_10B45AD0.h"
#include "Game/Class_10B16930.h"

// FUNCTION: 0x10B16EF0 ?FUN_10b16ef0@Class_10B16930@@QAEX_N@Z
void Class_10B16930::FUN_10b16ef0(bool A)
{
    Class_10B45AD0* Window;
    {
        cString Name("FMVWindow");
        Window = (Class_10B45AD0*)((WindowManager*)this)->FindWindowByName(Name);
    }
    if (Window)
    {
        if (Window->Virtual39() == 0x78)
        {
            if (A)
            {
                ((Class_109E6D60*)this)->Virtual4((int)Window);
                return;
            }
            ((WindowManager*)this)->FUN_109e6b20(1);
        }
    }
}
