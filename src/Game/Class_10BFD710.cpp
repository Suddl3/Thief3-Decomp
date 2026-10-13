// Game/Class_10BFD710.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10BFD710.h"
#include "Game/Class_10991270.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10BFD4E0.h"
#include "Game/Class_10BFE6B0.h"
#include "Game/Class_10BFBE30.h"
#include "Game/Class_10BFD210.h"

class Class_10978090Result;

class Class_10BAA6B0_Param;

class Class_10C08940;

// Copied whole from include/Game/Class_10978090.h, with the two members the call sites show
// differently: Virtual5 takes an int, and FUN_10978090 returns the Class_10978090Result the symbol names.
class Class_10978090
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5(int A);
    virtual int Virtual6(int A, int B);
    virtual void Virtual7();
    virtual Class_10BAA6B0_Param* Virtual8();

    Class_10978090Result* FUN_10978090();

    Class_10C08940* Unknown04;
    int Unknown08;
};

class Class_10BFD710_Unknown50;

class Class_10C1A960;

float GetFrameDeltaTime();

extern float DAT_10eafbdc;

class Class_10C1A960
{
public:
    void FUN_10c1a960(Class_10BFD710_Unknown50* A);
};

// FUNCTION: 0x10BFCD40 ?FUN_10bfcd40@Class_10BFD710@@QAEXPAX@Z
void Class_10BFD710::FUN_10bfcd40(void* A)
{
    cIntArray* List = &Unknown08;
    for (int i = 0; i < Unknown08.Count; i++)
    {
        Class_10978090* Item = (Class_10978090*)Unknown08.Data[i];
        if (Item->FUN_10978090() == A)
        {
            if (Unknown14 == Item)
                Unknown14 = 0;
            if (Unknown18 == Item)
                Unknown18 = 0;
            if (Unknown1C == Item)
                Unknown1C = 0;
            int Last = List->Count - 1;
            int Tmp = List->Data[i];
            List->Data[i] = List->Data[Last];
            List->Data[Last] = Tmp;
            List->SetCount(List->Count - 1);
            i--;
            if (Item)
                Item->Virtual5(1);
        }
    }
}

// FUNCTION: 0x10BFD710 ?FUN_10bfd710@Class_10BFD710@@QAEXXZ
void Class_10BFD710::FUN_10bfd710()
{
    if (GetFrameDeltaTime() != 0.0 && Unknown4C == DAT_10eafbdc)
    {
        FUN_10bfce60();
        FUN_10bfc3a0();
        Class_10BFD710_Unknown50* Obj = Unknown50;
        if (Obj && Unknown04->HasTimedOut())
        {
            for (int i = 0; i < Unknown08.Count; i++)
                ((Class_10C1A960**)Unknown08.Data)[i]->FUN_10c1a960(Obj);
        }
    }
}
