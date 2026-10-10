// Game/Unsorted_10BE4C40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BBDB40
{
public:
    unsigned char FUN_10bbdb80(int A);
};

class Class_10DBD510
{
public:
    Class_10BBDB40* FUN_10dbd510();
};

class Class_10C88610
{
public:
    void* FUN_10c88610();
};

class Class_10B255F0
{
public:
    virtual int Virtual0();

    int FUN_10dc1760();
};

class Class_10E96810_Unknown04
{
public:
    char Unknown00[8];
    Class_10DBD510* Unknown08;
    char Unknown0C[0x24];
    Class_10C88610 Unknown30;
};

class Class_10E96810
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
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual bool FUN_10be4d70();

    Class_10E96810_Unknown04* Unknown04;
};

// FUNCTION: 0x10BE4D70 ?FUN_10be4d70@Class_10E96810@@UAE_NXZ
bool Class_10E96810::FUN_10be4d70()
{
    int Value = Unknown04->Unknown08->FUN_10dbd510()->FUN_10bbdb80(0x42000585);
    if (Value <= 0 || Value > 3)
        return false;
    Class_10B255F0* Obj = (Class_10B255F0*)Unknown04->Unknown30.FUN_10c88610();
    if (Obj && Obj->Virtual0() == 10 && Obj->FUN_10dc1760() == 0x1b)
        return false;
    return true;
}
