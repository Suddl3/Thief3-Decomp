// Game/Unsorted_10BE49B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C28F00.h"
#include "Game/Class_10C7D570.h"

class Class_10BF7F90;

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10BFF460;

class Class_10BBB410
{
public:
    Class_10BFF460* GetCurrent();

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[4];
    Class_10C28F00* Unknown10;
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10BE3FF0 : public Class_10BC4160
{
public:
    void ResetTimer();
};

class Class_10E96810 : public Class_10BE3FF0
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
    virtual void FUN_10be49b0(bool A);
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

    Class_10BBB410* Unknown04;
    char Unknown08[8];
    int Unknown10;
    char Unknown14[0x58];
    bool Unknown6C;
};

// FUNCTION: 0x10BE49B0 ?FUN_10be49b0@Class_10E96810@@UAEX_N@Z
void Class_10E96810::FUN_10be49b0(bool A)
{
    if (Unknown10 != 3)
    {
        Class_10bf7f90* Obj = (Class_10bf7f90*)FUN_10bc4160();
        Obj->FUN_10bf7f90(0, 1);
        if (A && Unknown04->GetCurrent() == 0)
            ResetTimer();
        Unknown6C = false;
    }
    if (!A)
    {
        if (Unknown04->Unknown10)
            Unknown04->Unknown10->Reset();
        Unknown04->Unknown08->FUN_10c7d570();
        Virtual86();
    }
}
