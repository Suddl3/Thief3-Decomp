// Game/Unsorted_10A141D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int A, int B, int C, int D, int E);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

class Class_10A151A0
{
public:
    void FUN_10a15060(int Count);
    void FUN_10a151a0();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10C00A60
{
public:
    void FUN_10c00a60(int A);

    int Unknown00;
    int Unknown04;
};

class Class_1090FD40
{
public:
    void FUN_1090f2c0(int A);
};

class Object_10A14540_A
{
public:
    virtual ~Object_10A14540_A();
};

class Class_10E5D548
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10a14540();

    char Unknown04[4];
    Class_10C00A60 Unknown08;
    Object_10A14540_A** Unknown10;
    Class_1090FD40 Unknown14;
};

// FUNCTION: 0x10A14540 ?FUN_10a14540@Class_10E5D548@@UAEXXZ
void Class_10E5D548::FUN_10a14540()
{
    for (int i = 0; i < Unknown08.Unknown00; i++)
    {
        delete Unknown10[i];
        Unknown10[i] = 0;
    }
    Unknown08.FUN_10c00a60(0);
    Unknown14.FUN_1090f2c0(0);
    Unknown14.FUN_1090f2c0(0);
}

// FUNCTION: 0x10A151A0 ?FUN_10a151a0@Class_10A151A0@@QAEXXZ
void Class_10A151A0::FUN_10a151a0()
{
    FUN_10a15060(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
