// Game/Unsorted_10BCBE30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Object_10AAF570
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
    virtual void Virtual49(int A);
};

class Class_10AAF570
{
public:
    int FUN_10aaf570();
};

class Class_10BF7F90 : public Class_10AAF570
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10c7d570
{
public:
    void* FUN_10c7d570();
};

class Class_10992010
{
public:
    float FUN_10992010();
};

struct Struct_10BDF610
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Struct_10BCBE30_A
{
    char Unknown00[0x2C];
    Struct_10BDF610 Unknown2C;
};

struct Struct_10BCBE30_B
{
    char Unknown00[8];
    Class_10c7d570* Unknown08;
};

class Class_10E95288 : public Class_10BC4160
{
public:
    void FUN_10bdf610(Struct_10BDF610* A, float B, float C, float D, float E, unsigned char F);
    void FUN_10be02e0();
};

class Class_10E92730 : public Class_10E95288
{
public:
    virtual void Virtual1();
    virtual void FUN_10bcbf00();
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
    virtual void FUN_10bcbe30(int A);

    Struct_10BCBE30_B* Unknown04;
};

// FUNCTION: 0x10BCBE30 ?FUN_10bcbe30@Class_10E92730@@UAEXH@Z
void Class_10E92730::FUN_10bcbe30(int A)
{
    ((Object_10AAF570*)FUN_10bc4160()->FUN_10aaf570())->Virtual49(3);
    Class_10c7d570* Obj = Unknown04->Unknown08;
    FUN_10bdf610(&((Struct_10BCBE30_A*)Obj->FUN_10c7d570())->Unknown2C, 800.0f,
                 ((Class_10992010*)Obj->FUN_10c7d570())->FUN_10992010() * 3.0f, 0.0f, 0.0f, true);
    FUN_10be02e0();
}
