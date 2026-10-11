// Game/Class_10E6678C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"

struct Struct_10A3AB10
{
    int Unknown00[7];
};

class Class_10A3AB10_Data
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Struct_10A3AB10* Item);
};

int FUN_10aa54a0(int A);

class Class_10E6678C
{
public:
    virtual void Virtual0();
    virtual void FUN_10a3ab10(int Count, Struct_10A3AB10* Items);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    void FUN_10a39ed0(Struct_10A3AB10* Item);

    char Unknown04[0xe4];
    Class_10BFBD70 Unknown0E8;
    char Unknown0F4[0x5c];
    int Unknown150;
};

// FUNCTION: 0x10A3AB10 ?FUN_10a3ab10@Class_10E6678C@@UAEXHPAUStruct_10A3AB10@@@Z
void Class_10E6678C::FUN_10a3ab10(int Count, Struct_10A3AB10* Items)
{
    Class_10BFBD70* Array = &Unknown0E8;
    while (Count > Array->Count)
    {
        int Item = FUN_10aa54a0(Unknown150);
        int Index = Array->Count;
        Array->FUN_10bfbd70(Index + 1);
        Array->Data[Index] = Item;
    }
    for (int i = 0; i < Count; i++)
    {
        Struct_10A3AB10 Local = Items[i];
        FUN_10a39ed0(&Local);
        ((Class_10A3AB10_Data*)Unknown0E8.Data[i])->Virtual1(&Local);
    }
    Virtual7();
}
