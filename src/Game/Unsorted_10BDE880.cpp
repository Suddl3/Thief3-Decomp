// Game/Unsorted_10BDE880.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BF7F90;

class Class_10BFF280
{
public:
    int FUN_10bff280();
};

class Class_10BFF460 : public Class_10BFF280
{
};

class Class_10BBB410
{
public:
    Class_10BFF460* FUN_10bbb410();
};

class Class_10BC4160
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

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10E8BE68 : public Class_10BC4160
{
public:
    void FUN_10bc5b50();
};

class Class_10E94698 : public Class_10E8BE68
{
public:
    virtual void FUN_10bded50(int A);
    void FUN_10bdcc50(int A, int B);

    Class_10BBB410* Unknown04;
    char Unknown08[0x4C];
    int Unknown54;
};

// FUNCTION: 0x10BDED50 ?FUN_10bded50@Class_10E94698@@UAEXH@Z
void Class_10E94698::FUN_10bded50(int A)
{
    FUN_10bc4160();
    Class_10BFF460* Obj = Unknown04->FUN_10bbb410();
    if (Obj && Obj->FUN_10bff280())
    {
        FUN_10bdcc50(Obj->FUN_10bff280() + 0x2c, Unknown54);
        return;
    }
    FUN_10bc5b50();
}
