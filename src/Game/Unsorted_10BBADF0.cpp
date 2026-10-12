// Game/Unsorted_10BBADF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBB8B0.h"
#include "Game/Struct_10BA9EF0.h"
#include "Game/Class_10E5CBD8.h"

class cIntArray
{
public:
    void SetCount(int NewCount);

    void Append(int Item)
    {
        int Index = Unknown00;
        SetCount(Index + 1);
        Unknown08[Index] = Item;
    }

    int Unknown00;
    int m_CapacityBytes;
    int* Unknown08;
};

class Class_10BBB510
{
public:
    void AddItem(int Item);

    char Unknown00[0x14];
    cIntArray Unknown14;
};

// FUNCTION: 0x10BBB510 ?AddItem@Class_10BBB510@@QAEXH@Z
void Class_10BBB510::AddItem(int Item)
{
    Unknown14.Append(Item);
}

// FUNCTION: 0x10BBB8B0 ?FUN_10bbb8b0@Class_10BBB8B0@@QAEXXZ
void Class_10BBB8B0::FUN_10bbb8b0()
{
    FUN_10bbb580(Unknown08->FUN_10ba9ef0());
}
