// Game/Unsorted_10925520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"

class Class_10924E80
{
public:
    void RemoveItem(void* Item);

    char Unknown00[0xBC];
    cIntArray m_Items;
};

// FUNCTION: 0x10925CF0 ?RemoveItem@Class_10924E80@@QAEXPAX@Z
void Class_10924E80::RemoveItem(void* Item)
{
    int Count = m_Items.Unknown00;
    cIntArray* Set = &m_Items;
    int Index = -1;
    for (int i = 0; i < Count; i++)
    {
        if (Set->Unknown08[i] == (int)Item)
        {
            Index = i;
            break;
        }
    }
    if (Index == -1)
        return;
    int Last = Set->Unknown00 - 1;
    int Moved = Set->Unknown08[Last];
    int Old = Set->Unknown08[Index];
    Set->Unknown08[Index] = Moved;
    Set->Unknown08[Last] = Old;
    Set->SetCount(Set->Unknown00 - 1);
}
