// Game/Unsorted_10BE27B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AAF570
{
public:
    int FUN_10aaf570();
};

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
    virtual void Virtual46();
    virtual void Virtual47();
    virtual int Virtual48();
};

class Class_10bf7f90 : public Class_10AAF570
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10BF7F90 : public Class_10bf7f90
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10BA9EC0
{
public:
    void* FUN_10ba9ec0();
};

class Class_10C01CE0
{
public:
    void FUN_10c01ce0();
};

class Class_10BB8300
{
public:
    void FUN_10bb8300();

    char Unknown00[8];
    Class_10BA9EC0* Unknown08;
};

class Class_10bfb8d0
{
public:
    void FUN_10bfb8d0(int A);
};

class Class_10FF667C
{
public:
    char Unknown00[0x28];
    Class_10bfb8d0* Unknown28;
};

extern Class_10FF667C* DAT_10ff667c;

class Class_10E95780 : public Class_10BC4160
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
    virtual void FUN_10be2b90(int A);

    void FUN_10be2a70();

    Class_10BB8300* Unknown04;
};

// FUNCTION: 0x10BE2B90 ?FUN_10be2b90@Class_10E95780@@UAEXH@Z
void Class_10E95780::FUN_10be2b90(int A)
{
    Class_10BF7F90* Result = FUN_10bc4160();
    if (Result)
    {
        if (((Class_10AAF570_Result*)Result->FUN_10aaf570())->Virtual48() != 1)
            Result->FUN_10bf7f90(0, 1);
    }
    FUN_10be2a70();
    ((Class_10C01CE0*)Unknown04->Unknown08->FUN_10ba9ec0())->FUN_10c01ce0();
    Unknown04->FUN_10bb8300();
    DAT_10ff667c->Unknown28->FUN_10bfb8d0(3);
}
