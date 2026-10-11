// Game/Class_10E9B088_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class UObject;

// Class_10E9B088 copied from include/Game/Class_10E9B088.h, with the virtual table it
// needs (its vptr sits at 0, so the header's first int is at 4) and the fields this
// function serializes.
class Class_10E9B088
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
    virtual void Virtual26(void* A, FArchive& Ar);

    void FUN_10c3da10(int A);

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    char Unknown28;
    char Unknown29;
    char Unknown2A;
    char Unknown2B;
    int Unknown2C;
    int Unknown30;
    UObject* Unknown34;
    char Unknown38[0xC];
};

// FUNCTION: 0x10C3DA10 ?FUN_10c3da10@Class_10E9B088@@QAEXH@Z
void Class_10E9B088::FUN_10c3da10(int A)
{
    FArchive& Ar = *(FArchive*)A;
    Ar.Serialize(&Unknown04, 4);
    Ar.Serialize(&Unknown08, 4);
    Ar.Serialize(&Unknown0C, 4);
    Ar.Serialize(&Unknown10, 4);
    Ar.Serialize(&Unknown14, 4);
    Ar.Serialize(&Unknown18, 4);
    Ar.Serialize(&Unknown20, 4);
    Ar.Serialize(&Unknown24, 4);
    Ar.Serialize(&Unknown28, 1);
    Ar.Serialize(&Unknown29, 1);
    Ar.Serialize(&Unknown2A, 1);
    Ar.Serialize(&Unknown2B, 1);
    Virtual26(&Unknown2C, Ar);
    Ar.Virtual7(&Unknown30);
    Ar.Virtual6(&Unknown34);
    FUN_10b052a0(Ar, &Unknown38);
    if (Ar.Unknown0C >= 0x5b)
        Ar.Serialize(&Unknown1C, 4);
}
