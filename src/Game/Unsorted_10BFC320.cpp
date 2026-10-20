// Game/Unsorted_10BFC320.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAA8A0.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10E97B00.h"
#include "Game/Class_10971570.h"
#include "Game/cString.h"
#include "Game/Class_10C1AAA0.h"
#include "Game/Class_10C1AAC0.h"

extern const char DAT_10e97a58[];

class APawn : public Class_10971570
{
};

// cAISpeech carries the vtable the AI object uses: slot 63 is the test the
// function makes, so the speech base has to sit at offset 0.
class cAISpeech
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
    virtual bool Virtual63();

    void FUN_10bc7d70(Class_10E97B00* Name, int Flags, int Count, cString* Out, bool Flag);

    char Pad04[0x258];
    float m_SummonCooldown;
    float m_SummonRange;
};

// The game's chain: Class_10C1AAA0 -> Class_10C1AAC0 -> Class_10E98F48.
// Copied from include/Game/Class_10E98F48.h, with the base class this unit needs.
class Class_10E98F48 : public Class_10C1AAC0
{
public:
    APawn* FUN_10c1b580();
};

class Class_10BC9D40 : public cAISpeech
{
};

class Class_10BFC8E0
{
public:
    void FUN_10bfc8e0(int Arg);

    char Pad00[0x8];
    int m_Count;
    char Pad0C[0x4];
    Class_10E98F48** m_Items;
    char Pad14[0xC];
    Class_10BAA8A0* Unknown20;
    char Pad24[0x3C];
    bool Unknown60;
};

// FUNCTION: 0x10BFC8E0 ?FUN_10bfc8e0@Class_10BFC8E0@@QAEXH@Z
void Class_10BFC8E0::FUN_10bfc8e0(int Arg)
{
    Unknown60 = false;
    bool Found = false;
    for (int Index = 0; Index < m_Count; Index++)
    {
        Class_10E98F48* Item = m_Items[Index];
        if (Item->Virtual0() == 6 && !Item->FUN_10c1aac0())
        {
            APawn* Pawn = Item->FUN_10c1b580();
            bool Flag = false;
            if (Pawn && Pawn->FUN_10971570(0x20006bf, &Flag) && !Flag)
            {
                if (!Item->Virtual14())
                {
                    Item->Unknown04 = Arg;
                    Item->FUN_10c1aaa0(true);
                    Found = true;
                }
                else
                {
                    Unknown60 = true;
                }
            }
        }
    }
    if (Found)
    {
        Class_10B9CAC0* Stack = Unknown20->FUN_10baa750();
        Class_10BC9D40* AI = Stack->GetCurrent();
        if (AI->Virtual63())
        {
            cString Text;
            AI->FUN_10bc7d70(&Class_10E97B00(DAT_10e97a58), 0x14, 1, &Text, true);
        }
    }
}
