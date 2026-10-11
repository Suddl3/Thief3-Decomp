// Game/Unsorted_10B2C620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10B2BC90_Unknown.h"

// Copied whole from include/Game/Class_10A52EE0.h, with FUN_10a52ee0 returning the object symbols.txt names.
class Class_10A52EE0
{
public:
    Class_10B2BC90_Unknown* FUN_10a52ee0(int Index);

    char Unknown00[0xB8];
    int UnknownB8;
    char UnknownBC[4];
    int* UnknownC0;
};

class Class_10B2D600 : public Class_10A52EE0
{
public:
    void FUN_10b2d600();
    void FUN_10b2c2e0(Class_10B2BC90_Unknown* Item, int Index);

    char Pad0C4[0x64];
    int Slots[5];
    int Head;
};

// FUNCTION: 0x10B2D600 ?FUN_10b2d600@Class_10B2D600@@QAEXXZ
void Class_10B2D600::FUN_10b2d600()
{
    for (int i = 1; i <= 3; i++)
    {
        Class_10B2BC90_Unknown* Item = FUN_10a52ee0(Slots[(Head + i) % 5]);
        if (Item)
        {
            Class_10BFBD70 Found;
            Item->Virtual38(Found);
            if (Found.Count == 0 || *Found.Data == 0)
                FUN_10b2c2e0(Item, i);
        }
    }
}
