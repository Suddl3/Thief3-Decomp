// Game/Unsorted_10B31BE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A18E80.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39580.h"
#include "Game/Class_10B31BE0.h"

class Object_10A18FC0;

Object_10A18FC0* FUN_10a18fc0();

class Class_10B21820;

// Copied from include/Game/Class_1098E330.h with the fields at 0x440 and 0x454 added.
class Class_1098E330
{
public:
    int FUN_1098e330(int Id, int* Out);

    char Unknown00[0x440];
    Class_10B21820* Unknown440;
    char Pad444[0x10];
    float Unknown454;
};

class Class_10B32750
{
public:
    void FUN_10b31c40(Class_1098E330* A);

    char Pad00[0x18];
    float Unknown18;
    char Pad1C[0x14];
    bool Unknown30;
    bool Unknown31;
    char Unknown32;
    Class_10B31BE0 Unknown33;
};

// FUNCTION: 0x10B31C40 ?FUN_10b31c40@Class_10B32750@@QAEXPAVClass_1098E330@@@Z
void Class_10B32750::FUN_10b31c40(Class_1098E330* A)
{
    if (!Unknown32)
        return;
    if (Unknown30)
        return;
    float Want = ((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(6);
    if (Want != Unknown18)
    {
        float Delta = 0.0f;
        A->FUN_1098e330(0x100505, (int*)&Delta);
        float Step = Delta * A->Unknown454;
        if (Unknown18 > Want)
        {
            float Next = Unknown18 - Step;
            if (Next < Want)
                Unknown18 = Want;
            else
                Unknown18 = Next;
        }
        else
        {
            float Next = Unknown18 + Step;
            if (Next > Want)
                Unknown18 = Want;
            else
                Unknown18 = Next;
        }
    }
    if (Unknown18 > 0.83233f)
        Unknown18 = 0.83233f;
    ((Class_10B39580*)((Class_10AA82D0*)this)->GetLinkedObject())->FUN_10b39580(0x6c, *(int*)&Unknown18);
    Unknown33.FUN_10b31b70(A->Unknown440, *(int*)&Unknown18);
}
