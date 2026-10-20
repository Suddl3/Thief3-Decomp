// Game/Class_10E6678C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10E6678C.h"

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

// FUNCTION: 0x10A3AB10 ?SetItems@Class_10E6678C@@UAEXHPAUStruct_10A3AB10@@@Z
void Class_10E6678C::SetItems(int Count, Struct_10A3AB10* Items)
{
    cIntArray* Array = &m_Items;
    while (Count > Array->Count)
    {
        int Item = FUN_10aa54a0(Unknown150);
        int Index = Array->Count;
        Array->SetCount(Index + 1);
        Array->Data[Index] = Item;
    }
    for (int i = 0; i < Count; i++)
    {
        Struct_10A3AB10 Local = Items[i];
        FUN_10a39ed0(&Local);
        ((Class_10A3AB10_Data*)m_Items.Data[i])->Virtual1(&Local);
    }
    FUN_10a3a3f0();
}
