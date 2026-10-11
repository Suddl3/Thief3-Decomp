// Game/Unsorted_10A57820.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A57930.h"

class Class_10A57910
{
public:
    void FUN_10a588c0(int p1);
    void FUN_10a57910(int p1);

    char Unknown00[0x1F0];
    int Unknown1F0;
    int Unknown1F4;
};

class Class_10E68D80
{
public:
    virtual void Virtual0();
    virtual bool FUN_10a57820(int Kind, int Unused, bool Force);
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
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual bool Virtual80();

    char Unknown04[0x1d8];
    bool Unknown1DC;
    char Unknown1DD[0xb];
    int Unknown1E8;
    int Unknown1EC;
    int Unknown1F0;
    int Unknown1F4;
};

// FUNCTION: 0x10A57820 ?FUN_10a57820@Class_10E68D80@@UAE_NHH_N@Z
bool Class_10E68D80::FUN_10a57820(int Kind, int Unused, bool Force)
{
    if (!Force)
        return false;
    bool Wrap = Virtual80();
    if (Unknown1DC)
    {
        if (Kind == 0x1b || Kind == 0x24)
        {
            if (Wrap || Unknown1F0 != Unknown1E8)
            {
                Unknown1F4 = Unknown1F0 - 1;
                return true;
            }
        }
        else
        {
            if (Kind != 0x1c && Kind != 0x25)
                return false;
            if (Wrap || Unknown1F0 != Unknown1EC)
            {
                Unknown1F4 = Unknown1F0 + 1;
                return true;
            }
        }
        return true;
    }
    if (Kind != 0x19 && Kind != 0x25)
    {
        if (Kind != 0x1a && Kind != 0x24)
            return false;
        if (Wrap || Unknown1F0 != Unknown1EC)
        {
            Unknown1F4 = Unknown1F0 + 1;
            return true;
        }
        return false;
    }
    if (Wrap || Unknown1F0 != Unknown1E8)
        Unknown1F4 = Unknown1F0 - 1;
    else
        return false;
    return true;
}

// FUNCTION: 0x10A57910 ?FUN_10a57910@Class_10A57910@@QAEXH@Z
void Class_10A57910::FUN_10a57910(int p1)
{
    FUN_10a588c0(p1);
    Unknown1F4 = Unknown1F0;
}

// FUNCTION: 0x10A57930 ?FUN_10a57930@Class_10A57930@@QAEHHH@Z
int Class_10A57930::FUN_10a57930(int A, int B)
{
    if (A != 2)
    {
        if (B == 2 && Unknown1A4)
            return A;
    }
    else
        A = 1;
    return FUN_10a5a510(A, B);
}
