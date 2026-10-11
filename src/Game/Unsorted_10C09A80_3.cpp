// Game/Unsorted_10C09A80_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10B82390.h"

struct Struct_10C09A80
{
    char Unknown00[0x2C];
    Class_10B82390** Unknown2C;
    int Unknown30;
};

// FUNCTION: 0x10C09A80 ?FUN_10c09a80@@YGXPAUStruct_10C09A80@@PAVClass_10BFBD70@@@Z
void __stdcall FUN_10c09a80(Struct_10C09A80* Param, Class_10BFBD70* Out)
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
                    Out->FUN_10bfbd70(Index + 1);
                    Out->Unknown08[Index] = (int)Item;
                }
            }
        }
    }
}
