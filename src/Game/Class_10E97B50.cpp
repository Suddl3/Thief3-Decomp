// Game/Class_10E97B50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"
#include "Game/Item_10943600.h"

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

// Game/Class_10943600.h copied whole, with the constructor and destructor its objects use (the header has neither).
class Class_10943600
{
public:
    Class_10943600() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10943600();

    int FUN_10943600(const Item_10943600* Item);
    void FUN_10da4f50(int NewCount);
    void Empty()
    {
        FUN_10da4f50(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    Item_10943600* Unknown08;
};

class Class_10E97B50
{
public:
    Class_10E97B50(FArchive& Ar);

    void FUN_10c049c0(void* A);

    void** VTable;
    int Unknown04;
    int Unknown08;
    bool Unknown0C;
    int Unknown10;
    Class_10943600 Unknown14;
    Class_10BFBD70 Unknown20;
};

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
