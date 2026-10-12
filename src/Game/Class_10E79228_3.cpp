// Game/Class_10E79228_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B27220.h"
#include "Game/Class_10E5B7C8.h"
#include "Game/TimeManager.h"
#include "Game/Class_10E7AAAC.h"

class Class_10B154E0_Unknown94
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
    virtual bool Virtual64(int A);
};

class Class_10E79228
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Tick(float A);
    void FUN_109e70e0(float A);

    char Unknown04[0x90];
    Class_10B154E0_Unknown94* Unknown94;
    char Unknown98[0x188];
    Class_10B27220 Unknown220;
    bool m_Closing;
    char Pad25D[0x3];
    float m_CloseTimer;
};

Class_10E7AAAC* FUN_10b266e0();

void FUN_10a36cf0();

extern bool DAT_10f31a58;

// FUNCTION: 0x10B154E0 ?Tick@Class_10E79228@@UAEXM@Z
void Class_10E79228::Tick(float A)
{
    Unknown220.FUN_10b271d0(A);
    FUN_10b266e0()->Virtual5(A);
    if (Unknown94 && !TimeManager::Instance()->IsPaused())
    {
        if (!Unknown94->Virtual64(0x400) || DAT_10f31a58)
        {
            if (m_Closing)
            {
                m_CloseTimer -= A;
                if (m_CloseTimer <= 0.0f)
                {
                    FUN_10a36cf0();
                    m_Closing = false;
                    ((Class_10E5B7C8*)this)->FUN_109e3c70();
                }
            }
        }
        else
            ((Class_10E5B7C8*)this)->FUN_109e3c70();
    }
    FUN_109e70e0(A);
}
