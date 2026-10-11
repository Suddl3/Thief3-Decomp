// Game/AAIPawnController_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Engine/EngineClasses.h"
#include "Game/Class_10B9C9A0.h"

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(void* Value);
    char Unknown04[0x08];
    int ArVer;
    int Unknown10;
    int ArIsLoading;
};

class Class_10B9BE00_Unknown00
{
public:
    virtual void Virtual0(FArchive& Ar);
    virtual void Virtual1(FArchive& Ar);
};

class Class_10B9BE00_Unknown04
{
public:
    virtual void Virtual0(FArchive& Ar);
    virtual void Virtual1(FArchive& Ar);
};

class Class_10B9BE00_Unknown08
{
public:
    virtual void Virtual0(FArchive& Ar);
    virtual void Virtual1(FArchive& Ar);
};

class Class_10B9BE00_Unknown0C
{
public:
    virtual void Virtual0(FArchive& Ar);
    virtual void Virtual1(FArchive& Ar);
};

class Class_10B9BE00_Unknown10
{
public:
    virtual void Virtual0(FArchive& Ar);
    virtual void Virtual1(FArchive& Ar);
};

class Class_10B9BE00_Unknown118
{
public:
    Class_10B9BE00_Unknown00* Unknown00;
    Class_10B9BE00_Unknown04* Unknown04;
    Class_10B9BE00_Unknown08* Unknown08;
    Class_10B9BE00_Unknown0C* Unknown0C;
    Class_10B9BE00_Unknown10* Unknown10;
};

class AAIPawnController : public AAIController
{
    DECLARE_CLASS(AAIPawnController, AAIController, 0x0, AICore)

public:
    virtual void Destroy();
    virtual ~AAIPawnController();
    virtual void Serialize(FArchive& Ar);
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
    virtual void Virtual75(APawn* A, int B);

public:
    BITFIELD initialized:1;
    Class_10B9C9A0 Unknown118;
};

// FUNCTION: 0x10B9BE00 ?Serialize@AAIPawnController@@UAEXAAVFArchive@@@Z
void AAIPawnController::Serialize(FArchive& Ar)
{
    AActor::Serialize(Ar);
    if (Ar.ArVer >= 0x20)
    {
        bool Flag = true;
        Ar.Serialize(&Flag, 1);
        if (Flag)
        {
            Class_10B9BE00_Unknown118* P = (Class_10B9BE00_Unknown118*)Unknown118.Unknown00;
            if (P)
            {
                if (Pawn && Ar.ArIsLoading)
                {
                    Virtual75(Pawn, 1);
                }
                if (Ar.ArVer >= 0x3f && P->Unknown10)
                {
                    P->Unknown10->Virtual0(Ar);
                }
                if (P->Unknown08)
                {
                    P->Unknown08->Virtual1(Ar);
                }
                if (P->Unknown04)
                {
                    P->Unknown04->Virtual1(Ar);
                }
                if (P->Unknown00)
                {
                    P->Unknown00->Virtual1(Ar);
                }
                if (P->Unknown0C)
                {
                    P->Unknown0C->Virtual0(Ar);
                }
            }
        }
    }
}
