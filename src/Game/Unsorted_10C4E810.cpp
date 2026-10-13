// Game/Unsorted_10C4E810.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
struct Struct_10C4E810_Item
{
    char Unknown00[0x30];
    int Unknown30;
    int Unknown34;
    float Unknown38;
    float Unknown3C;
    char Unknown40[8];
};

struct Struct_10C4E810
{
    int Unknown00;
    int Count;
    int Unknown08;
    Struct_10C4E810_Item* Items;
};

class Class_10C4E810
{
public:
    void FUN_10c4e810(int Key, float Value);

    char Unknown00[8];
    int Count;
    int Unknown0C;
    Struct_10C4E810* m_Buffer;
};

// FUNCTION: 0x10C4E810 ?FUN_10c4e810@Class_10C4E810@@QAEXHM@Z
void Class_10C4E810::FUN_10c4e810(int Key, float Value)
{
    for (int i = 0; i < Count; i++)
    {
        Struct_10C4E810* Outer = &m_Buffer[i];
        for (int j = 0; j < Outer->Count; j++)
        {
            Struct_10C4E810_Item* Item = &Outer->Items[j];
            if (Key == Item->Unknown30 && Item->Unknown3C == Item->Unknown38)
            {
                Item->Unknown3C = Item->Unknown38;
                Item->Unknown38 = Value;
                break;
            }
        }
    }
}
