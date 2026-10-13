// Game/Unsorted_10C07330.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C07070.h"
#include "Game/Class_10C07ED0.h"

class Class_10C07690Arg
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
    virtual int Virtual85();
};

class cIntArray
{
public:
    void SetCount(int A);

    int Unknown00;
    int m_CapacityBytes;
    void** Unknown08;
};

class Class_10E97B68
{
public:
    void AddIfMissing(Class_10C07690Arg* A, int B);
    bool FUN_10c06ff0(Class_10C07690Arg* A, Class_10E97B68** Local, Class_10C07690Arg** Key);

    int Unknown00;
    int Unknown04;
    cIntArray m_Lists[5];
    short m_Counts[5];
};

extern int DAT_10ff66a8;

// FUNCTION: 0x10C07690 ?AddIfMissing@Class_10E97B68@@QAEXPAVClass_10C07690Arg@@H@Z
void Class_10E97B68::AddIfMissing(Class_10C07690Arg* A, int B)
{
    Class_10C07690Arg* Obj = A;
    Class_10E97B68* Local;
    if (FUN_10c06ff0(Obj, &Local, &A))
        return;
    int Kind = Obj->Virtual85();
    if (Kind != 1 && Kind != 2)
        m_Counts[B]++;
    cIntArray& Arr = m_Lists[B];
    int Count = Arr.Unknown00;
    Arr.SetCount(Count + 1);
    Arr.Unknown08[Count] = Obj;
}

// FUNCTION: 0x10C07ED0 ?UpdatePopulation@Class_10C07ED0@@QAEXXZ
void Class_10C07ED0::UpdatePopulation()
{
    if (DAT_10ff66a8 > 0)
    {
        DAT_10ff66a8 = DAT_10ff66a8 - 1;
        return;
    }
    DAT_10ff66a8 = 15;
    if (GetRemainingCapacity() > UnknownA4)
    {
        FUN_10c07330();
        return;
    }
    int i = 0;
    short* Pair = Unknown44;
    for (; i < 5; i++, Pair++)
    {
        if (*Pair < Pair[12])
            FUN_10c076f0(i);
    }
}
