// Game/Unsorted_10C18520_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10DC1750.h"
#include "Game/Class_10E98CA4.h"
#include "Game/Struct_10B9F810.h"
#include "Game/Struct_10DC1750_Result_1C.h"
#include "Game/Class_10DC1750_Result.h"

struct Struct_10AA3520
{
    char Unknown00[8];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);
    void FUN_10b9f810();

    int Unknown00;
    int Unknown04;
    Struct_10B9F810** Unknown08;
};

class Class_10C19FD0
{
public:
    ~Class_10C19FD0();

    char Unknown00[4];
    Class_10BFBD70 Unknown04;
};

// FUNCTION: 0x10C19B90 ?FUN_10c19b90@Class_10E98CA4@@QAEXXZ
void Class_10E98CA4::FUN_10c19b90()
{
    int Value = DAT_10f35dec->Unknown08;
    if (Value)
    {
        Class_10DC1750_Result* Result = Unknown04->FUN_10dc1750();
        Struct_10DC1750_Result_1C* List = &Result->Unknown1C;
        int Index = -1;
        for (int i = 0; i < List->Count; i++)
        {
            if (List->Items[i] == 0x11)
            {
                Index = i;
                break;
            }
        }
        if (Index != -1)
            return;
        FUN_10c19810(Value);
    }
}

// FUNCTION: 0x10C19FD0 ??1Class_10C19FD0@@QAE@XZ
Class_10C19FD0::~Class_10C19FD0()
{
    Class_10BFBD70& Items = Unknown04;
    for (int i = 0; i < Items.Unknown00; i++)
        delete Items.Unknown08[i];
    Items.Unknown00 = 0;
    Items.FUN_10bfbd70(0);
    if (Items.Unknown04)
    {
        FUN_10905aa0()->Virtual5(Items.Unknown08);
        Items.Unknown08 = 0;
        Items.Unknown04 = 0;
    }
}
