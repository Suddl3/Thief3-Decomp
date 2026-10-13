// Game/Class_10E6CC48.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10B36E40_Arg.h"
#include "Game/Class_10AB37C0.h"
#include "Core/Core.h"
#include "Engine/EngineClasses.h"

class Class_10C08940;

class Class_10E6BF84
{
public:
    Class_10E6BF84();
    virtual ~Class_10E6BF84() {}

    void FUN_10d51e20(int A);
    int FUN_10d521c0(Class_10C08940* A, Class_10E6BF84* B);

    int Unknown04;
    int Unknown08;
};

APlayerPawn* FUN_10983ca0(APlayerPawn* Obj);

struct Struct_10AA3520
{
    char Unknown00[0x08];
    APlayerPawn* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

extern const char DAT_10e47660[];

class Class_10E6CC48 : public Class_10AAB5C0
{
public:
    virtual int FUN_10a93660(int A, int B);
};

// FUNCTION: 0x10A93660 ?FUN_10a93660@Class_10E6CC48@@UAEHHH@Z
int Class_10E6CC48::FUN_10a93660(int A, int B)
{
    Class_10B36E40_Arg* Obj1 = (Class_10B36E40_Arg*)GetUnknown08();
    Class_10AB37C0* Obj1Result = Obj1->Virtual4(0);
    const char* Str = *(const char**)Obj1Result->GetName();
    if (!Str)
        Str = DAT_10e47660;
    FName Name(Str, FNAME_Add);
    Class_10B36E40_Arg* Obj2 = (Class_10B36E40_Arg*)GetUnknown08();
    Class_10978090* Obj3 = (Class_10978090*)Obj2->Virtual4(1);
    Class_10B36E40_Arg* Obj4 = (Class_10B36E40_Arg*)GetUnknown08();
    Class_10AAB5C0* Obj5 = (Class_10AAB5C0*)Obj4->Virtual4(2);
    int V = Obj5->GetUnknown08();
    if (DAT_10f35dec && DAT_10f35dec->Unknown08)
    {
        APlayerPawn* Pawn = FUN_10983ca0(DAT_10f35dec->Unknown08);
        if (Pawn && Pawn->HasGoal(&Name))
        {
            int Q = Pawn->GetGoalState(&Name);
            Class_10E6BF84 Local1;
            Class_10E6BF84 Local2;
            Local1.FUN_10d51e20(Q);
            Local2.FUN_10d51e20(V);
            return Local1.FUN_10d521c0(Obj3->FUN_10978090(), &Local2);
        }
    }
    return 0;
}
