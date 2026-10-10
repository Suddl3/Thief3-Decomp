// Game/Unsorted_10BED160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e975a0[];

class FArray
{
public:
    FArray() : Data(0), ArrayNum(0), ArrayMax(0) {}

    void* Data;
    int ArrayNum;
    int ArrayMax;
};

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

class Class_10E975A0 : public Class_10E90D70
{
public:
    Class_10E975A0* FUN_10bed440(int A, int B);

    bool Unknown40;
    int Unknown44;
    bool Unknown48;
    bool Unknown49;
    FArray Unknown4C;
    FArray Unknown58;
    int Unknown64;
    bool Unknown68;
    int Unknown6C;
    int Unknown70;
    int Unknown74;
    int Unknown78;
    int Unknown7C;
    bool Unknown80;
};

class Class_10E94578
{
public:
    virtual void Virtual0();

    void FUN_10bc5b50();
};

class Class_10E97488 : public Class_10E94578
{
public:
    virtual void Virtual0();
    virtual void FUN_10bee9a0();

    void FUN_10bedca0();

    char Unknown04[0x54];
    int Unknown58;
    int Unknown5C;
};

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
};

class Class_10E8BE68
{
public:
    virtual void FUN_10bca010(FArchive& Ar);
};

class Class_10FF667C_Unknown18
{
public:
    virtual void Virtual0();
    virtual void Virtual1(FArchive& Ar, int* Value);
};

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Class_10FF667C_Unknown18* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

class Class_10E97370 : public Class_10E8BE68
{
public:
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
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void FUN_10bed3e0(FArchive& Ar);

    char Unknown04[0x3C];
    unsigned char Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    int Unknown50;
};

// FUNCTION: 0x10BED3E0 ?FUN_10bed3e0@Class_10E97370@@UAEXAAVFArchive@@@Z
void Class_10E97370::FUN_10bed3e0(FArchive& Ar)
{
    Class_10E8BE68::FUN_10bca010(Ar);
    Ar.Serialize(&Unknown40, 1);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown44);
    Ar.Serialize(&Unknown48, 4);
    Ar.Serialize(&Unknown4C, 4);
    Ar.Serialize(&Unknown50, 4);
}

// FUNCTION: 0x10BED440 ?FUN_10bed440@Class_10E975A0@@QAEPAV1@HH@Z
Class_10E975A0* Class_10E975A0::FUN_10bed440(int A, int B)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown44 = 0;
    Unknown49 = false;
    Unknown4C.FArray::FArray();
    Unknown40 = true;
    Unknown00 = DAT_10e975a0;
    Unknown48 = true;
    Unknown58.FArray::FArray();
    Unknown64 = 0;
    Unknown68 = false;
    Unknown6C = 0;
    Unknown70 = 0;
    Unknown74 = 0;
    Unknown78 = 0;
    Unknown7C = 0;
    Unknown80 = false;
    return this;
}

// FUNCTION: 0x10BEE9A0 ?FUN_10bee9a0@Class_10E97488@@UAEXXZ
void Class_10E97488::FUN_10bee9a0()
{
    if (Unknown58 >= 1)
    {
        if (Unknown5C >= Unknown58)
            FUN_10bc5b50();
        else
            FUN_10bedca0();
    }
}
