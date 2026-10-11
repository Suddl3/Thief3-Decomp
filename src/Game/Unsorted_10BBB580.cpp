// Game/Unsorted_10BBB580.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10978090.h"
#include "Game/Class_10BFF240.h"
#include "Game/Class_10BFF280.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10C7D570.h"

class Class_10C16C10
{
public:
    void FUN_10c16c10(FVector* A, int B, bool C);
};

// Game/Class_10BB9FC0.h copied whole, with the fields at 0xAC and 0x210 named.
class Class_10BB9FC0
{
public:
    void FUN_10bb9e90();
    void FUN_10bb9fc0();
    void FUN_10bb9ff0();

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0xa0];
    Class_10C16C10 Unknown0AC;
    char Unknown0AD[0x163];
    Class_10BFF460* Unknown210;
    char Unknown214[0x70];
    int Unknown284;
};

// Game/Class_10BBB410.h copied whole, with this function declared.
class Class_10BBB410 : public Class_10BB9FC0
{
public:
    void FUN_10bb9f60(int A, int B);
    Class_10BFF460* FUN_10bbb410();
    void FUN_10bbb330();
    void FUN_10bbb540(int Item);
    int FUN_10bbb730();
    int FUN_10bbb620(const FVector& Param);
};

struct Struct_10BBB620
{
    FVector Unknown00;
    FVector Unknown0C;
    int Unknown18;
    void* Unknown1C;
    int Unknown20;
    int Unknown24;
};

// The object FUN_10bff2a0() returns; its slot 34 is the one called here.
class Class_10BBB620_Result
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
    virtual void Virtual33();
    virtual int Virtual34();
};

int FUN_10c19e40(void* A, Struct_10BBB620* B, int C);

// FUNCTION: 0x10BBB620 ?FUN_10bbb620@Class_10BBB410@@QAEHABVFVector@@@Z
int Class_10BBB410::FUN_10bbb620(const FVector& Param)
{
    if (Unknown210 != 0 && Unknown210->FUN_10bff460() != true)
        FUN_10bbb330();
    Class_10BFF460* Obj = Unknown210;
    if (Obj != 0 && ((Class_10BFF280*)Obj)->FUN_10bff280() != 0)
    {
        bool Flag = Obj->FUN_10bff2a0() != 0 && ((Class_10BBB620_Result*)Obj->FUN_10bff2a0())->Virtual34() != 0;
        FVector Buf;
        Unknown0AC.FUN_10c16c10(&Buf, ((Class_10BFF280*)Obj)->FUN_10bff280(), Flag);
        Class_10C7D570* Owner = Unknown08;
        int Key = ((Class_10BFF280*)Obj)->FUN_10bff280();
        void* Actor = Owner->FUN_10c7d570();
        Struct_10BBB620 S;
        S.Unknown00 = Param;
        S.Unknown0C = Buf;
        S.Unknown18 = 0x73;
        S.Unknown1C = Actor;
        S.Unknown20 = Key;
        S.Unknown24 = 0;
        return FUN_10c19e40(Unknown08->FUN_10c7d570(), &S, 0);
    }
    return 0;
}
