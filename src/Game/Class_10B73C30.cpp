// Game/Class_10B73C30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Options.h"
#include "Game/Struct_10B73810.h"

Options* GetOptions();

class Class_10B73810
{
public:
    virtual void Virtual0();

    void ApplyValues();
};

class Class_10B73A00_Unknown1A4
{
public:
    int Unknown00;
};

class Class_10B73A00_Unknown1D8
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
    virtual void Virtual56(int A);
};

class Class_10B73C30 : public Class_10B73810
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
    virtual bool Virtual53();

    void FUN_10b73a00(bool Param);

    char Unknown04[0x184];
    Struct_10B73810* Unknown188;
    char Unknown18C[0x10];
    int Unknown19C;
    char Unknown1A0[0x4];
    Class_10B73A00_Unknown1A4** Unknown1A4;
    char Unknown1A8[0x8];
    int* Unknown1B0;
    char Unknown1B4[0x1C];
    int Unknown1D0;
    char Unknown1D4[0x4];
    Class_10B73A00_Unknown1D8** Unknown1D8;
};

// FUNCTION: 0x10B73A00 ?FUN_10b73a00@Class_10B73C30@@QAEX_N@Z
void Class_10B73C30::FUN_10b73a00(bool Param)
{
    int Flag = Param ? 2 : 0;
    for (int i = 0; i < Unknown1D0; i++)
        Unknown1D8[i]->Virtual56(Flag);
    if (Unknown188)
    {
        bool Big;
        if (Param)
            Big = Unknown19C > 4;
        else
            Big = false;
        Unknown188->Virtual56(Big ? 2 : 0);
        if (Big)
        {
            Unknown188->Virtual70(0);
            Unknown188->Virtual120(0, Unknown19C - 4);
            Unknown188->Virtual121(0);
            Unknown188->Unknown1F4 = Unknown188->Unknown1F0;
        }
    }
    if (Param)
    {
        for (int i = 0; i < Unknown19C; i++)
            Unknown1B0[i] = GetOptions()->Get(Unknown1A4[i]->Unknown00);
        Class_10B73810::ApplyValues();
        if (Virtual53())
            GetOptions()->FUN_10ab5a90();
    }
}
