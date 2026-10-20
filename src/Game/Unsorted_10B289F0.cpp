// Game/Unsorted_10B289F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* GetAllocator();

// Ion Storm's string: a char pointer to a block allocated 4 bytes before it.
class cString
{
public:
    cString(const char* In);
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

#include "Game/Class_109E6D60.h"

// include/Game/WindowManager.h, copied whole: its Virtual4 takes the window id here.
class WindowManager : public Class_109E6D60
{
public:
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int Window);

    int FindWindowByName(const cString& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
};

extern WindowManager* GWindowManager;

void* GetWindowManager();

void* FUN_10b154d0();

#include "Game/Class_10B429A0.h"

class Class_10B429B0 : public Class_10B429A0
{
public:
    void Reset();
};

class Class_10B27250
{
public:
    void FUN_10b27250(int A);
};

#include "Game/Class_1092D3D0.h"

class Class_1092D420 : public Class_1092D3D0
{
public:
    void FUN_1092d350(int A, int B);
};

extern Class_1092D420* DAT_10f31b88;

// include/Game/Class_10E7AD54.h, copied whole: the screen's two objects at +4 and +8.
class Class_10E7AD54
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Update(float Delta);
    virtual void FUN_10b28b60();

    void FUN_10b289f0(bool p1);

    Class_10B429B0* Unknown04;
    Class_10B429B0* Unknown08;
    float m_Elapsed;
    int m_Duration;
};

extern "C" const char DAT_10e7ad78[];

// FUNCTION: 0x10B289F0 ?FUN_10b289f0@Class_10E7AD54@@QAEX_N@Z
void Class_10E7AD54::FUN_10b289f0(bool p1)
{
    if (p1)
    {
        int Window;
        {
            cString Name(DAT_10e7ad78);
            Window = GWindowManager->FindWindowByName(Name);
        }
        if (Window)
        {
            if (!GWindowManager->IsCurrentWindow(Window))
                GWindowManager->Virtual4(Window);
            else
                GWindowManager->FUN_109e6b20(1);
        }
        Unknown04->Virtual56(0);
        Class_10B429B0* Screen = (Class_10B429B0*)Window;
        Unknown08 = Screen;
        if (Window)
        {
            Screen->FUN_10b429a0((int)this);
            Unknown08->Virtual56(2);
            Unknown08->Reset();
        }
        GetWindowManager();
        ((Class_10B27250*)FUN_10b154d0())->FUN_10b27250(0);
        DAT_10f31b88->HideCursor();
    }
    else
    {
        Unknown08->Virtual56(0);
        GWindowManager->FUN_109e8930(Unknown08);
        Unknown04->Virtual56(2);
        this->Virtual1();
        GetWindowManager();
        ((Class_10B27250*)FUN_10b154d0())->FUN_10b27250(1);
        DAT_10f31b88->FUN_1092d350(-1, -1);
    }
}
