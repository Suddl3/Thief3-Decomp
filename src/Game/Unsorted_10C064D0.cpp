// Game/Unsorted_10C064D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10C06540.h"
#include "Game/Class_10C06540.h"

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

class Class_10C07300
{
public:
    void AddItem(int Item);

    char Unknown00[0x50];
    cIntArray m_Items;
};

// FUNCTION: 0x10C06540 ?FUN_10c06540@Class_10C06540@@QAE?AUStruct_10C06540@@XZ
Struct_10C06540 Class_10C06540::FUN_10c06540()
{
    return Unknown48;
}

// FUNCTION: 0x10C07300 ?AddItem@Class_10C07300@@QAEXH@Z
void Class_10C07300::AddItem(int Item)
{
    m_Items.Append(Item);
}
