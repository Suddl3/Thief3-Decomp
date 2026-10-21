// Game/Unsorted_10A55B80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109E4880.h"

class Class_10A2AEF0
{
public:
    virtual void Virtual0();
    void FUN_10a2aef0(int* A, int B, int C, int D, int E, int F, int G, int H, int* I);
};

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class WindowManager : public Class_109E4880
{
};

extern WindowManager* GWindowManager;

class Class_1091CCB0
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10941AC0
{
public:
    Class_10941AC0()
    {
        Unknown04.Unknown00 = 0;
        Unknown04.Unknown04 = 0;
        Unknown04.Unknown08 = 0;
        Unknown10 = 0;
        Unknown18 = -1;
        Unknown14 = 0;
        Unknown1C = 0;
        Unknown00 = false;
    }

    void Reset();
    void FUN_10941890(int A, int B);

    bool Unknown00;
    Class_1091CCB0 Unknown04;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
};

class Class_10A248C0 : public Class_10A2AEF0
{
public:
    Class_10A248C0();
    virtual ~Class_10A248C0() {}
    void FUN_10a2add0(int A, Class_10941AC0* B, int C, int D);
    void FUN_10a2aff0(int A, Class_10941AC0* B, int C, int D);

    char Unknown04[0x54];
    char Unknown58;
    char Unknown59[0x8C - 0x59];
};

class Class_10A55B80_Result
{
public:
    float Unknown00;
    float Unknown04;
};

struct Struct_10A55B80
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10A55B80
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
    virtual Class_10A55B80_Result* Virtual33();
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
    virtual Class_10A55B80_Result* Virtual72(Struct_10A55B80* A);
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

    char Unknown04[0x114];
    char Unknown118;
    bool Unknown119;
    char Unknown11A[2];
    int Unknown11C;
    bool Unknown120;
    char Unknown121[3];
    int Unknown124;
    char Unknown128[4];
    Class_10A248C0* Unknown12C;
    Class_10941AC0* Unknown130;
    int Unknown134;

    void FUN_10a55b80();
};

// FUNCTION: 0x10A55B80 ?FUN_10a55b80@Class_10A55B80@@QAEXXZ
void Class_10A55B80::FUN_10a55b80()
{
    if (!Unknown120)
        return;

    if (!Unknown12C)
    {
        Unknown12C = new(0, 0, 0, 0, 0) Class_10A248C0;
    }

    if (!Unknown130)
    {
        Unknown130 = new(0, 0, 0, 0, 0) Class_10941AC0;
    }

    Unknown130->Reset();
    Unknown12C->Unknown58 = Unknown118;

    float ScaleX = 1.0f;
    float ScaleY = 1.0f;
    GWindowManager->GetUIScreenScale(&ScaleX, &ScaleY);

    Class_10A55B80_Result* Left = Virtual33();
    Unknown12C->FUN_10a2aef0(&Unknown124, 0, 0, 0, 0, (int)(ScaleX * Left->Unknown00), (int)(ScaleY * Virtual33()->Unknown04), 1, 0);

    Virtual109();

    if (!Unknown119)
    {
        Struct_10A55B80 First;
        Struct_10A55B80 Second;
        Class_10A55B80_Result* A = Virtual72(&First);
        Class_10A55B80_Result* B = Virtual72(&Second);
        Unknown12C->FUN_10a2add0(Unknown134, Unknown130, (int)(ScaleX * A->Unknown00), (int)(ScaleY * B->Unknown04));
    }
    else
    {
        Struct_10A55B80 First;
        Struct_10A55B80 Second;
        Class_10A55B80_Result* A = Virtual72(&First);
        Class_10A55B80_Result* B = Virtual72(&Second);
        Unknown12C->FUN_10a2aff0(Unknown11C, Unknown130, (int)(ScaleX * A->Unknown00), (int)(ScaleY * B->Unknown04));
    }

    Unknown130->FUN_10941890(2, 1);
    Unknown120 = false;
}
