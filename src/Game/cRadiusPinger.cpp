// Game/cRadiusPinger.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"

class Object_10A73870_B
{
public:
    int Unknown00;
    int Unknown04;
};

class Object_10A73870_P
{
public:
    int Unknown00;
};

class Object_10A73870_C
{
public:
    int Unknown00;
    Object_10A73870_P* Unknown04;
};

class cRadiusPinger
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7(AActor* A);
    virtual void FUN_10a73870(AActor* A, Object_10A73870_B* B, Object_10A73870_C* C);
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16(AActor* A);
};

// FUNCTION: 0x10A73870 ?FUN_10a73870@cRadiusPinger@@UAEXPAVAActor@@PAVObject_10A73870_B@@PAVObject_10A73870_C@@@Z
void cRadiusPinger::FUN_10a73870(AActor* A, Object_10A73870_B* B, Object_10A73870_C* C)
{
    if (B->Unknown04 == 0x80378)
    {
        Object_10A73870_P* P = C->Unknown04;
        Virtual7(A);
        if (!A->bDeleteMe && !(A->ObjectFlags & 0x800000) && P && !(P->Unknown00 & 1))
            Virtual16(A);
    }
}
