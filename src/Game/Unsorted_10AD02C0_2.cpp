// Game/Unsorted_10AD02C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ACF9A0.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B82390.h"
#include "Game/Class_10AD0210.h"
#include "Game/Class_10AD01A0.h"
#include "Game/Class_10AD0200.h"
#include "Game/Class_10AD0350.h"

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
