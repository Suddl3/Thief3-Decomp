// Game/Unsorted_1092F130.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10928760
{
public:
    Class_10928760();

    virtual ~Class_10928760();
};

class Class_10E49C6C : public Class_10928760
{
public:
    virtual ~Class_10E49C6C();
    Class_10E49C6C();
};

class Class_10905A90_Member
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
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

extern Class_10BFBD70 DAT_10f31b9c;

class Class_1092F130
{
public:
    void FUN_1092f130();

    char Unknown00[0xC];
    int Unknown0C;
    char Unknown10[4];
    Class_1092F130** Unknown14;
};

extern Class_1092F130** DAT_10f31ba4;

// FUNCTION: 0x1092F130 ?FUN_1092f130@Class_1092F130@@QAEXXZ
void Class_1092F130::FUN_1092f130()
{
    for (int i = 0; i < Unknown0C; i++)
        Unknown14[i]->FUN_1092f130();
    FUN_10905aa0()->Virtual8(0, 0);
    int Index = DAT_10f31b9c.Unknown00;
    DAT_10f31b9c.FUN_10bfbd70(DAT_10f31b9c.Unknown00 + 1);
    DAT_10f31ba4[Index] = this;
    FUN_10905aa0()->Virtual9();
}

// FUNCTION: 0x1092F830 ??0Class_10E49C6C@@QAE@XZ
Class_10E49C6C::Class_10E49C6C()
{
}

// FUNCTION: 0x10930630 ??_GClass_10E49C6C@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1092F830's definition in this unit.
