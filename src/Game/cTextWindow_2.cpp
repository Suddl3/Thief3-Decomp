// Game/cTextWindow_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_1091AA50.h"
#include "Game/Class_10A66190.h"
#include "Game/Class_10E6B288.h"

class cBorderWindow : public Class_10E6B288
{
public:
    virtual void FUN_10a66560();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual86();
    virtual void Virtual87();
    virtual void Virtual88();
    virtual void Virtual89();
    virtual void Virtual90();
    virtual void Virtual91();
    virtual void Virtual92();
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99();
    virtual void Virtual100();
    virtual void Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual void Virtual105();
    virtual void Virtual106();
    virtual void Virtual107();
    virtual void Virtual108();
    virtual void Virtual109();
};

class cTextWindow : public Class_10A66190
{
public:
    virtual ~cTextWindow();

    char Unknown04[0x154];
    FString Unknown158;
    char Unknown164[0x28];
    Class_1091AA50* Unknown18C;
};

// FUNCTION: 0x10A663B0 ??1cTextWindow@@UAE@XZ
cTextWindow::~cTextWindow()
{
    Class_1091AA50* Object = Unknown18C;
    if (Object)
    {
        Object->FUN_1091aa50();
        delete Object;
    }
}

// FUNCTION: 0x10A66430 ??_GcTextWindow@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A663B0's definition in this unit.

// FUNCTION: 0x10A66560 ?FUN_10a66560@cBorderWindow@@UAEXXZ
void cBorderWindow::FUN_10a66560()
{
    Class_10E6B288::FUN_10aa6d70();
    if (!Unknown120)
        Virtual109();
}
