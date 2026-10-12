// Game/Unsorted_10B27FE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109E8930.h"
#include "Game/Class_10B15960.h"
#include "Game/Class_10B27FE0.h"
#include "Game/Class_10B283D0.h"

class Class_10E5B2C0
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
    virtual bool FUN_10a52e70(int A, int B, int C);
};

class cT3MainMenuWindow : public Class_10E5B2C0
{
public:
    virtual bool FUN_10b27fe0(int A, int B, int C);

    char Unknown04[0x174];
    bool Unknown178;
    Class_10B27FE0* Unknown17C;
};

extern void* GWindowManager[];

void* GetWindowManager();

// FUNCTION: 0x10B27FE0 ?FUN_10b27fe0@cT3MainMenuWindow@@UAE_NHHH@Z
bool cT3MainMenuWindow::FUN_10b27fe0(int A, int B, int C)
{
    if (Unknown178)
        Unknown17C->Virtual1();
    return Class_10E5B2C0::FUN_10a52e70(A, B, C);
}

// FUNCTION: 0x10B283D0 ?OpenCredits@Class_10B283D0@@QAEXXZ
void Class_10B283D0::OpenCredits()
{
    static_cast<Class_109E8930*>(GWindowManager[0])->FUN_109e8930(this);
    Virtual56(0);
    static_cast<Class_10B15960*>(GetWindowManager())->OpenCreditsWindow(0);
}
