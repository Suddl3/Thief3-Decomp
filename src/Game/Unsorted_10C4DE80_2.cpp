// Game/Unsorted_10C4DE80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C4E7B0_Unknown10_Unknown0C
{
    char Unknown00[0x30];
    int Unknown30;
    bool Unknown34;
    char Unknown35[0x13];
};

struct Struct_10C4E7B0_Unknown10
{
    char Unknown00[4];
    int Unknown04;
    char Unknown08[4];
    Struct_10C4E7B0_Unknown10_Unknown0C* Unknown0C;
};

class Class_10C4E7B0
{
public:
    void FUN_10c4e7b0();

    char Unknown00[8];
    int Unknown08;
    char Unknown0C[4];
    Struct_10C4E7B0_Unknown10* Unknown10;
};

// FUNCTION: 0x10C4E7B0 ?FUN_10c4e7b0@Class_10C4E7B0@@QAEXXZ
void Class_10C4E7B0::FUN_10c4e7b0()
{
    for (int i = 0; i < Unknown08; i++)
    {
        for (int j = 0; j < Unknown10[i].Unknown04; j++)
        {
            Struct_10C4E7B0_Unknown10_Unknown0C& Item = Unknown10[i].Unknown0C[j];
            if (Item.Unknown30)
            {
                Item.Unknown34 = !Item.Unknown34;
            }
        }
    }
}
