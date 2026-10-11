// Game/Unsorted_10A9D020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Class_109E6D60.h"

extern const char DAT_10e47660[];

class Class_10A9D020_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10AB37C0* Virtual4(int A);
};

class WindowManager : public Class_109E6D60
{
public:
    int FUN_109e53b0(int A);
};

extern WindowManager* GWindowManager;

// FUNCTION: 0x10A9D020 ?FUN_10a9d020@@YGHHHPAVClass_10A9D020_Param@@@Z
int __stdcall FUN_10a9d020(int A, int B, Class_10A9D020_Param* Obj)
{
    Class_10AB37C0* Map = Obj->Virtual4(0);
    const char* Text = *(const char**)Map->FUN_10ab37c0();
    if (!Text)
        Text = DAT_10e47660;
    FString Name(Text);
    WindowManager* Manager = GWindowManager;
    Manager->FUN_109e53b0((int)((Class_10AF7F80*)&Name)->FUN_10af7f80());
    return 1;
}
