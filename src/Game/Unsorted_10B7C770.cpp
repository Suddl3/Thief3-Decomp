// Game/Unsorted_10B7C770.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Object_10B7C7C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5(int A, int B);
};

class Class_10E4B178
{
public:
    virtual int FUN_10b7c7c0(int A, int B);

    char Unknown04[0x2C];
    int Unknown30;
    char Unknown34[4];
    Object_10B7C7C0** Unknown38;
};

class Class_10D9D740
{
public:
    void FUN_10d9d740();
};

class Class_10E4B180_Unknown4C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

class Class_10E4B180
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
    virtual void FUN_10b7c770();

    char Unknown04[0x30];
    Class_10D9D740* Unknown34;
    char Unknown38[0xC];
    int Unknown44;
    char Unknown48[4];
    Class_10E4B180_Unknown4C** Unknown4C;
};

// FUNCTION: 0x10B7C770 ?FUN_10b7c770@Class_10E4B180@@UAEXXZ
void Class_10E4B180::FUN_10b7c770()
{
    for (int i = 0; i < Unknown44; i++)
        Unknown4C[i]->Virtual1();
    Class_10D9D740* Object = Unknown34;
    if (Object)
    {
        Object->FUN_10d9d740();
        delete Object;
        Unknown34 = 0;
    }
}

// FUNCTION: 0x10B7C7C0 ?FUN_10b7c7c0@Class_10E4B178@@UAEHHH@Z
int Class_10E4B178::FUN_10b7c7c0(int A, int B)
{
    for (int i = 0; i < Unknown30; i++)
    {
        int Result = Unknown38[i]->Virtual5(A, B);
        if (Result)
            return Result;
    }
    return 0;
}
