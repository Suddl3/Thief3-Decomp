// Game/Unsorted_10BCBF70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BBC0F0
{
public:
    void FUN_10bbc0f0(int A);
};

class Class_10BF7F90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10E92348
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
    virtual void FUN_10bcc000(int A);

    Class_10BF7F90* FUN_10bc4160();

    Class_10BBC0F0* Unknown04;
};

// FUNCTION: 0x10BCC000 ?FUN_10bcc000@Class_10E92348@@UAEXH@Z
void Class_10E92348::FUN_10bcc000(int A)
{
    Unknown04->FUN_10bbc0f0(0x807ff);
    Class_10BF7F90* Target = FUN_10bc4160();
    Target->FUN_10bf7f90(0, 1);
}
