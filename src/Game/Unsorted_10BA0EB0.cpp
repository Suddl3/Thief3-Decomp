// Game/Unsorted_10BA0EB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BABED0;

class Class_10BAA6B0_Param;

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* A);

struct Struct_10BA0FC0_Item
{
    char Unknown00[0xC0];
    Class_10BAA6B0_Param* Unknown0C0;
};

struct Struct_10D38640
{
    int Count;
    char Unknown04[4];
    Struct_10BA0FC0_Item** Data;
};

class Class_10D38640
{
public:
    Struct_10D38640* FUN_10d38640();
};

class Class_10E8C118
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void FUN_10ba0fc0();
    virtual void Virtual5();
    virtual void Virtual6(Class_10BABED0* A);

    char Unknown04[0x10];
    Class_10D38640* Unknown14;
};

// FUNCTION: 0x10BA0FC0 ?FUN_10ba0fc0@Class_10E8C118@@UAEXXZ
void Class_10E8C118::FUN_10ba0fc0()
{
    Struct_10D38640* List = Unknown14->FUN_10d38640();
    for (int i = 0; i < List->Count; i++)
    {
        Struct_10BA0FC0_Item* Item = List->Data[i];
        Class_10BAA6B0_Param* Param = Item->Unknown0C0;
        if (Param)
        {
            Class_10BABED0* Result = FUN_10baa6b0(Param);
            Virtual6(Result);
        }
    }
}
