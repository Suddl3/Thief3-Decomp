// Game/Unsorted_10B2C620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B2BC90_Unknown.h"
#include "Game/Class_10A52EE0.h"
#include "Game/Class_10B2D600.h"

// FUNCTION: 0x10B2D600 ?RefreshNextSlots@Class_10B2D600@@QAEXXZ
void Class_10B2D600::RefreshNextSlots()
{
    for (int i = 1; i <= 3; i++)
    {
        Class_10B2BC90_Unknown* Item = (Class_10B2BC90_Unknown*)GetItem(Slots[(Head + i) % 5]);
        if (Item)
        {
            cIntArray Found;
            Item->Virtual38(Found);
            if (Found.Count == 0 || *Found.Data == 0)
                FUN_10b2c2e0(Item, i);
        }
    }
}
