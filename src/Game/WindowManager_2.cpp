// Game/WindowManager_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109E6D60.h"
#include "Game/cString.h"

extern const char DAT_10e79030[];

class WindowManager : public Class_109E6D60
{
public:
    int FindWindowByName(const cString& Name);
    bool OpenTitleLoadWindow();
};

// FUNCTION: 0x10B158B0 ?OpenTitleLoadWindow@WindowManager@@QAE_NXZ
bool WindowManager::OpenTitleLoadWindow()
{
    int Window;
    {
        cString Name(DAT_10e79030);
        Window = FindWindowByName(Name);
    }
    if (Window && !IsCurrentWindow(Window))
    {
        Virtual4(Window);
        return true;
    }
    return false;
}
