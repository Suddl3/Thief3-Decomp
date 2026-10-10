// Game/Unsorted_10AB8730_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BFBD70
{
public:
    void FUN_109dff50(int Index);

    int FindIndex(int Item)
    {
        for (int i = 0; i < Count; i++)
        {
            if (Data[i] == Item)
                return i;
        }
        return -1;
    }

    int Count;
    int Unknown04;
    int* Data;
};

class Class_10AB8E30
{
public:
    void FUN_10ab8e30(int Item);

    char Unknown00[0x0C];
    int Unknown0C;
    char Unknown10[0x08];
    Class_10BFBD70 Unknown18;
    Class_10BFBD70 Unknown24;
};

// FUNCTION: 0x10AB8E30 ?FUN_10ab8e30@Class_10AB8E30@@QAEXH@Z
void Class_10AB8E30::FUN_10ab8e30(int Item)
{
    int Index = Unknown18.FindIndex(Item);
    if (Index != -1)
    {
        Unknown18.FUN_109dff50(Index);
        Unknown24.FUN_109dff50(Index);
        if (Unknown24.Count > 0)
            Unknown0C = Unknown24.Data[Unknown24.Count - 1];
    }
}
