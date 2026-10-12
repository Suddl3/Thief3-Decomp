// Game/Unsorted_10C09A80_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10B82390.h"

struct Struct_10C09A80
{
    char Unknown00[0x2C];
    Class_10B82390** Unknown2C;
    int Unknown30;
};

// FUNCTION: 0x10C09A80 ?CollectMatching@@YGXPAUStruct_10C09A80@@PAVcIntArray@@@Z
void __stdcall CollectMatching(Struct_10C09A80* Param, cIntArray* Out)
{
    if (Param)
    {
        for (int i = 0; i < Param->Unknown30; i++)
        {
            Class_10B82390* Item = Param->Unknown2C[i];
            if (Item)
            {
                char Buffer[16];
                if (Item->FUN_10b82390(0x803b9, Buffer))
                {
                    int Index = Out->Unknown00;
                    Out->SetCount(Index + 1);
                    Out->Unknown08[Index] = (int)Item;
                }
            }
        }
    }
}
