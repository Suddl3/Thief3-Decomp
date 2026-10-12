// Game/WindowManager_11.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_109E6D60.h"
#include "Game/Class_10B27FD0.h"

extern const char DAT_10e79040[];

bool FUN_10abc140();

// The object FUN_109e5960 returns (a getter's result, not named anywhere yet): only its slot 39 is used here.
class Class_10B15960_Window
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
};

// The header's WindowManager, copied whole with FUN_10b15960 added; Virtual4 takes an int (the base's slot 4).
class WindowManager : public Class_109E6D60
{
public:
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int Window);

    int FUN_109e5960(const Class_109081E0& Name);
    bool FUN_10b15960(int A);
};

// FUNCTION: 0x10B15960 ?FUN_10b15960@WindowManager@@QAE_NH@Z
bool WindowManager::FUN_10b15960(int A)
{
    int Window;
    {
        Class_109081E0 Name(DAT_10e79040);
        Window = FUN_109e5960(Name);
    }
    if (Window && !FUN_109e6d60(Window))
    {
        Class_10B27FD0* Target = ((Class_10B15960_Window*)Window)->Virtual39() == 0x72 ? (Class_10B27FD0*)Window : 0;
        if (Target)
        {
            Target->FUN_10b27fd0(FUN_10abc140() ? 0 : 1);
            Target->ProcessState(A);
        }
        Virtual4(Window);
        return true;
    }
    return false;
}
