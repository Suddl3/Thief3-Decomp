// Game/Unsorted_10925F60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BFBD70
{
public:
    void FUN_10a58c70(const Class_10BFBD70& Other);
    void FUN_10bfbd70(int NewCount);
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

class Class_10925F60
{
public:
    void FUN_10925f60(int Item);

    char Unknown00[0xA4];
    Class_10BFBD70 Unknown0A4;
};

// FUNCTION: 0x10925F60 ?FUN_10925f60@Class_10925F60@@QAEXH@Z
void Class_10925F60::FUN_10925f60(int Item)
{
    int Count = Unknown0A4.Count;
    Class_10BFBD70* Set = &Unknown0A4;
    int Index = -1;
    for (int i = 0; i < Count; i++)
    {
        if (Set->Data[i] == Item)
        {
            Index = i;
            break;
        }
    }
    if (Index == -1)
        return;

    int Last = Set->Count - 1;
    int Moved = Set->Data[Last];
    int Old = Set->Data[Index];
    Set->Data[Index] = Moved;
    Set->Data[Last] = Old;
    Set->FUN_10bfbd70(Set->Count - 1);
}
