// Game/cOptionsWindow.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109E8930.h"
#include "Game/cOptionsWindow.h"
#include "Game/WindowManager.h"

extern WindowManager* GWindowManager;

struct Struct_10B45D10
{
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
    virtual void Virtual16(int A);
};

// FUNCTION: 0x10B45D10 ?Close@cOptionsWindow@@QAEXXZ
void cOptionsWindow::Close()
{
    Virtual115();
    GWindowManager->FUN_109e8930(this);
    if (Unknown158)
        Unknown158->Virtual16(1);
}
