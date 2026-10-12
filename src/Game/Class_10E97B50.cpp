// Game/Class_10E97B50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Item_10943600.h"
#include "Game/Class_10943600.h"
#include "Game/Class_10E97B50.h"

extern void* DAT_10e97b50[];

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B);

    char Unknown04[0x08];
    int ArVer;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Value);

// FUNCTION: 0x10C04C80 ??0Class_10E97B50@@QAE@AAVFArchive@@@Z
Class_10E97B50::Class_10E97B50(FArchive& Ar)
    : VTable(DAT_10e97b50), Unknown04(0), Unknown08(0), Unknown0C(false), Unknown10(0), Unknown14(), Unknown20()
{
    int Count = 0;
    Ar.Virtual1(&Count, 4);
    Unknown14.FUN_10da4f50(Count);
    Item_10943600 Item;
    for (int I = 0; I < Count; I++)
    {
        FUN_10b052a0(Ar, &Item);
        Unknown14.Unknown08[I] = Item;
    }
    Item_10943600 Value;
    FUN_10b052a0(Ar, &Value);
    FUN_10c049c0(&Value);
    if (Ar.ArVer >= 2)
        Ar.Virtual1(&Unknown04, 4);
    Ar.Virtual1(&Unknown0C, 1);
}
