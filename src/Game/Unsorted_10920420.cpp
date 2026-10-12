// Game/Unsorted_10920420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

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

class Class_10920930
{
public:
    void AddUnique(int Item);

    char Unknown00[8];
    cIntArray Unknown08;
};

// FUNCTION: 0x10920930 ?AddUnique@Class_10920930@@QAEXH@Z
void Class_10920930::AddUnique(int Item)
{
    Unknown08.AddUnique(Item);
}
