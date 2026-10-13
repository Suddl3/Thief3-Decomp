// Game/AAIPawnController_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/Class_10B9C9A0.h"
#include "AICore/AICoreClasses.h"

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
            Class_10B9BE00_Unknown118* P = (Class_10B9BE00_Unknown118*)pad0.Unknown00;
            if (P)
            {
                if (Pawn && Ar.ArIsLoading)
                {
                    Virtual95(Pawn, 1);
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
