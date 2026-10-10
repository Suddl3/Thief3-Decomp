// Game/Unsorted_10BDAFE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AAF570_Result
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
    virtual bool Virtual46();
};

class Class_10AAF570
{
public:
    int FUN_10aaf570();
};

class Class_10AA82D0 : public Class_10AAF570
{
public:
    int FUN_10aa82d0();
};

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10BDB050 : public Class_10BC4160
{
public:
    bool FUN_10bdb050();
};

float appFrand();

double FUN_10c00480();

class Class_10BBDB40
{
public:
    float FUN_10bbdc80();
};

class Class_10DBD510
{
public:
    Class_10BBDB40* FUN_10dbd510(int Id);
};

struct Struct_10BDAFE0
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

class Class_10BDAFE0
{
public:
    void FUN_10bdafe0();

    char Unknown00[4];
    Struct_10BDAFE0* Unknown04;
    char Unknown08[0x68];
    float Unknown70;
};

// FUNCTION: 0x10BDAFE0 ?FUN_10bdafe0@Class_10BDAFE0@@QAEXXZ
void Class_10BDAFE0::FUN_10bdafe0()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x10056e)->FUN_10bbdc80();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x10056f)->FUN_10bbdc80();
    Unknown70 = FUN_10c00480() + (Max - Min) * appFrand() + Min;
}

// FUNCTION: 0x10BDB050 ?FUN_10bdb050@Class_10BDB050@@QAE_NXZ
bool Class_10BDB050::FUN_10bdb050()
{
    if (FUN_10bc4160() && FUN_10bc4160()->FUN_10aa82d0())
        return ((Class_10AAF570_Result*)FUN_10bc4160()->FUN_10aaf570())->Virtual46();
    return false;
}
