// Game/Unsorted_10B9C060_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_1096D780.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10AA82E0.h"

class AAIFactionModel;

class Class_10BABED0;

class Class_10BAA6B0_Param;

class Class_10BBDB40;

struct Struct_10AA3520
{
    char Unknown00[0x8];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

class AAIPawn : public APawn
{
    DECLARE_CLASS(AAIPawn, APawn, 0x0, AICore)

public:
    void FUN_10bc2ff0();
    void FUN_10bc3590(int A);
    void FUN_10bc3670(int A, AAIFactionModel* B);

    char Unknown208[0x28];
    AAIFactionModel* FactionModel;
};

class Class_10B9C060_Get
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
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41(AAIPawn* A, FRotator* B);
};

UClass* FUN_109016e0();

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* A);

// FUNCTION: 0x10B9C060 ?FUN_10b9c060@@YAXPAVAAIPawn@@@Z
void FUN_10b9c060(AAIPawn* Pawn)
{
    if (Pawn && Pawn->IsA(AAIPawn::StaticClass()))
    {
        Class_10BABED0* Item = FUN_10baa6b0((Class_10BAA6B0_Param*)Pawn);
        Class_10BBDB40* Child = ((Class_10C7D570*)Item)->FUN_10dbd510();
        int Result = ((Class_10AA82E0*)Child)->FUN_10aa82e0();

        int Key = 0;
        if (((Class_1098E330*)Pawn)->FUN_1098e330(0x2047b, &Key))
        {
            if (Key == DAT_10f35dec->Unknown08)
                Pawn->FUN_10bc3590(Result);
            else if (Key)
            {
                if (((UObject*)Key)->IsA(FUN_109016e0()) && ((AAIPawn*)Key)->FactionModel)
                    Pawn->FUN_10bc3670(Result, ((AAIPawn*)Key)->FactionModel);
            }
            Pawn->FUN_10bc2ff0();
        }

        Class_1096D780* Actor = (Class_1096D780*)Pawn;
        FRotator Rot = Actor->Unknown38;
        Rot.Roll = Actor->Unknown38.Roll % 0xffff;
        if (Rot.Roll != Actor->Unknown38.Roll && Actor->Get())
            ((Class_10B9C060_Get*)Actor->Get())->Virtual41(Pawn, &Rot);
    }
}
