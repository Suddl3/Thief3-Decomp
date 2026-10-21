// Game/Unsorted_10A56CF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include "Core/Core.h"
#include "Game/Class_1094DA60.h"

extern float DAT_10e49684;

   // 1.0f

class Class_10A4BF00_Object;

class Class_10E6A9F8;

// The length of a game string sits in the block header just before its text.
struct Struct_10A57100_Header
{
    int Length;
};

inline int StringLength(char* Text)
{
    Struct_10A57100_Header* Header = (Struct_10A57100_Header*)Text;
    return Header[-1].Length;
}

void* FUN_10a4bd70(int A);

Class_10A4BF00_Object* FUN_10a4bf00(int A);

class Class_10E6A9F8
{
public:
    void MarkDirty();
};

class Class_10E68B10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* A);
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
    virtual void Virtual32(void* A);
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
    virtual void Virtual127();
    virtual void Virtual128();
    virtual void Virtual129();
    virtual void Virtual130();
    virtual void Virtual131(void* A, void* B);

    void FUN_10a56cf0(FVector* A, FVector* B);
    void FUN_10a56ed0(FVector* A);
    void FUN_10a65110();
    void FUN_10a57100();

    char Pad04[0x18];
    FVector Unknown1C;
    char Unknown28[0xC];
    FVector Unknown34;
    char Unknown40[0x110];
    unsigned char Unknown150;
    unsigned char Unknown151;
    char Unknown152[0x66];
    char* Unknown1B8;
    char Pad1BC[4];
    char* Unknown1C0;
    int Unknown1C4;
};

// FUNCTION: 0x10A57100 ?FUN_10a57100@Class_10E68B10@@QAEXXZ
void Class_10E68B10::FUN_10a57100()
{
    if (!Unknown1C4)
    {
        if (Unknown1B8 && StringLength(Unknown1B8) > 0)
        {
            Virtual131(FUN_10a4bf00((int)FUN_10a4bd70((int)&Unknown1B8)), &Unknown1C0);
        }
        else
        {
            return;
        }
    }

    if (Virtual54())
    {
        FVector* Start = &Unknown1C;
        FVector Pos = *Start;
        if (Unknown1C0 && StringLength(Unknown1C0) > 0)
        {
            FVector* Goal = &Unknown34;
            FVector Target = *Goal;
            FUN_10a56cf0(&Pos, &Target);
            float Dx = Goal->X - Target.X;
            float Dy = Goal->Y - Target.Y;
            float Dz = Goal->Z - Target.Z;
            if (sqrtf(Dx * Dx + Dy * Dy + Dz * Dz) > DAT_10e49684)
            {
                Virtual32(&Target);
            }
        }
        else
        {
            if (((Class_1094DA60*)this)->FUN_1094da60())
            {
                Virtual113();
                if (Unknown151)
                {
                    Unknown150 = 0;
                    Unknown151 = 0;
                }
                else
                {
                    Virtual112();
                    Virtual109();
                    Unknown151 = 1;
                }
            }
            FUN_10a56ed0(&Pos);
        }

        float Dx = Start->X - Pos.X;
        float Dy = Start->Y - Pos.Y;
        float Dz = Start->Z - Pos.Z;
        if (sqrtf(Dx * Dx + Dy * Dy + Dz * Dz) > DAT_10e49684)
        {
            Virtual5(&Pos);
            ((Class_10E6A9F8*)this)->MarkDirty();
        }
    }

    FUN_10a65110();
}
