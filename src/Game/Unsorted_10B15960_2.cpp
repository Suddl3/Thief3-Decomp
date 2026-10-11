// Game/Unsorted_10B15960_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_109E6D60.h"

extern const char DAT_10e79098[];

class WindowManager : public Class_109E6D60
{
public:
    int FUN_109e5960(const Class_109081E0& Name);
};

class Class_10B15CC0 : public WindowManager
{
public:
    bool FUN_10b15cc0();
};

// FUNCTION: 0x10B15CC0 ?FUN_10b15cc0@Class_10B15CC0@@QAE_NXZ
bool Class_10B15CC0::FUN_10b15cc0()
{
    int Window;
    {
        Class_109081E0 Name(DAT_10e79098);
        Window = FUN_109e5960(Name);
    }
    if (Window && !FUN_109e6d60(Window))
    {
        Virtual4(Window);
        return true;
    }
    return false;
}
