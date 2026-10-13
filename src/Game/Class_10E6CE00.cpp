// Game/Class_10E6CE00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C08940;

class Class_10978090Result;

class Class_10E6BF84;

class Class_10978090
{
public:
    virtual void Virtual0();
    virtual int Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();

    Class_10978090Result* FUN_10978090();

    Class_10C08940* Unknown04;
    int Unknown08;
};

class Class_10E6CE28 : public Class_10978090
{
public:
    int GetUnknown08();
};

class Class_10A94DB0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10978090* Virtual4(int A);
};

class Class_10A174E0
{
public:
    virtual int Virtual0(Class_10C08940* A);
};

Class_10A174E0* GetStats();

class Class_10E6BF84
{
public:
    Class_10E6BF84();
    virtual ~Class_10E6BF84() {}

    void FUN_10d51e20(int A);
    int FUN_10d521c0(Class_10978090Result* A, Class_10E6BF84* B);

    int Unknown04;
    int Unknown08;
};

class Class_10E6CE00 : public Class_10E6CE28
{
public:
    virtual int FUN_10a94db0(int A, int B);
};

// FUNCTION: 0x10A94DB0 ?FUN_10a94db0@Class_10E6CE00@@UAEHHH@Z
int Class_10E6CE00::FUN_10a94db0(int A, int B)
{
    Class_10A94DB0_Unknown08* Obj1 = (Class_10A94DB0_Unknown08*)GetUnknown08();
    Class_10978090* Obj1Result = Obj1->Virtual4(0);
    Class_10A94DB0_Unknown08* Obj2 = (Class_10A94DB0_Unknown08*)GetUnknown08();
    Class_10978090* Obj3 = Obj2->Virtual4(1);
    Class_10E6BF84 Local1;
    Class_10A174E0* R = GetStats();
    Class_10C08940* Result1 = Obj1Result->Unknown04;
    int Value = R->Virtual0(Result1);
    Local1.FUN_10d51e20(Value);
    Class_10A94DB0_Unknown08* Obj4 = (Class_10A94DB0_Unknown08*)GetUnknown08();
    Class_10978090* Obj5 = Obj4->Virtual4(2);
    Class_10E6BF84 Local2;
    if (!Obj5->Virtual1())
        Local2.FUN_10d51e20((int)Obj5->FUN_10978090());
    return Local1.FUN_10d521c0(Obj3->FUN_10978090(), &Local2);
}
