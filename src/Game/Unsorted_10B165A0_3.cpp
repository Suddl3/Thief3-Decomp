// Game/Unsorted_10B165A0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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
    void EnterUnEquipFirst();

    char Pad00[0x1];
};

// FUNCTION: 0x10B16620 ?EnterUnEquipFirst@Class_10B16930@@QAEXXZ
void Class_10B16930::EnterUnEquipFirst()
{
    cIntArray Found = FUN_109e6d80(0x6a);
    if (Found.Count > 0 && Found.Data[0] != 0)
        ((Class_10B2C030*)Found.Data[0])->EnterUnEquip();
}
