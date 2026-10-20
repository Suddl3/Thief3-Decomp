// Game/cT3ReadBookWindow_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10A52A40.h"
#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];

// cString: include/Game/cString.h, with the out-of-line destructor the
// target calls.
class cString : public Class_1090A780
{
public:
    cString() {}
    cString(const char* In);
    cString(const cString& Other);
    ~cString();

    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
};

class Class_10A242D0;

class Class_10B2F900_Unknown130;

// Class_10E7BB2C: include/Game/Class_10E7BB2C.h, with the table at 0x0C a
// second base of its own.
class Class_10B30CD0_Slider
{
public:
    virtual void Virtual0(float* p1, float* p2, float p3);
};

class Class_10E7BB2C
{
public:
    Class_10E7BB2C();

    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual float FUN_10a53260();
    virtual void Virtual5();
    virtual void SetValue(const float* p1);

    void FUN_10a53250();
    Class_10E7BB2C* Init();

    float Unknown04;
    int Unknown08;
    Class_10B30CD0_Slider Unknown0C;
    char Pad10[0x4];
    float Unknown14;
    float m_Value;
    float m_Delta;
    unsigned char Unknown20;
    char Pad21[0x3];
    float Unknown24;
    float Unknown28;
    float Unknown2C;
};

// Class_10B2FEF0_Unknown118: nothing names the class, so it gets placeholder
// slots up to the one the target calls.
class Class_10B2FEF0_Unknown118
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
    virtual void Virtual106();
    virtual void Virtual107();
    virtual void Virtual108();
    virtual void Virtual109();
    virtual void Virtual110();
    virtual void Virtual111(const cString* p1, float p2, int p3);
    virtual void Virtual112();
    virtual void Virtual113();
};

// cT3ReadBookWindow: include/Game/cT3ReadBookWindow.h, with the fields this
// function uses named (0xE4, 0x14C, 0x164) and slot 107's signature.
class cT3ReadBookWindow : public Class_10A52A40
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
    virtual void Virtual106();
    virtual void Virtual107(int A, int B);
    virtual void Virtual108();
    virtual void Virtual109();

    void FUN_10b2f8f0(int p1);
    void FUN_10b2f900(Class_10A52A40_Member* P);
    void PrevPage();
    void FUN_10b307b0();
    void FUN_10b2fdd0();
    void FUN_10b2f710();
    cT3ReadBookWindow();

    char PadC8[0x1C];
    int UnknownE4;
    char PadE8[0x30];
    Class_10B2FEF0_Unknown118* Unknown118;
    char Pad11C[0x14];
    Class_10B2F900_Unknown130* Unknown130;
    Class_10A242D0* Unknown134;
    char Pad138[0x14];
    Class_10E7BB2C* Unknown14C;
    unsigned char Field150;
    char Pad151[0x3];
    FString m_Text;
    int Unknown160;
    bool Unknown164;
    char Pad165[0x3];
    int Unknown168;
};

// Ion Storm's tagged new.
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B30CD0 ?Virtual107@cT3ReadBookWindow@@UAEXHH@Z
void cT3ReadBookWindow::Virtual107(int A, int B)
{
    UnknownE4 = A;
    switch (A)
    {
    case 0:
        if (Unknown118)
        {
            {
                cString Text(*m_Text);
                Unknown118->Virtual111(&Text, 1.0f, 0);
            }
            Unknown118->Virtual113();
            Unknown118->Virtual36();
        }
        FUN_10b307b0();
        break;
    case 1:
        PrevPage();
        Unknown164 = true;
        break;
    case 2:
        FUN_10b307b0();
        FUN_10b2fdd0();
        break;
    case 3:
    case 4:
    {
        Class_10E7BB2C* Slider;
        float First;
        float Second;
        Slider = new (0, 0, 0, 0, 0) Class_10E7BB2C();
        Unknown14C = Slider;
        First = 0.0f;
        Second = 1.0f;
        Slider->Unknown0C.Virtual0(&Second, &First, 0.25f);
        break;
    case 5:
    {
        Class_10E7BB2C* Slider5 = new (0, 0, 0, 0, 0) Class_10E7BB2C();
        Unknown14C = Slider5;
        float First5 = 1.0f;
        float Second5 = 0.0f;
        Slider5->Unknown0C.Virtual0(&Second5, &First5, 0.25f);
        break;
    }
    }
    }
    FUN_10b2f710();
}
