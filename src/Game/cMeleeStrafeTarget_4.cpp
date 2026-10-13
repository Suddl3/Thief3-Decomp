// Game/cMeleeStrafeTarget_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8BE68.h"
#include "Game/FArchive.h"

class Class_10BBB410;

class Class_10BC4160
{
public:
    virtual void Virtual0();
};

// Copied whole from include/Game/cMeleeStrafeTarget.h with the member this function needs added: the
// header's base cTacticMoveToPoint is 0x20 bytes, and the fields of this class start at 0x04, so the base
// here is the vptr-only Class_10BC4160.
class cMeleeStrafeTarget : public Class_10BC4160
{
public:
    virtual void FUN_10bdb0a0();
    virtual void Virtual1();
    virtual void FUN_10bdf080();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10bdafa0();
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
    virtual void FUN_10bdb090();
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
    virtual void FUN_10bdb720(FArchive& Ar);

    void FUN_10bdb7c0();
    void FUN_10bdeda0();
    void FUN_10bdb860();
    void FUN_10bdbf70();

    Class_10BBB410* Unknown04;
    char Unknown08[0x4C];
    int Unknown54;
    int Unknown58;
    int Unknown5C;
    bool Unknown60;
    char Pad61[0x3];
    int m_WaitCount;
    float Unknown68;
    bool Unknown6C;
    char Pad6D[0x3];
    int Unknown70;
};

// FUNCTION: 0x10BDB720 ?FUN_10bdb720@cMeleeStrafeTarget@@UAEXAAVFArchive@@@Z
void cMeleeStrafeTarget::FUN_10bdb720(FArchive& Ar)
{
    ((Class_10E8BE68*)this)->Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown54, 4);
    Ar.Serialize(&Unknown58, 4);
    Ar.Serialize(&Unknown5C, 4);
    if (Ar.Unknown0C < 0x59)
    {
        bool Key;
        Ar.Serialize(&Key, 1);
    }
    if (Ar.Unknown0C >= 0x59)
    {
        Ar.Serialize(&Unknown60, 1);
        Ar.Serialize(&m_WaitCount, 4);
        Ar.Serialize(&Unknown68, 4);
    }
    if (Ar.Unknown0C >= 0x6a)
    {
        Ar.Serialize(&Unknown6C, 1);
        Ar.Serialize(&Unknown70, 4);
    }
}
