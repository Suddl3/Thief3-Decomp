// Game/cSmokeySoup_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Window.h"
#include "Game/Class_10E67BD8.h"
#include "Game/Class_10AF7F80.h"
#include "Game/cString.h"
#include "Game/Class_10B6FC70.h"
#include "Game/Class_10B6FDA0.h"

extern const char DAT_10e873a0[];

extern const char DAT_10e87390[];

Class_10905A90_Member* GetAllocator();

// Class_10E871C8 copied whole from include/Game/Class_10E871C8.h, with FUN_10b700a0 added.
class Class_10E871C8
{
public:
    virtual void Virtual0();

    Class_10E871C8();

    void FUN_10b70d40(int p1, int p2);
    void FUN_10b70db0(int A);
    void FUN_10b700a0(void* A, void* B, int C);

    Class_10B6FDA0 Unknown04[500];
    Class_10B6FC70 Unknown101D4[10];
    int Unknown102EC;
    int Unknown102F0;
    int Unknown102F4;
    float Unknown102F8;
    int Unknown102FC;
};

Class_10E871C8* GetSoupManager();

class cSmokeySoup
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
    virtual bool Virtual54();
    virtual bool Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65(int A);

    void* FUN_10a51100(int A);
    void LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section);
};

// FUNCTION: 0x10B70990 ?LoadConfig@cSmokeySoup@@QAEXPAVClass_10AF7F80@@0@Z
void cSmokeySoup::LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section)
{
    ((Class_10E67BD8*)this)->Class_10E67BD8::LoadConfig(File, Section);
    void* Result1;
    {
        cString Name(DAT_10e873a0);
        Result1 = FUN_10a51100((int)&Name);
    }
    void* Result2;
    {
        cString Alpha(DAT_10e87390);
        Result2 = FUN_10a51100((int)&Alpha);
    }
    GetSoupManager()->FUN_10b700a0(Result1, Result2, !(Virtual54() && Virtual55()));
    Virtual65(0x40);
}
