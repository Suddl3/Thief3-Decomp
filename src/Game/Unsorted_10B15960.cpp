// Game/Unsorted_10B15960.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

class Class_10B2C030
{
public:
    void FUN_10b2c130();
};

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount);

    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Data);
            Data = 0;
            Unknown04 = 0;
        }
    }

    int Count;
    int Unknown04;
    Class_10B2C030** Data;
};

class Class_10B16930
{
public:
    Class_10BFBD70 FUN_109e6d80(int A);
    void FUN_10b166a0();
};

class Class_109E8FB0
{
public:
    ~Class_109E8FB0();

    char Unknown00[0x220];
};

class Class_10B17140
{
public:
    ~Class_10B17140();
};

class Class_10B177C0 : public Class_109E8FB0
{
public:
    ~Class_10B177C0();

    Class_10B17140 Unknown220;
};

class Options;

Options* FUN_10929550();

class Options
{
public:
    int Get(int A);
};

class Class_10B2ADA0
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
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual bool Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56(int A);

    void FUN_10b2ada0(int A, void* B, bool C);
};

class Class_10B15960
{
public:
    Class_10B2ADA0* FUN_10b15ed0();

    void FUN_10b160b0(int A, void* B, bool C);
};

// FUNCTION: 0x10B160B0 ?FUN_10b160b0@Class_10B15960@@QAEXHPAX_N@Z
void Class_10B15960::FUN_10b160b0(int A, void* B, bool C)
{
    if (FUN_10929550()->Get(1))
    {
        Class_10B2ADA0* P = FUN_10b15ed0();
        if (P)
        {
            if (!P->Virtual53())
                P->Virtual56(2);
            P->FUN_10b2ada0(A, B, C);
        }
    }
}

// FUNCTION: 0x10B166A0 ?FUN_10b166a0@Class_10B16930@@QAEXXZ
void Class_10B16930::FUN_10b166a0()
{
    Class_10BFBD70 First = FUN_109e6d80(0x69);
    if (First.Count > 0 && First.Data[0])
        First.Data[0]->FUN_10b2c130();

    Class_10BFBD70 Second = FUN_109e6d80(0x6a);
    if (Second.Count > 0 && Second.Data[0])
        Second.Data[0]->FUN_10b2c130();
}

// FUNCTION: 0x10B177C0 ??1Class_10B177C0@@QAE@XZ
Class_10B177C0::~Class_10B177C0()
{
}
