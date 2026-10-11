// Game/Unsorted_10B7FB40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <vector>
#include "Game/Class_10B7FC20.h"
#include "Game/Struct_10B7FC20_Item.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10970890.h"
#include "Game/Object_10970890.h"

class Class_10B7FEE0
{
public:
    void FUN_10b7fee0();

    int Unknown00;
    void* Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10B7FB40 ?FUN_10b7fb40@@YAHPAVClass_1098E330@@@Z
int FUN_10b7fb40(Class_1098E330* A)
{
    int Result = 0;
    Class_10970890* Owner = A->FUN_10991eb0();
    if (Owner)
    {
        Object_10970890* Object = Owner->FUN_10970890();
        if (Object)
        {
            if (Object->Virtual44(1))
                Result = 1;
            else if (Object->Virtual44(2))
                Result = 2;
            else if (Object->Virtual44(4))
                Result = 4;
            else if (Object->Virtual44(8))
                Result = 8;
            else if (Object->Virtual44(0x10))
                Result = 0x10;
            else if (Object->Virtual44(0x20))
                Result = 0x20;
            else if (Object->Virtual44(0x40))
                Result = 0x40;
        }
    }
    return Result;
}

// FUNCTION: 0x10B7FC20 ?FUN_10b7fc20@Class_10B7FC20@@QAEHXZ
int Class_10B7FC20::FUN_10b7fc20()
{
    return Unknown00.size();
}
