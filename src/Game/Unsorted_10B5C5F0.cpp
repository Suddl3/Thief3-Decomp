// Game/Unsorted_10B5C5F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

class Class_10B197E0
{
public:
    void FUN_10b19550(int Count);
    void FUN_10b197e0();
    void FUN_10b5cee0(const Class_10B197E0& Other);

    ~Class_10B197E0()
    {
        FUN_10b19550(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10B1B8A0
{
public:
    Class_10B197E0 FUN_10b1a0c0(int Index);
};

Class_10B1B8A0* FUN_10b1b600();

class Class_10B5E2E0_Field204
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
    virtual void Virtual47(bool A);
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
    virtual void Virtual70(int A);
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
    virtual void Virtual120(int A, int B);
};

class Class_10B5E2E0
{
public:
    void FUN_10b5e2e0();

    char Pad00[0x1d0];
    int Unknown1D0;
    char Pad1D4[0x14];
    Class_10B197E0 Unknown1E8;
    char Pad1F4[0x10];
    Class_10B5E2E0_Field204* Unknown204;
};

// FUNCTION: 0x10B5E2E0 ?FUN_10b5e2e0@Class_10B5E2E0@@QAEXXZ
void Class_10B5E2E0::FUN_10b5e2e0()
{
    Unknown1E8.FUN_10b19550(0);
    for (int I = 0; I < 4; I++)
    {
        Class_10B197E0 Tmp = FUN_10b1b600()->FUN_10b1a0c0(I);
        Unknown1E8.FUN_10b5cee0(Tmp);
    }
    int Count = Unknown1E8.Unknown00;
    int Limit = Unknown1D0;
    bool Flag = false;
    int Diff = 0;
    if (Count > Limit)
    {
        Diff = Count - Limit;
        Flag = true;
    }
    if (Unknown204)
    {
        Unknown204->Virtual120(0, Diff);
        Unknown204->Virtual47(Flag);
        Unknown204->Virtual56(2);
        Unknown204->Virtual70(Flag ? 0 : 3);
    }
}
