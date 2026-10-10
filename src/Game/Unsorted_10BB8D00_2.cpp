// Game/Unsorted_10BB8D00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BC9D40;

class Class_10B9CAC0
{
public:
    Class_10BC9D40* FUN_10b9cac0();
};

struct Struct_10B9BCA0
{
    char Unknown00[8];
    Class_10B9CAC0* Unknown08;
};

class Class_10B9BCA0
{
public:
    char Unknown00[0x118];
    Struct_10B9BCA0* Unknown118;
};

class AAIPawn;

Class_10B9BCA0* FUN_10baa660(AAIPawn* Pawn);

class Class_10c7d570
{
public:
    void* FUN_10c7d570();
};

double FUN_10c00480();

class Class_10BC9D40
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
};

class Class_10BB8D00
{
public:
    void FUN_10bb8d00();

    char Unknown00[8];
    Class_10c7d570* Unknown08;
    char Unknown0C[0x2E0];
    float Unknown2EC;
};

class Class_109A6AA0
{
public:
    Class_109A6AA0() : Unknown00(0), Unknown04(0), Unknown08(0) {}

    int FUN_109a6aa0();

    float Unknown00;
    float Unknown04;
    float Unknown08;
};

class Class_10BB8D60
{
public:
    void FUN_10bb8d60();

    char Unknown00[0x22C];
    Class_109A6AA0 Unknown22C;
    Class_109A6AA0 Unknown238;
    char Unknown244[0xAC];
    bool Unknown2F0;
};

// FUNCTION: 0x10BB8D00 ?FUN_10bb8d00@Class_10BB8D00@@QAEXXZ
void Class_10BB8D00::FUN_10bb8d00()
{
    if (FUN_10c00480() - Unknown2EC > 1.0)
        Unknown2EC = FUN_10c00480();
    Class_10B9BCA0* Controller = FUN_10baa660((AAIPawn*)Unknown08->FUN_10c7d570());
    Class_10BC9D40* Target;
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
        Target = Controller->Unknown118->Unknown08->FUN_10b9cac0();
    else
        Target = 0;
    Target->Virtual25();
}

// FUNCTION: 0x10BB8D60 ?FUN_10bb8d60@Class_10BB8D60@@QAEXXZ
void Class_10BB8D60::FUN_10bb8d60()
{
    if (Unknown22C.FUN_109a6aa0() && Unknown238.FUN_109a6aa0())
        return;
    Unknown2F0 = true;
    Unknown22C = Class_109A6AA0();
    Unknown238 = Class_109A6AA0();
}
