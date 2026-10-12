// Game/Unsorted_10C084A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class cIntArray
{
public:
    void SetCount(int NewCount);
    void RemoveAt(int Index);
    void AddUnique(int Item);
    void Remove(int Item);

    int FindIndex(int Item)
    {
        for (int i = 0; i < Unknown00; i++)
        {
            if (Unknown08[i] == Item)
                return i;
        }
        return -1;
    }

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

// FUNCTION: 0x10C08510 ?AddUnique@cIntArray@@QAEXH@Z
void cIntArray::AddUnique(int Item)
{
    if (FindIndex(Item) == -1)
        Append(Item);
}

// FUNCTION: 0x10C08550 ?Remove@cIntArray@@QAEXH@Z
void cIntArray::Remove(int Item)
{
    int Index = FindIndex(Item);
    if (Index != -1)
        RemoveAt(Index);
}
