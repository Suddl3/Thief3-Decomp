// Game/Unsorted_10C2A2D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C08690;

// Copied whole from include/Game/Class_10BFBD70.h, with FUN_10c2a2d0 added.
class Class_10BFBD70
{
public:
    Class_10BFBD70() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    Class_10BFBD70(const Class_10BFBD70& Other)
    {
        Unknown00 = Unknown04 = 0;
        Unknown08 = 0;
        FUN_10a58cb0(Other);
    }

    void FUN_10a58c70(const Class_10BFBD70& Other);
    void FUN_10bfbd70(int Count);
    void FUN_109dff50(int Index);
    void FUN_10c2a2d0(int Item, char Flag);
    int FindIndex(int Item)
    {
        for (int i = 0; i < Count; i++)
        {
            if (Data[i] == Item)
                return i;
        }
        return -1;
    }
    int FUN_1092a330(const int* Item);
    void FUN_109dff00();
    void FUN_10a58cb0(const Class_10BFBD70& Other);
    void FUN_10a81b10(int Index, int* Value);
    Class_10BFBD70& operator=(const Class_10BFBD70& Other)
    {
        Unknown00 = 0;
        FUN_10a58c70(Other);
        return *this;
    }
    int FUN_10b9fa20(int* Item);
    void FUN_10b9f810();
    void FUN_10ba91a0(const int* Item);
    void FUN_10c08510(int Item);
    void FUN_10c08550(int Item);
    void FUN_10c08690(Struct_10C08690* Item);

    union
    {
        int Unknown00;
        int Count;
    };
    int Unknown04;
    union
    {
        int* Unknown08;
        int* Data;
    };
};

// FUNCTION: 0x10C2A2D0 ?FUN_10c2a2d0@Class_10BFBD70@@QAEXHD@Z
void Class_10BFBD70::FUN_10c2a2d0(int Item, char Flag)
{
    int Index = FindIndex(Item);
    if (Flag == 1)
    {
        if (Index == -1)
        {
            int Count = Unknown00;
            FUN_10bfbd70(Count + 1);
            Data[Count] = Item;
        }
    }
    else if (Index != -1)
    {
        FUN_109dff50(Index);
    }
}
