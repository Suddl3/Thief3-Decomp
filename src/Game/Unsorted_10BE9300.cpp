// Game/Unsorted_10BE9300.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10E8BE68.h"

class Class_10E96EB0
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
    virtual void FUN_10be9460();

    void FUN_10be9300();
    Struct_10BC4240_Param* FUN_10bc58f0(int A, int B, int C);

    Class_10BBB410* Unknown04;
    char Unknown08[0x38];
    void* Unknown40;
};

// FUNCTION: 0x10BE9460 ?FUN_10be9460@Class_10E96EB0@@UAEXXZ
void Class_10E96EB0::FUN_10be9460()
{
    if (Unknown40 == 0)
    {
        ((Class_10E8BE68*)this)->PopState();
        return;
    }
    FUN_10be9300();
    Struct_10BC4240_Param* P = 0;
    Class_10BFF460* Obj = Unknown04->GetCurrent();
    void* O = Unknown40;
    if (Obj && O != Obj->FUN_10bff2a0())
    {
        P = FUN_10bc58f0(0, 0, 1);
    }
    if (!P)
    {
        P = ((Class_10E8BE68*)this)->FUN_10bca700();
        if (!P)
            return;
    }
    ((Class_10E8BE68*)this)->FUN_10bc4240(P, false);
}
