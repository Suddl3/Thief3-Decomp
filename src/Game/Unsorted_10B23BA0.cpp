// Game/Unsorted_10B23BA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109E6D60.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

bool FUN_10abc140();

class WindowManager : public Class_109E6D60
{
public:
    int FUN_109e5960(const Class_109081E0& Name);
    void FUN_109e6b20(int A);
};

extern WindowManager* GWindowManager;

extern const char DAT_10e790f4[];

extern const char DAT_10e79120[];

// FUNCTION: 0x10B23FA0 ?FUN_10b23fa0@@YGXHHH@Z
void __stdcall FUN_10b23fa0(int A, int B, int C)
{
    if (FUN_10abc140())
    {
        int Window = GWindowManager->FUN_109e5960(DAT_10e790f4);
        if (Window)
        {
            if (!GWindowManager->FUN_109e6d60(Window))
                GWindowManager->Virtual4(Window);
            else
                GWindowManager->FUN_109e6b20(1);
        }
    }
}

// FUNCTION: 0x10B24070 ?FUN_10b24070@@YGXHHH@Z
void __stdcall FUN_10b24070(int A, int B, int C)
{
    if (FUN_10abc140())
    {
        int Window = GWindowManager->FUN_109e5960(DAT_10e79120);
        if (Window)
        {
            if (!GWindowManager->FUN_109e6d60(Window))
                GWindowManager->Virtual4(Window);
            else
                GWindowManager->FUN_109e6b20(1);
        }
    }
}
