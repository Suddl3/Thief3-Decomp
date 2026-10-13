// Game/cTacticWeaponEquip.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E90D70.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

// Copied from include/Game/Class_10E8BE68.h with its own fields left out: cTacticWeaponEquip's fields start at
// 0x40, the end of Class_10E90D70, so the header's Unknown04..Unknown0C cannot sit in this base.
class Class_10E8BE68 : public Class_10E90D70
{
public:
    virtual void Serialize(FArchive& Ar);
};

// Copied whole from include/Game/cTacticWeaponEquip.h with the base and the Serialize override added.
class cTacticWeaponEquip : public Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
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
    virtual void ClearReferencesTo(int A);

    cTacticWeaponEquip(int A, int B, int C, bool D, bool E);

    cTacticWeaponEquip* FUN_10bd97d0(int A, int B, int C, bool D, bool E);

    int Unknown40;
    bool Unknown44;
    bool Unknown45;
    char Pad46[0x2];
    UObject* Unknown48;
    UObject* Unknown4C;
    bool Unknown50;
    bool Unknown51;
    char Pad52[0x2];
    FArray Unknown54;
    int Unknown60;
};

// FUNCTION: 0x10BD9820 ?Serialize@cTacticWeaponEquip@@UAEXAAVFArchive@@@Z
void cTacticWeaponEquip::Serialize(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown40, 4);
    Ar.Serialize(&Unknown44, 1);
    Ar.Serialize(&Unknown45, 1);
    Ar.Virtual6(&Unknown48);
    Ar.Virtual6(&Unknown4C);
    Ar.Serialize(&Unknown50, 1);
    if (Ar.Unknown0C >= 0x61)
    {
        Ar.Serialize(&Unknown51, 1);
        FUN_10b052a0(Ar, &Unknown54);
        Ar.Serialize(&Unknown60, 4);
    }
}
