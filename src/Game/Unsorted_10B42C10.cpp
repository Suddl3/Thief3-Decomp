// Game/Unsorted_10B42C10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

typedef unsigned long DWORD;

typedef int BOOL;

class Window
{
public:
    virtual Window* GetParent();
    virtual BOOL HasFlag(DWORD Flag);
    virtual void SetFlag(DWORD Flag);
    virtual void ClearFlag(DWORD Flag);

    char Unknown04[0xB0];
    Window* Parent;
    char UnknownB8[0x30];
    DWORD Flags;

    void FUN_10a53560(int A);
};

class Class_10B314F0
{
public:
    void FUN_10b314f0(bool A);
};

class Class_10B42BD0;

void FUN_10b42bd0(Class_10B42BD0* A);

void* FUN_10b154c0();

class Class_10B175C0
{
public:
    void FUN_10b175c0(void* A, int B, void (*C)(Class_10B42BD0*), void* D);
    Class_10B314F0* FUN_10b16fb0();
};

class Class_10E809B8 : public Window
{
public:
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
    virtual void Virtual56(int A);
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual86();
    virtual void Virtual87();
    virtual void Virtual88();
    virtual void Virtual89();
    virtual void Virtual90();
    virtual void Virtual91();
    virtual void Virtual92();
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99();
    virtual void Virtual100();
    virtual void Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual void Virtual105();
    virtual void FUN_10b42c10(int A);

    char Unknown0EC[0x2C];
    Class_10B314F0* Unknown118;
    char Unknown11C[8];
    float Unknown124;
    float Unknown128;
    char Unknown12C[4];
};

class Class_10B78320
{
public:
    void FUN_10b78320();

    char Unknown00[0x1A4];
};

class Class_10B43160_Member
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
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70(int A);
};

class Class_10B43160 : public Class_10B78320
{
public:
    void FUN_10b43160();

    Class_10B43160_Member* Unknown1A4;
    Class_10B43160_Member* Unknown1A8;
    Class_10B43160_Member* Unknown1AC;
    Class_10B43160_Member* Unknown1B0;
};

// FUNCTION: 0x10B42C10 ?FUN_10b42c10@Class_10E809B8@@UAEXH@Z
void Class_10E809B8::FUN_10b42c10(int A)
{
    FUN_10a53560(A);
    Unknown124 += *(float*)&A;
    if (Unknown124 > Unknown128)
    {
        Virtual56(0);
        ((Class_10B175C0*)FUN_10b154c0())->FUN_10b175c0(&Unknown12C, 1, FUN_10b42bd0, this);
        Unknown118 = ((Class_10B175C0*)FUN_10b154c0())->FUN_10b16fb0();
        Unknown118->FUN_10b314f0(false);
    }
}

// FUNCTION: 0x10B43160 ?FUN_10b43160@Class_10B43160@@QAEXXZ
void Class_10B43160::FUN_10b43160()
{
    FUN_10b78320();
    if (Unknown1A4)
        Unknown1A4->Virtual70(0);
    if (Unknown1A8)
        Unknown1A8->Virtual70(0);
    if (Unknown1AC)
        Unknown1AC->Virtual70(0);
    if (Unknown1B0)
        Unknown1B0->Virtual70(0);
}
