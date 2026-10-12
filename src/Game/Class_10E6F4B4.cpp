// Game/Class_10E6F4B4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_1092F270.h"

class APawn;

class APlayerPawn
{
    DECLARE_CLASS(APlayerPawn, APawn, 0x0, Engine)
};

class Class_10951900;

class Class_10ABBF70_Unknown00 : public UObject
{
public:
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
    virtual FLOAT Virtual69();
    char Unknown2C[0x88];
    Class_1092F270* UnknownB4;
};

struct Struct_10ABBF70
{
    Class_10ABBF70_Unknown00* Unknown00;
    char Unknown04[0x10];
};

class Class_10E6F4B4
{
public:
    virtual void FUN_10abbf70(int Arg0, int Arg1);
    char Unknown04[0x10];
    INT Unknown14;
    char Unknown18[4];
    Struct_10ABBF70* Unknown1C;
    void FUN_10abba80(int Arg0, int Arg1, Class_10951900* Arg2, FLOAT Arg3, const FVector& Arg4);
};

// FUNCTION: 0x10ABBF70 ?FUN_10abbf70@Class_10E6F4B4@@UAEXHH@Z
void Class_10E6F4B4::FUN_10abbf70(int Arg0, int Arg1)
{
    for (INT i = 0; i < Unknown14; i++)
    {
        Class_10ABBF70_Unknown00* Obj = Unknown1C[i].Unknown00;
        FLOAT Value = Obj->Virtual69();
        Class_1092F270* Sub = Obj->UnknownB4;
        if (Sub)
        {
            Class_10951900* Result = Sub->GetOrCreate(1);
            if (Result)
            {
                Obj->IsA(APlayerPawn::StaticClass());
                FVector Scale(1.0f, 1.0f, 1.0f);
                FUN_10abba80(Arg0, i, Result, Value, Scale);
            }
        }
    }
}
