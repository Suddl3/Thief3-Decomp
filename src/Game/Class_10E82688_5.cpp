// Game/Class_10E82688_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_109E6D60.h"
#include "Game/WindowManager.h"
#include "Game/Class_10B15960.h"

void* FUN_10b154c0();

extern WindowManager* GWindowManager;

class Class_10B155D0
{
public:
    bool FUN_10b155d0(int A, int B);
};

class Class_10E5B2C0
{
public:
    virtual bool FUN_10a52e70(int A, int B, int C);
};

class Class_10E82688 : public Class_10E5B2C0
{
public:
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
    virtual bool FUN_10b5a400(int A, int B, int C);
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
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56(int A);
};

// FUNCTION: 0x10B5A400 ?FUN_10b5a400@Class_10E82688@@UAE_NHHH@Z
bool Class_10E82688::FUN_10b5a400(int A, int B, int C)
{
    if (B == 1 && static_cast<Class_10B155D0*>(FUN_10b154c0())->FUN_10b155d0(A, 1))
    {
        Virtual56(0);
        GWindowManager->FUN_109e8930(this);
        static_cast<Class_10B15960*>(FUN_10b154c0())->FUN_10b15960(0);
        return true;
    }
    return Class_10E5B2C0::FUN_10a52e70(A, B, C);
}
