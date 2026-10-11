// Game/Class_10E8C118.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C118.h"
#include "Game/Class_10D38640.h"

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
