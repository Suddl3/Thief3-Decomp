// Game/Unsorted_10BCE840.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BF7F90
{
public:
    void FUN_10bf7920();
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10BA9FD0
{
public:
    void* FUN_10ba9fd0();

    char Unknown00[0x64];
    bool Unknown64;
};

class Class_10e9092c
{
public:
    bool FUN_10bb7500(int A, bool B);
};

class Class_10E92C38_Unknown04
{
public:
    char Unknown00[8];
    Class_10BA9FD0* Unknown08;
};

class Class_10E92C38 : public Class_10BC4160
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
    virtual void FUN_10bce840();
    virtual void Virtual71();
    virtual bool Virtual72();

    Class_10E92C38_Unknown04* Unknown04;
};

// FUNCTION: 0x10BCE840 ?FUN_10bce840@Class_10E92C38@@UAEXXZ
void Class_10E92C38::FUN_10bce840()
{
    if (FUN_10bc4160())
        FUN_10bc4160()->FUN_10bf7920();
    if (Virtual72())
    {
        ((Class_10e9092c*)Unknown04->Unknown08->FUN_10ba9fd0())->FUN_10bb7500(3, true);
        Unknown04->Unknown08->Unknown64 = true;
    }
}
