// Game/Unsorted_10925DE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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
    void FUN_10925f10(int Item);

    char Unknown00[0xA4];
    cIntArray UnknownA4;
};

// FUNCTION: 0x10925F10 ?FUN_10925f10@Class_10925F10@@QAEXH@Z
void Class_10925F10::FUN_10925f10(int Item)
{
    UnknownA4.AddUnique(Item);
}

// FUNCTION: 0x10925FC0 ?FUN_10925fc0@Class_10925FC0@@QAE?AVcRefPtr@@H@Z
cRefPtr Class_10925FC0::FUN_10925fc0(int Index)
{
    return UnknownCC[Index];
}
