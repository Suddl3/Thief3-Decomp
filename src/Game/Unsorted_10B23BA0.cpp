// Game/Unsorted_10B23BA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109E6D60.h"
#include "Game/cString.h"

bool FUN_10abc140();

class WindowManager : public Class_109E6D60
{
public:
    int FindWindowByName(const cString& Name);
    void FUN_109e6b20(int A);
};

extern WindowManager* GWindowManager;

extern const char DAT_10e790f4[];

extern const char DAT_10e79120[];

// FUNCTION: 0x10B23FA0 ?ToggleMainStoreWindow@@YGXHHH@Z
void __stdcall ToggleMainStoreWindow(int A, int B, int C)
{
    if (FUN_10abc140())
    {
        int Window = GWindowManager->FindWindowByName(DAT_10e790f4);
        if (Window)
        {
            if (!GWindowManager->IsCurrentWindow(Window))
                GWindowManager->Virtual4(Window);
            else
                GWindowManager->FUN_109e6b20(1);
        }
    }
}

// FUNCTION: 0x10B24070 ?ToggleFenceWindow@@YGXHHH@Z
void __stdcall ToggleFenceWindow(int A, int B, int C)
{
    if (FUN_10abc140())
    {
        int Window = GWindowManager->FindWindowByName(DAT_10e79120);
        if (Window)
        {
            if (!GWindowManager->IsCurrentWindow(Window))
                GWindowManager->Virtual4(Window);
            else
                GWindowManager->FUN_109e6b20(1);
        }
    }
}
