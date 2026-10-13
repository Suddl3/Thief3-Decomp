// Game/State_Patrol_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BC4160.h"
#include "Game/Class_10BECF00.h"
#include "Game/Class_10BED1C0.h"
#include "Game/Class_10BB8070.h"
#include "Game/Class_10AA82D0.h"

class Object_10BE9860;

struct Struct_10BC4240_Param;

class Class_10DBD510;

class cRandomInterval
{
public:
    void RollInterval();
    void StartInterval();
    void FUN_10bb7ff0();

    char Unknown00[8];
    Class_10DBD510* m_Schema;
    char Unknown0C[0x28C];
    float m_Interval;
    float m_Roll;
    char Pad2A0[0x24];
    float m_EndTime;
};

class Class_10BF7F90 : public Class_10AA82D0
{
};

class State_Patrol
{
public:
    virtual void StartTimer();
    virtual void FUN_10bef030();
    virtual void FUN_10beef90();
    virtual void Virtual3() = 0;
    virtual void Virtual4() = 0;
    virtual void Virtual5() = 0;
    virtual void Virtual6() = 0;
    virtual void Virtual7() = 0;
    virtual void FUN_10becfd0();
    virtual void Virtual9() = 0;
    virtual void Virtual10() = 0;
    virtual void Virtual11() = 0;
    virtual void Virtual12() = 0;
    virtual void Virtual13() = 0;
    virtual void Virtual14() = 0;
    virtual void Virtual15() = 0;
    virtual void Virtual16() = 0;
    virtual void Virtual17() = 0;
    virtual void Virtual18() = 0;
    virtual void Virtual19() = 0;
    virtual void Virtual20() = 0;
    virtual void FUN_10becef0();
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
    virtual bool Virtual62();

    void FUN_10bc4240(Struct_10BC4240_Param* A, bool B);
    void FUN_10be9860(int A);
    void FUN_10bece10();
    void FUN_10beec50(int param);
    void FUN_10bef060();
    bool FUN_10bcb600();
    void FUN_10bed5b0();

    int m_Id;
    Object_10BE9860* Unknown08;
    char Pad0C[0x38];
    int Unknown44;
    char Pad48[0x1];
    char Unknown49;
    char Unknown4A[2];
    Struct_10BC4240_Param* Unknown4C;
    char Pad50[0x18];
    bool m_HasStartTime;
    char Pad69[0x3];
    float m_StartTime;
    char Pad70[0xC];
    int Unknown7C;
    bool Unknown80;
};

// FUNCTION: 0x10BEEF90 ?FUN_10beef90@State_Patrol@@UAEXXZ
void State_Patrol::FUN_10beef90()
{
    if (Virtual62())
    {
        Unknown80 = true;
        return;
    }
    if (Unknown80)
    {
        int Value = Unknown7C;
        Unknown80 = false;
        ((Class_10BECF00*)this)->FUN_10becf00(Value);
    }
    ((cRandomInterval*)m_Id)->FUN_10bb7ff0();
    if (((Class_10BB8070*)m_Id)->FUN_10bb8070())
    {
        if (FUN_10bcb600())
            ((cRandomInterval*)m_Id)->RollInterval();
    }
    ((Class_10BED1C0*)this)->FUN_10bed1c0();
    FUN_10bed5b0();
    if (Unknown4C == 0)
    {
        if (Unknown44 != 0)
        {
            Class_10BF7F90* Result = (Class_10BF7F90*)((Class_10BC4160*)this)->FUN_10bc4160();
            if (Result->GetLinkedObject() != 0)
                return;
        }
        FUN_10beec50(0);
    }
}
