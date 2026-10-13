// Game/cRadiusPinger_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include "Game/cActorManager.h"

class AActor;

class Object_10A73870_B;

class Object_10A73870_C;

extern float DAT_10eafbdc;

extern float DAT_10e49684;

class cRadiusPinger : public cActorManager
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
    virtual float FUN_10a738c0(int A, float B, float C);

    cRadiusPinger();
};

// FUNCTION: 0x10A738C0 ?FUN_10a738c0@cRadiusPinger@@UAEMHMM@Z
float cRadiusPinger::FUN_10a738c0(int A, float B, float C)
{
    float V = DAT_10eafbdc;
    switch (A)
    {
    case 0:
        return DAT_10e49684 - B / C;
    case 1:
    {
        float T = DAT_10e49684 - (DAT_10e49684 / C) * B;
        return T * T;
    }
    case 3:
        return sqrtf(DAT_10e49684 - B / C);
    case 2:
    case 4:
        if (B > C)
            return DAT_10eafbdc;
        V = DAT_10e49684;
        break;
    }
    return V;
}
