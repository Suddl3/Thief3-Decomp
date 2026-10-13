// Game/Unsorted_10B1B310.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3Player/T3PlayerClasses.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10B25010_Member.h"
#include "Game/Struct_10B1B8A0_List.h"

extern Struct_10AA3520* DAT_10f35dec;

class Class_10B1B8A0_Arg;

class Class_10B1B8A0
{
public:
    Class_10B1B8A0();
    ~Class_10B1B8A0();

    void FUN_10b1a400(FArchive& Ar);
    void FUN_10b1a840();
    void EmptyArrays();
    void FUN_10b1b220(int p1, int p2);
    void FUN_10b1b8a0(Class_10B1B8A0_Arg* p1);
    void FUN_10b1abd0(int A);
    void FUN_10b1ac30();
    void FUN_10b1b310();
    void FUN_10b1b8a0(int A);
    bool FUN_10b1b7f0(int A);
    void FUN_10b1afd0(int A, int B);

    char Unknown00[4];
    Struct_10B1B8A0_List ListA;
    Struct_10B1B8A0_List ListB;
    Class_10B25010_Member Unknown1C;
    char Pad28[0x3c];
};

// FUNCTION: 0x10B1B310 ?FUN_10b1b310@Class_10B1B8A0@@QAEXXZ
void Class_10B1B8A0::FUN_10b1b310()
{
    AGarrett* Garrett = Cast<AGarrett>((UObject*)DAT_10f35dec->Unknown08);
    if (Garrett)
    {
        for (int i = 0; i < Garrett->RemovedInventory.Num(); i++)
            FUN_10b1afd0((int)Garrett->RemovedInventory(i).invClass, Garrett->RemovedInventory(i).num);
        Class_10AF4BB0* Array = (Class_10AF4BB0*)&Garrett->RemovedInventory;
        Array->Unknown04 = 0;
        Array->Unknown08 = 0;
        Array->FUN_10af3b50(sizeof(FRemovedInventoryInfo));
    }
}
