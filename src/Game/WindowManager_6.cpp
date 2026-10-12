// Game/WindowManager_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109E6D60.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

extern const char DAT_10e79080[];

// The object FindWindowByName returns (a getter's result, not named anywhere yet).
class Class_10B15BF0_Window
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual int Virtual39();

    char Pad04[0x2f0];
    bool Unknown2F4;
};

// The header's class with Virtual4 taking an int (the base's slot 4), as the other units declare it.
class WindowManager : public Class_109E6D60
{
public:
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int Window);

    int FindWindowByName(const cString& Name);
    bool OpenRestartMissionWindow();
};

// FUNCTION: 0x10B15BF0 ?OpenRestartMissionWindow@WindowManager@@QAE_NXZ
bool WindowManager::OpenRestartMissionWindow()
{
    int Window;
    {
        cString Name(DAT_10e79080);
        Window = FindWindowByName(Name);
    }
    if (Window && !FUN_109e6d60(Window))
    {
        Class_10B15BF0_Window* Target = ((Class_10B15BF0_Window*)Window)->Virtual39() == 0x7d ? (Class_10B15BF0_Window*)Window : 0;
        if (Target)
            Target->Unknown2F4 = false;
        Virtual4(Window);
        return true;
    }
    return false;
}
