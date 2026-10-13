// Game/Unsorted_10B165A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B2C030.h"

class Class_10B16930
{
public:
    cIntArray FUN_109e6d80(int A);
    void FUN_10b166a0();
    void FUN_10b16930();
    void FUN_10b16780();
    void ShowJunkItemWindow(int A);
    void FUN_10b16ef0(int A);
    void FUN_10b165a0();

    char Pad00[0x1];
};

// FUNCTION: 0x10B165A0 ?FUN_10b165a0@Class_10B16930@@QAEXXZ
void Class_10B16930::FUN_10b165a0()
{
    cIntArray Found = FUN_109e6d80(0x69);
    if (Found.Count > 0)
    {
        Class_10B2C030* Item = (Class_10B2C030*)Found.Data[0];
        if (Item)
            Item->EnterUnEquip();
    }
}
