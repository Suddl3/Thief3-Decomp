// Game/Unsorted_10B15960_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_109E6D60.h"

extern const char DAT_10e79098[];

class WindowManager : public Class_109E6D60
{
public:
    int FindWindowByName(const cString& Name);
};

class Class_10B15CC0 : public WindowManager
{
public:
    bool OpenMissionCompleteWindow();
};

// FUNCTION: 0x10B15CC0 ?OpenMissionCompleteWindow@Class_10B15CC0@@QAE_NXZ
bool Class_10B15CC0::OpenMissionCompleteWindow()
{
    int Window;
    {
        cString Name(DAT_10e79098);
        Window = FindWindowByName(Name);
    }
    if (Window && !IsCurrentWindow(Window))
    {
        Virtual4(Window);
        return true;
    }
    return false;
}
