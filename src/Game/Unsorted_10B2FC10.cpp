// Game/Unsorted_10B2FC10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10A242D0.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Class_10B2FCE0.h"
#include "Game/cT3ReadBookWindow.h"

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
    virtual bool Virtual54();
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
    virtual void Virtual111(const Class_109081E0& Text, float Scale, int Flag);
};

extern float DAT_10eafbdc;

// Game/Class_10A24370.h copied whole; only the parameter of FUN_10a24370 differs.
class Class_10A24370
{
public:
    void FUN_10a24370(char p1);

    char Unknown00[0x70];
    char Unknown70;
};

class Class_10B2FCE0_Unknown14C
{
public:
    virtual ~Class_10B2FCE0_Unknown14C();
    virtual bool Virtual1();
    virtual void Virtual2();
    virtual float Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(float A);

    float Unknown04;
    float Unknown08;
    char Pad0C[0xC];
    float Unknown18;
};

// FUNCTION: 0x10B2FCE0 ?FUN_10b2fce0@Class_10B2FCE0@@QAE_NM@Z
bool Class_10B2FCE0::FUN_10b2fce0(float A)
{
    bool Result = Unknown14C == 0;
    if (Unknown14C)
    {
        if (!(Unknown14C->Unknown08 <= DAT_10eafbdc))
            Unknown14C->Unknown08 = Unknown14C->Unknown08 - A;
        else
            Unknown14C->Virtual5(A * Unknown14C->Unknown04);
        char Level = (char)(Unknown14C->Virtual3() * 255.0f);
        char Old = Unknown134->Unknown70;
        if (Unknown14C->Virtual1())
        {
            Level = (char)(Unknown14C->Unknown18 * 255.0f);
            delete Unknown14C;
            Unknown14C = 0;
            Result = true;
        }
        if (Level != Old)
        {
            Unknown134->FUN_10a24370(Level);
            Unknown164 = true;
        }
    }
    return Result;
}

// FUNCTION: 0x10B2FEF0 ?FUN_10b2fef0@cT3ReadBookWindow@@QAEXXZ
void cT3ReadBookWindow::FUN_10b2fef0()
{
    if (Unknown134 != 0)
    {
        int Count = Unknown168;
        if (Unknown134->FUN_10a242d0() > Count)
        {
            if (Unknown160 >= Count)
            {
                Unknown160 -= Count;
                if (Unknown118 != 0 && Unknown118->Virtual54() && m_Text.Len() > 0)
                {
                    {
                        Class_109081E0 Text(((Class_10AF7F80*)&m_Text)->FUN_10af7f80());
                        Unknown118->Virtual111(Text, -1.1f, 0);
                    }
                    Unknown118->Virtual36();
                    return;
                }
                Virtual109(0);
            }
        }
    }
    Virtual70(0);
}
