// Game/Unsorted_10B169D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The junk item window: the two lists of items it holds, checked one after the other.

#include "Game/cIntArray.h"
#include "Game/Class_10B2C160.h"
#include "Game/WindowManager.h"

// include/Game/Class_10B16930.h, copied whole with the method this function defines added.
class Class_10B16930 : public WindowManager
{
public:
    cIntArray FUN_109e6d80(int A);
    void FUN_10b166a0();
    void FUN_10b16930();
    void FUN_10b16780();
    void ShowJunkItemWindow(int A);
    void FUN_10b16ef0(bool A);
    void EnterUnEquipFirst();
    void FUN_10b16300(int A, int B, bool C);
    void FUN_10b163c0(int A);
    void FUN_10b16450(int A);
    void FUN_10b164e0(int A, int B, char C);
    void FUN_10b165a0();
    bool FUN_10b169d0();

    char Pad00[0x1];
};

// FUNCTION: 0x10B169D0 ?FUN_10b169d0@Class_10B16930@@QAE_NXZ
bool Class_10B16930::FUN_10b169d0()
{
    Class_10B2C160* First = 0;
    Class_10B2C160* Second = 0;
    cIntArray FirstList = FUN_109e6d80(0x69);
    cIntArray SecondList = FUN_109e6d80(0x6a);
    if (FirstList.Count > 0)
        First = (Class_10B2C160*)FirstList.Data[0];
    if (SecondList.Count > 0)
        Second = (Class_10B2C160*)SecondList.Data[0];
    if (First && !(char)First->FUN_10b2c160())
        return false;
    if (Second && !(char)Second->FUN_10b2c160())
        return false;
    return true;
}
