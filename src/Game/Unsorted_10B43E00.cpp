// Game/Unsorted_10B43E00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B27220.h"
#include "Game/Class_10B744F0.h"
#include "Game/Class_10D4ACC0.h"

class cString;

class Class_10B43160_Member;

class Class_10B78320_Member;

class Class_10D4AE40;

// The element of the array Class_10E80C78::Unknown1A0 points to.
struct Class_10B44050_Element
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

// The object Class_10E80C78::Unknown1B0 points to.
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
    virtual bool Virtual54();
};

// Class_10B78320 copied from include/Game/Class_10B78320.h with the fields the code reads.
class Class_10B78320
{
public:
    virtual void Virtual0();

    void FUN_10b78320();

    char Pad04[0x160];
    int Unknown164;
    char Pad168[0x20];
    Class_10B78320_Member* Unknown188;
    char Pad18C[0xC];
    int Unknown198;
    char Pad19C[4];
    Class_10B44050_Element* Unknown1A0;
};

class Class_10E80C78 : public Class_10B78320
{
public:
    cString GetPaneFileName();
    void FUN_10b43160();
    void FUN_10b43e00();
    void FUN_10b44050(int Index);

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
    virtual Class_10B744F0* Virtual41();
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
    virtual void Virtual111();
    virtual void Virtual112();
    virtual void Virtual113();
    virtual void Virtual114();
    virtual void Virtual115();
    virtual void Virtual116();
    virtual void Virtual117();
    virtual void Virtual118();
    virtual void Virtual119();
    virtual void Virtual120();
    virtual void Virtual121();
    virtual void Virtual122();
    virtual void Virtual123();
    virtual void Virtual124();
    virtual void Virtual125();
    virtual void Virtual126();

    Class_10B43160_Member* Unknown1A4;
    Class_10B43160_Member* Unknown1A8;
    Class_10B43160_Member* Unknown1AC;
    Class_10B43160_Member* Unknown1B0;
    char Unknown1B4[4];
    int Unknown1B8;
    int Unknown1BC;
    int Unknown1C0;
};

void* FUN_10b154d0();

Class_10D4ACC0 FUN_10d4acc0();

// FUNCTION: 0x10B44050 ?FUN_10b44050@Class_10E80C78@@QAEXH@Z
void Class_10E80C78::FUN_10b44050(int Index)
{
    Class_10D4ACC0 Local = FUN_10d4acc0();
    if (Local.FUN_10d4b5c0(Unknown1A0[Index].Unknown08))
    {
        Local.FUN_10d4b520(Unknown1A0[Index].Unknown08);
    }
    this->FUN_10b43e00();
    static_cast<Class_10B27220*>(FUN_10b154d0())->RequestStop(3);
    Unknown1B8 = 0;
    Unknown1BC = 0;
    Unknown1C0 = 0;
    if (Index >= Unknown198)
    {
        if (Unknown198 == 0)
        {
            Class_10B744F0* Obj = this->Virtual41();
            if (Obj->Virtual117() > 1)
            {
                Obj->Virtual1(0x1c, 1, 1);
            }
            else if (Unknown1B0->Virtual54())
            {
                Obj->Virtual1(0x1a, 1, 1);
            }
            else
            {
                Obj->Virtual102(0);
            }
        }
        else if (Unknown164 > 0)
        {
            this->Virtual126();
        }
        else
        {
            Class_10B744F0* Obj = this->Virtual41();
            Obj->Virtual1(0x19, 1, 1);
        }
    }
    else
    {
        this->Virtual126();
    }
    this->Virtual123();
    Class_10B744F0* Obj = this->Virtual41();
    if (Obj && Obj->Virtual39() == 0x73)
    {
        Obj->FUN_10b744f0();
    }
}
