// Game/State_PlayAnim_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8BE68.h"
#include "Game/Class_10BD1320.h"
#include "Game/Class_10E93138.h"
#include "Game/Item_10BD1320.h"
#include "Game/FArchive.h"

void FUN_10c11ff0(FArchive& Ar, int* Value);

class State_PlayAnim : public Class_10E90D70
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
    virtual void Serialize(FArchive& Ar);

    State_PlayAnim(int A, int B, int C, bool D);

    State_PlayAnim* Construct(int A, int B, int C, bool D);

    Class_10BD1320 m_Items;
    int Unknown4C;
    int Unknown50;
    bool Unknown54;
    bool Unknown55;
    char Pad56[0x2];
};

// FUNCTION: 0x10BD0A50 ?Serialize@State_PlayAnim@@UAEXAAVFArchive@@@Z
void State_PlayAnim::Serialize(FArchive& Ar)
{
    ((Class_10E8BE68*)this)->Class_10E8BE68::Serialize(Ar);
    int Count = m_Items.m_Count;
    Ar.Serialize(&Count, 4);
    if (Ar.Unknown14)
        m_Items.FUN_10bd0410(Count);
    for (int i = 0; i < Count; i++)
        ((Class_10E93138*)&m_Items.m_Items[i])->Serialize(Ar); // the element's one virtual, with the archive
    FUN_10c11ff0(Ar, &Unknown4C);
    unsigned char Flag = Unknown50;
    Ar.Serialize(&Flag, 1);
    if (Ar.Unknown14)
        Unknown50 = Flag;
    Ar.Serialize(&Unknown54, 1);
    Ar.Serialize(&Unknown55, 1);
}
