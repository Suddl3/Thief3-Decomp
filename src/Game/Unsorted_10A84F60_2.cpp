// Game/Unsorted_10A84F60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10AA3520
{
    char Unknown00[0x10];
    int Unknown10;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10A84F60_Field1C
{
public:
    virtual ~Class_10A84F60_Field1C();
};

class Class_10A84F60_Field20
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A);
};

class Class_10A84F60
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
    virtual int Virtual16(int A);
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
    virtual Class_10A84F60_Field1C* Virtual28(int A);

    void FUN_10a84f60(int State);

    int Unknown04;
    char Pad08[0x14];
    Class_10A84F60_Field1C* Unknown1C;
    Class_10A84F60_Field20* Unknown20;
};

// FUNCTION: 0x10A84F60 ?FUN_10a84f60@Class_10A84F60@@QAEXH@Z
void Class_10A84F60::FUN_10a84f60(int State)
{
    Class_10A84F60_Field1C* Old = Unknown1C;
    Unknown04 = State;
    if (State == 3)
    {
        delete Old;
        Unknown1C = Virtual28(Virtual16(0));
        Unknown20->Virtual1(DAT_10f35dec->Unknown10);
        Virtual20();
    }
    else
    {
        delete Old;
        Unknown1C = Virtual28(Virtual16(0));
    }
}
