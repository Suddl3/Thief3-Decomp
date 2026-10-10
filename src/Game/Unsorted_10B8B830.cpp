// Game/Unsorted_10B8B830.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E896A8
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
    virtual float FUN_10b8c690(float Value, int Unused);

    char Unknown04[0x124];
    float Unknown128;
};

class Struct_10B8B830
{
public:
    int Unknown00;
    int Unknown04;
};

class Class_10E50610
{
public:
    Class_10E50610(int Value);
    virtual ~Class_10E50610() {}

    int Unknown04;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, Class_10E50610* C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10B8B830
{
public:
    void FUN_10b8b830(int Arg);

    int Unknown00;
    int Unknown04;
    Struct_10B8B830* Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10B8B830 ?FUN_10b8b830@Class_10B8B830@@QAEXH@Z
void Class_10B8B830::FUN_10b8b830(int Arg)
{
    if (Unknown0C != Arg)
    {
        Unknown0C = Arg;
        Class_10E50610 Local(Arg);
        DAT_10f46da0->Virtual5(7, Unknown08->Unknown04, &Local, 0);
    }
}

// FUNCTION: 0x10B8C690 ?FUN_10b8c690@Class_10E896A8@@UAEMMH@Z
float Class_10E896A8::FUN_10b8c690(float Value, int Unused)
{
    if (Unknown128 > Value)
        return Value;
    return Unknown128;
}
