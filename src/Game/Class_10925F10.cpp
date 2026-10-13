// Game/Class_10925F10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10925FC0.h"
#include "Game/Object_10AB5B20.h"
#include "Game/cRefPtr.h"

class cIntArray
{
public:
    void SetCount(int NewCount);

    void AddUnique(int Item)
    {
        int Count = Unknown00;
        for (int i = 0; i < Count; i++)
        {
            if (Unknown08[i] == Item)
                return;
        }
        SetCount(Count + 1);
        Unknown08[Count] = Item;
    }

    int Unknown00;
    int m_CapacityBytes;
    int* Unknown08;
};

class Class_10925F10
{
public:
    void AddUnique(int Item);

    char Unknown00[0xA4];
    cIntArray m_Items;
};

// FUNCTION: 0x10925F10 ?AddUnique@Class_10925F10@@QAEXH@Z
void Class_10925F10::AddUnique(int Item)
{
    m_Items.AddUnique(Item);
}
