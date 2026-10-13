// Game/Class_10948CB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

    void AppendUnique(int Item)
    {
        for (int i = 0; i < Unknown00; i++)
        {
            if (Unknown08[i] == Item)
                return;
        }
        Append(Item);
    }

    int Unknown00;
    int m_CapacityBytes;
    int* Unknown08;
};

class Class_10948CB0
{
public:
    void FUN_10948cb0(int Item);
    void FUN_10948cf0(int Item);

    char Unknown00[0x70];
    cIntArray Unknown70;
    cIntArray Unknown7C;
};

// FUNCTION: 0x10948CB0 ?FUN_10948cb0@Class_10948CB0@@QAEXH@Z
void Class_10948CB0::FUN_10948cb0(int Item)
{
    Unknown70.AppendUnique(Item);
}

// FUNCTION: 0x10948CF0 ?FUN_10948cf0@Class_10948CB0@@QAEXH@Z
void Class_10948CB0::FUN_10948cf0(int Item)
{
    Unknown7C.AppendUnique(Item);
}
