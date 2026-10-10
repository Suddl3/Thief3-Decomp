// Game/Unsorted_10925DE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount);

    void Append(int Item)
    {
        int Index = Unknown00;
        FUN_10bfbd70(Index + 1);
        Unknown08[Index] = Item;
    }

    int Unknown00;
    int Unknown04;
    int* Unknown08;
};

class Class_10925DE0_Item
{
public:
    char Unknown00[0x48];
    unsigned char Unknown48;
};

class Class_10925DE0_Unknown0E4
{
public:
    char Unknown00[0x10];
    Class_10BFBD70 Unknown10;
    char Unknown1C[0x28];
};

class Class_10925DE0
{
public:
    void FUN_10925de0(int Index, int Item);

    char Unknown00[0xE4];
    Class_10925DE0_Unknown0E4* Unknown0E4;
};

// FUNCTION: 0x10925DE0 ?FUN_10925de0@Class_10925DE0@@QAEXHH@Z
void Class_10925DE0::FUN_10925de0(int Index, int Item)
{
    Class_10925DE0_Unknown0E4* Element = &Unknown0E4[Index];
    if (Item)
    {
        for (int i = 0; i < Element->Unknown10.Unknown00; i++)
        {
            if (Element->Unknown10.Unknown08[i] == Item)
                return;
        }
        Element->Unknown10.Append(Item);
        ((Class_10925DE0_Item*)Item)->Unknown48 = 1;
    }
}
