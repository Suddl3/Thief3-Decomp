// Game/Unsorted_10A378F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A37780.h"
#include "Game/Struct_10A37780_Field20.h"

class UObject;

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(UObject** Value);
    virtual void Virtual7(void* V);

    char Unknown04[8];
    int Unknown0C;
    char Unknown10[4];
    int Unknown14;
    int Unknown18;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

// FUNCTION: 0x10A378F0 ?FUN_10a378f0@Class_10A37780@@QAEXAAVFArchive@@@Z
void Class_10A37780::FUN_10a378f0(FArchive& Ar)
{
    Unknown58C = true;
    int A = Virtual4();
    int B = Virtual6();
    Ar.Serialize(&A, 4);
    Ar.Serialize(&B, 4);
    FUN_10b052a0(Ar, &Unknown0C);
    Ar.Serialize(&Unknown18, 4);
    Ar.Serialize(&Unknown1C, 4);
    bool C = false;
    if (Ar.Unknown18 != 0)
        C = (Unknown20 ? Unknown20 : Unknown28) != 0;
    Ar.Serialize(&C, 1);
    if (C)
    {
        Struct_10A37780_Field20* Obj = Unknown20;
        if (Obj == 0)
            Obj = Unknown28;
        Obj->Virtual8(Ar);
    }
    if (Ar.Unknown14 != 0)
    {
        Virtual3(A);
        Virtual5(B, 0, -1.0f);
    }
    bool F = false;
    if (Ar.Unknown18 != 0)
        F = Virtual12() != 0;
    Ar.Serialize(&F, 1);
    if (F)
        Virtual12()->Virtual5(Ar);
    Unknown58C = false;
}
