// Game/Class_10E666A0_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern bool DAT_10f45c0c;

class Class_10E666A0;

class Class_10A37A70_Unknown28;

class Class_10A37A70_Virtual12;

struct Struct_10AA3520_Unknown0C
{
    char Pad00[0xC0];
    int Unknown0C0;
};

struct Struct_10AA3520
{
    char Pad00[0x8];
    int Unknown08;
    Struct_10AA3520_Unknown0C* Unknown0C;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10A37A70_Unknown28
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, Class_10E666A0* B);
};

class Class_10A37A70_Virtual12
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(int A, Class_10E666A0* B);
};

class Class_10E666A0
{
public:
    virtual void Virtual0();
    virtual void FUN_10a37a70(int A);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual Class_10A37A70_Unknown28* Virtual11(int Key);
    virtual Class_10A37A70_Virtual12* Virtual12();

    void FUN_10a375c0(int A);

    char Pad04[0x1C];
    Class_10A37A70_Unknown28* Unknown20;
    char Pad24[0x4];
    Class_10A37A70_Unknown28* Unknown28;
};

// FUNCTION: 0x10A37A70 ?FUN_10a37a70@Class_10E666A0@@UAEXH@Z
void Class_10E666A0::FUN_10a37a70(int A)
{
    if (!DAT_10f45c0c)
    {
        if (!Unknown28)
        {
            Unknown28 = Virtual11(DAT_10f35dec->Unknown0C->Unknown0C0);
            if (!Unknown28)
                Unknown28 = Virtual11(DAT_10f35dec->Unknown08);
        }
        if (Unknown20 ? Unknown20 : Unknown28)
            (Unknown20 ? Unknown20 : Unknown28)->Virtual4(A, this);
        if (Virtual12())
            Virtual12()->Virtual3(A, this);
        FUN_10a375c0(A);
    }
}
