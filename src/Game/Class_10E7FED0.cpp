// Game/Class_10E7FED0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"

class Class_10AF7F80
{
public:
    const char* FUN_10af7f80();
};

class Window
{
public:
    virtual ~Window();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section);

    char Unknown04[0x114];
};

class FArray
{
public:
    FArray() : Data(0), ArrayNum(0), ArrayMax(0) {}

    void* Data;
    int ArrayNum;
    int ArrayMax;
};

class Class_10E7FED0 : public Window
{
public:
    virtual void LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section);

    FArray Unknown118;
    float FadeTime;
};

// FUNCTION: 0x10B2B690 ?LoadConfig@Class_10E7FED0@@UAEXPAVClass_10AF7F80@@0@Z
void Class_10E7FED0::LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section)
{
    Window::LoadConfig(File, Section);
    if (!Config::Instance()->GetFloat(Section->FUN_10af7f80(), "FadeTime", &FadeTime, File->FUN_10af7f80()))
        FadeTime = 2.0f;
}
