// Game/Class_10E6F474_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

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

class Class_10E6F474
{
public:
    void AddUnique(int Item);

    char Unknown00[0x10];
    cIntArray m_MembraneMaterials;
};

// FUNCTION: 0x10ABB720 ?AddUnique@Class_10E6F474@@QAEXH@Z
void Class_10E6F474::AddUnique(int Item)
{
    for (int i = 0; i < m_MembraneMaterials.Unknown00; i++)
    {
        if (Item == m_MembraneMaterials.Unknown08[i])
            return;
    }
    m_MembraneMaterials.Append(Item);
}
