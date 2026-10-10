// Game/Unsorted_10925DE0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

class Class_10925EA0_Item
{
public:
    char Unknown00[0x138];
    unsigned int Unknown138;
    int Unknown13C;
};

class Class_10925EA0_Unknown0E4
{
public:
    char Unknown00[0x28];
    Class_10BFBD70 Unknown28;
    char Unknown34[0x10];
};

class Class_10925EA0
{
public:
    void FUN_10925ea0(int Index, int Item);

    char Unknown00[0xE4];
    Class_10925EA0_Unknown0E4* Unknown0E4;
};

// FUNCTION: 0x10925EA0 ?FUN_10925ea0@Class_10925EA0@@QAEXHH@Z
void Class_10925EA0::FUN_10925ea0(int Index, int Item)
{
    Class_10925EA0_Unknown0E4* Element = &Unknown0E4[Index];
    if (Item)
    {
        for (int i = 0; i < Element->Unknown28.Unknown00; i++)
        {
            if (Element->Unknown28.Unknown08[i] == Item)
                return;
        }
        Class_10925EA0_Item* Obj = (Class_10925EA0_Item*)Item;
        Obj->Unknown138 |= 1;
        Obj->Unknown13C = Index;
        Element->Unknown28.Append(Item);
    }
}
