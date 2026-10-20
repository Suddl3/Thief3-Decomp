// Game/Unsorted_10A55780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Window.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Config.h"
#include "Game/Class_10905A90_Member.h"

extern const char DAT_10e68714[];

extern const char DAT_10e686fc[];

extern const char DAT_10e686f0[];

extern const char DAT_10e686e8[];

extern const char DAT_10e686dc[];

Class_10905A90_Member* GetAllocator();

// Ion Storm's string: a char pointer to a block allocated 4 bytes before it.
class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
        }
    }

    char* Unknown00;
};

// Game/Class_10A55050.h copied whole, with the Window base it derives from.
class Class_10A55050 : public Window
{
public:
    void FUN_10a55780(int A);
};

class Class_10E684A8 : public Class_10A55050
{
public:
    virtual void LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section);
    void SetNameByIndex(int A);

    bool Unknown118;
    char Unknown119[0xF];
    char* Unknown128;
    char Unknown12C[0x18];
    bool Unknown144;
};

// FUNCTION: 0x10A55A20 ?LoadConfig@Class_10E684A8@@UAEXPAVClass_10AF7F80@@0@Z
void Class_10E684A8::LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section)
{
    Window::LoadConfig(File, Section);
    Config::Instance()->GetString(Section->operator*(), DAT_10e68714, &Unknown128, File->operator*());
    Config::Instance()->GetBool(Section->operator*(), DAT_10e686fc, &Unknown144, File->operator*());
    cString Text;
    if (Config::Instance()->GetString(Section->operator*(), DAT_10e686f0, &Text.Unknown00, File->operator*()))
        this->FUN_10a55780((int)&Text);
    else if (Config::Instance()->GetString(Section->operator*(), DAT_10e686e8, &Text.Unknown00, File->operator*()))
        this->SetNameByIndex((int)&Text);
    Config::Instance()->GetBool(Section->operator*(), DAT_10e686dc, &Unknown118, File->operator*());
}
