// Game/Unsorted_10B756D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E83E20.h"

class Class_10E822B0;

// Copied from include/Game/Class_10B7B910.h with the three state methods added.
class Class_10B7B910
{
public:
    Class_10B7B910* Init();
    bool FUN_10b7b920(Class_10E822B0* A);
    int FUN_10b7b980(Class_10E822B0* A, int B);
    int FUN_10b7bd10(Class_10E822B0* A, int B);

    int Field00;
};

class Class_10E876D0
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
    virtual void Virtual77(int A);
    virtual void Virtual78(int A);
    virtual void Virtual79();
    virtual bool Virtual80();
    virtual bool Virtual81();
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
    virtual void FUN_10b75730(int A);

    char Pad04[0x1CC];
    Class_10B7B910 Unknown1D0;
};

// FUNCTION: 0x10B75730 ?FUN_10b75730@Class_10E876D0@@UAEXH@Z
void Class_10E876D0::FUN_10b75730(int A)
{
    int State = Unknown1D0.Field00;
    bool Hold = false;
    switch (State)
    {
    case 1:
        if (Virtual81() || Virtual80())
        {
            if (Unknown1D0.FUN_10b7b920((Class_10E822B0*)this))
            {
                Unknown1D0.Field00 = 2;
                Hold = true;
            }
        }
        else
        {
            Hold = true;
        }
        break;
    case 2:
        if (!Virtual81() && !Virtual80())
            Hold = true;
        break;
    case 4:
        if (Virtual81() || Virtual80())
        {
            if (Unknown1D0.FUN_10b7b920((Class_10E822B0*)this))
            {
                Unknown1D0.Field00 = 0;
                Virtual56(0);
            }
        }
        else
        {
            Hold = true;
        }
        break;
    }
    if (Hold)
    {
        Virtual77(Unknown1D0.FUN_10b7b980((Class_10E822B0*)this, State));
        Virtual78(Unknown1D0.FUN_10b7bd10((Class_10E822B0*)this, State));
    }
    ((Class_10E83E20*)this)->FUN_10a58950(A);
}
