// Game/Class_10E97BC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/FArchive.h"
#include "Game/cIntArray.h"
#include "Game/Class_10C08E90.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10FF667C_Unknown18.h"
#include "Game/Item_10C091A0.h"

extern Class_10FF667C* DAT_10ff667c;

// Class_10E97BC0 from include/Game/Class_10E97BC0.h, with slot 0 declared as this
// function and the fields it uses typed (the header keeps its vtable pointer as a field).
class Class_10E97BC0
{
public:
    Class_10E97BC0();
    virtual void FUN_10c08fa0(FArchive& Ar);

    int Unknown04;
    Class_10C08E90 Unknown08;
    cIntArray Unknown14;
    char Unknown20;
};

// FUNCTION: 0x10C08FA0 ?FUN_10c08fa0@Class_10E97BC0@@UAEXAAVFArchive@@@Z
void Class_10E97BC0::FUN_10c08fa0(FArchive& Ar)
{
    Ar.Serialize(&Unknown20, 1);
    int Value = Unknown04;
    Ar.Serialize(&Value, 4);
    if (Ar.Unknown14)
        Unknown04 = Value;
    int Count = Unknown08.Unknown00;
    Ar.Serialize(&Count, 4);
    if (Ar.Unknown14)
        Unknown08.FUN_10c089b0(Count);
    for (int i = 0; i < Count; i++)
        Unknown08.Unknown08[i].Virtual0(Ar);
    int Count2 = Unknown14.Count;
    Ar.Serialize(&Count2, 4);
    if (Ar.Unknown14)
        Unknown14.SetCount(Count2);
    for (int j = 0; j < Count2; j++)
        DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown14.Data[j]);
}
