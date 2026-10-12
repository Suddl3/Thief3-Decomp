// Game/Class_10E682F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_109501A0.h"
#include "Game/Class_10DB58F0.h"

class Class_10E9CB00;

class Class_109501A0;

class Class_10B697A0;

class Class_10E5B578;

class Class_10E5D650;

class Class_10E8C35C_Secondary;

struct Struct_10C14320;

struct Struct_109501A0;

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E50610
{
public:
    virtual ~Class_10E50610() {}
};

class Class_10E682E0 : public Class_10E50610
{
public:
    Class_10E682E0()
    {
        Unknown04 = 0;
    }

    int Unknown04;
};

Class_10DB58F0* FUN_10db58f0();

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E8C35C_Secondary* A, int B, Struct_10C14320* C, int D);
    virtual void Virtual2(Class_10E5B578* A);
    virtual void Virtual3(Class_10E5D650* Listener, int Code, int A, int B);
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, Class_10E682E0* C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class cFMVWindow
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
    virtual void FUN_10a54d50();

    char Unknown04[0x114];
    Class_109501A0* m_Stream;
    Class_109081E0 m_MovieName;
    bool Unknown120;
    unsigned char Unknown121;

    void Play(const Class_109081E0& Name, int Flag);
};

// FUNCTION: 0x10A54EB0 ?Play@cFMVWindow@@QAEXABVClass_109081E0@@H@Z
void cFMVWindow::Play(const Class_109081E0& Name, int Flag)
{
    if (m_Stream)
        FUN_10a54d50();
    Class_109081E0 Desc;
    FUN_10db58f0()->Virtual24(*Name, 9, &Desc, 1);
    m_Stream = new(0, 0, 0, 0, 0) Class_109501A0(Desc, Flag, 1.0f, Unknown121);
    m_MovieName = Name;
    Unknown120 = false;
    Class_10E682E0 Local;
    DAT_10f46da0->Virtual5(0x77, -1, &Local, 0);
}
