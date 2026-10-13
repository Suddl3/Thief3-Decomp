// Game/Unsorted_10B2C620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B2BC90_Unknown.h"

// Copied whole from include/Game/cHUDLightGem.h, with GetItem returning the object symbols.txt names.
class cHUDLightGem
{
public:
    Class_10B2BC90_Unknown* GetItem(int Index);

    char Unknown00[0xB8];
    int m_Count;
    char UnknownBC[4];
    int* m_Items;
};

class Class_10B2D600 : public cHUDLightGem
{
public:
    void RefreshNextSlots();
    void FUN_10b2c2e0(Class_10B2BC90_Unknown* Item, int Index);

    char Pad0C4[0x64];
    int Slots[5];
    int Head;
};

// FUNCTION: 0x10B2D600 ?RefreshNextSlots@Class_10B2D600@@QAEXXZ
void Class_10B2D600::RefreshNextSlots()
{
    for (int i = 1; i <= 3; i++)
    {
        Class_10B2BC90_Unknown* Item = GetItem(Slots[(Head + i) % 5]);
        if (Item)
        {
            cIntArray Found;
            Item->Virtual38(Found);
            if (Found.Count == 0 || *Found.Data == 0)
                FUN_10b2c2e0(Item, i);
        }
    }
}
