// Game/Unsorted_10B92D20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B8AC90;

class Class_10D9B090
{
public:
    void FUN_10d9b1e0();
};

class Class_10B822C0
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

    int FUN_10b822c0();

    int Unknown04;
};

class Class_10E894C8_Unknown54
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int Virtual7();
};

class Class_10E894C8_Unknown10
{
public:
    char Unknown00[0x54];
    Class_10E894C8_Unknown54* Unknown54;
};

class Class_10E894C8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10b92e50();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10B822C0* Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void FUN_10b92d20(int A);

    void FUN_10da03d0(int A);
    void FUN_10da0220(int A);

    char Unknown04[0xC];
    Class_10E894C8_Unknown10* Unknown10;
};

Class_10D9B090* __stdcall FUN_10d9dcb0(Class_10B8AC90* A, int B);

// FUNCTION: 0x10B92D20 ?FUN_10b92d20@Class_10E894C8@@UAEXH@Z
void Class_10E894C8::FUN_10b92d20(int A)
{
    FUN_10da03d0(A);
    if (Virtual6() && Virtual6()->Unknown04 == 2 && A != Virtual6()->FUN_10b822c0())
        FUN_10d9dcb0((Class_10B8AC90*)this, A)->FUN_10d9b1e0();
}
