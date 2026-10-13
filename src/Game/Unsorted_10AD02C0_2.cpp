// Game/Unsorted_10AD02C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10ACF9A0.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B82390.h"
#include "Game/Class_10AD0210.h"

extern void* DAT_10e47850[];

class Class_10AD01A0 : public Class_10AF4B90
{
public:
    Class_10AD01A0() { FUN_10af4b90(0x27, DAT_10e47850); }
    ~Class_10AD01A0();
};

class Class_10AD0200 : public Class_10AD01A0
{
public:
    int Unknown0C;
};

class Class_10AD0350 : public Class_10ACF9A0
{
public:
    void FUN_10ad0350(int Id);
};

// FUNCTION: 0x10AD0350 ?FUN_10ad0350@Class_10AD0350@@QAEXH@Z
void Class_10AD0350::FUN_10ad0350(int Id)
{
    Class_10AD0200 Item;
    Class_10B82390* Found = FUN_10acf690(Id);
    if (Found)
    {
        Found->FUN_10b82390(0x8056b, &Item);
    }
    Item.Unknown0C++;
    Found = FUN_10acf690(Id);
    if (Found)
    {
        ((Class_10AD0210*)Found)->CreateItem(0x8056b, (int)&Item);
    }
}
