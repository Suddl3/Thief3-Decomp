// Game/Class_10E82AF8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10A174E0.h"
#include "Game/Object_10B5AFF0.h"

extern float DAT_10e49984;

extern float DAT_10eafbdc;

Class_10A174E0* GetStats();

class cFactionPane
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
    virtual void UpdateFactions(int A);

    void FUN_10b77ee0(int A);
    void ResetStyles();
    cFactionPane* InitDefaults();

    char Pad04[0x18C];
    Object_10B5AFF0* m_HammerFaction;
    Object_10B5AFF0* m_PaganFaction;
};

// FUNCTION: 0x10B5AEE0 ?UpdateFactions@cFactionPane@@UAEXH@Z
void cFactionPane::UpdateFactions(int Param2)
{
    FUN_10b77ee0(Param2);
    if (Param2 != 0)
    {
        if (m_HammerFaction != 0)
        {
            Class_10A174E0* Obj = GetStats();
            float Diff;
            {
                FName Name("sta_HammerFactionTotal");
                Diff = DAT_10e49984 - (float)Obj->Virtual0(Name);
            }
            if (Diff <= DAT_10eafbdc)
                Diff = DAT_10eafbdc;
            m_HammerFaction->FUN_10b5ad60(Diff * 0.01f);
            m_HammerFaction->Virtual56(Param2);
        }
        if (m_PaganFaction != 0)
        {
            Class_10A174E0* Obj = GetStats();
            float Diff;
            {
                FName Name("sta_PaganFactionTotal");
                Diff = DAT_10e49984 - (float)Obj->Virtual0(Name);
            }
            if (Diff <= DAT_10eafbdc)
                Diff = DAT_10eafbdc;
            m_PaganFaction->FUN_10b5ad60(Diff * 0.01f);
            m_PaganFaction->Virtual56(Param2);
        }
    }
}
