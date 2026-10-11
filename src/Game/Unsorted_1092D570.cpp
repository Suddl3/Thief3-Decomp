// Game/Unsorted_1092D570.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern class IDirect3DDevice8* GDirect3DDevice8;

class IDirect3DDevice8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11();
    virtual int __stdcall Virtual12();
    virtual int __stdcall Virtual13();
    virtual int __stdcall Virtual14();
    virtual int __stdcall Virtual15();
    virtual int __stdcall Virtual16();
    virtual int __stdcall Virtual17();
    virtual int __stdcall Virtual18();
    virtual int __stdcall Virtual19();
    virtual int __stdcall Virtual20();
    virtual int __stdcall Virtual21();
    virtual int __stdcall Virtual22();
    virtual int __stdcall Virtual23();
    virtual int __stdcall Virtual24();
    virtual int __stdcall Virtual25();
    virtual int __stdcall Virtual26();
    virtual int __stdcall Virtual27();
    virtual int __stdcall Virtual28();
    virtual int __stdcall Virtual29();
    virtual int __stdcall Virtual30();
    virtual int __stdcall Virtual31();
    virtual int __stdcall Virtual32();
    virtual int __stdcall Virtual33();
    virtual int __stdcall Virtual34();
    virtual int __stdcall Virtual35();
    virtual int __stdcall Virtual36();
    virtual int __stdcall Virtual37();
    virtual int __stdcall Virtual38();
    virtual int __stdcall Virtual39();
    virtual int __stdcall Virtual40();
    virtual int __stdcall Virtual41();
    virtual int __stdcall Virtual42();
    virtual int __stdcall Virtual43();
    virtual int __stdcall Virtual44();
    virtual int __stdcall Virtual45();
    virtual int __stdcall Virtual46();
    virtual int __stdcall Virtual47();
    virtual int __stdcall Virtual48();
    virtual int __stdcall Virtual49();
    virtual int __stdcall Virtual50();
    virtual int __stdcall Virtual51();
    virtual int __stdcall Virtual52();
    virtual int __stdcall Virtual53();
    virtual int __stdcall Virtual54();
    virtual int __stdcall Virtual55();
    virtual int __stdcall Virtual56();
    virtual int __stdcall Virtual57();
    virtual int __stdcall Virtual58();
    virtual int __stdcall Virtual59();
    virtual int __stdcall Virtual60();
    virtual int __stdcall Virtual61();
    virtual int __stdcall Virtual62();
    virtual int __stdcall Virtual63();
    virtual int __stdcall Virtual64();
    virtual int __stdcall Virtual65();
    virtual int __stdcall Virtual66();
    virtual int __stdcall Virtual67();
    virtual int __stdcall Virtual68();
    virtual int __stdcall Virtual69();
    virtual int __stdcall Virtual70();
    virtual int __stdcall Virtual71();
    virtual int __stdcall Virtual72();
    virtual int __stdcall Virtual73();
    virtual int __stdcall Virtual74();
    virtual int __stdcall Virtual75();
    virtual int __stdcall Virtual76();
    virtual int __stdcall Virtual77();
    virtual int __stdcall Virtual78();
    virtual int __stdcall Virtual79();
    virtual int __stdcall Virtual80();
    virtual int __stdcall Virtual81();
    virtual int __stdcall Virtual82();
    virtual int __stdcall Virtual83();
    virtual int __stdcall Virtual84();
    virtual int __stdcall Virtual85();
    virtual int __stdcall Virtual86();
    virtual int __stdcall Virtual87();
    virtual int __stdcall Virtual88();
    virtual int __stdcall Virtual89();
    virtual int __stdcall Virtual90(unsigned int Handle);
};

class Class_1092D610_Unknown00
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

class Class_1092D610_Unknown08
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

class Class_10D660B0
{
public:
    ~Class_10D660B0();

    char Unknown00[0xC];
};

class Class_1092D610_Unknown30
{
public:
    ~Class_1092D610_Unknown30();

    char Unknown00[0x10];
};

class Class_1092D610
{
public:
    ~Class_1092D610();

    Class_1092D610_Unknown00* Unknown00;
    int Unknown04;
    Class_1092D610_Unknown08* Unknown08;
    unsigned int Unknown0C;
    unsigned int Unknown10;
    unsigned int Unknown14;
    char Unknown18[0x18];
    Class_1092D610_Unknown30 Unknown30;
    Class_10D660B0 Unknown40;
    Class_10D660B0 Unknown4C;
    Class_10D660B0 Unknown58;
    Class_10D660B0 Unknown64;
    Class_10D660B0 Unknown70;
};

// FUNCTION: 0x1092D610 ??1Class_1092D610@@QAE@XZ
Class_1092D610::~Class_1092D610()
{
    if (Unknown00)
    {
        Unknown00->Virtual2();
        Unknown00 = 0;
    }
    if (Unknown08)
    {
        Unknown08->Virtual2();
        Unknown08 = 0;
    }
    GDirect3DDevice8->Virtual90(Unknown0C);
    GDirect3DDevice8->Virtual90(Unknown10);
    GDirect3DDevice8->Virtual90(Unknown14);
}
