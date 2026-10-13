// Game/Unsorted_10BDF180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8BE68.h"

class Class_10DBD510;

class cRandomInterval
{
public:
    void RollInterval();
    void StartInterval();
    bool FUN_10bb8070();
    void FUN_10bb85b0(unsigned char param);
    void FUN_10bb7ff0();

    char Unknown00[8];
    Class_10DBD510* m_Schema;
    char Unknown0C[0x28C];
    float m_Interval;
    float m_Roll;
    char Pad2A0[0x24];
    float m_EndTime;
};

double GetTimeSeconds();

extern float DAT_10eafbdc;

class Class_10E95050
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10bdf180();
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
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual bool Virtual69();
    virtual void Virtual70();

    bool FUN_10bcb600();

    cRandomInterval* Unknown04;
    char Unknown08[0x3C];
    float Unknown44;
};

// FUNCTION: 0x10BDF180 ?FUN_10bdf180@Class_10E95050@@UAEXXZ
void Class_10E95050::FUN_10bdf180()
{
    if (Virtual69())
        return;
    Unknown04->FUN_10bb7ff0();
    if (Unknown04->FUN_10bb8070())
    {
        if (FUN_10bcb600())
            Unknown04->RollInterval();
    }
    Virtual70();
    if (Unknown44 > DAT_10eafbdc && GetTimeSeconds() - Unknown44 > 10.0)
    {
        Unknown04->FUN_10bb85b0(0);
        Unknown44 = 0.0f;
        ((Class_10E8BE68*)this)->FUN_10bc4af0();
    }
}
