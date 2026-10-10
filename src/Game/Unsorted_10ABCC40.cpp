// Game/Unsorted_10ABCC40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Game/Class_10A1F880.h"
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B06220.h"

extern void* DAT_10e47850[];

// The member of Class_10ABCC20 at 4: a Class_10AF4B90 set up with (0x27, DAT_10e47850).
class Class_10ABCC20_Field04 : public Class_10AF4B90
{
public:
    Class_10ABCC20_Field04() { FUN_10af4b90(0x27, DAT_10e47850); }
};

// The item 0x10ABCC20 constructs.
class Class_10ABCC20
{
public:
    int Unknown00;
    Class_10ABCC20_Field04 Unknown04;
};

extern Class_10A73EF0_Table* DAT_10f3eda4;

class Class_10ABCFE0 : public Class_10B06220
{
public:
    void FUN_10abcfe0(int Handle, int B);
};

class Class_1098E330
{
public:
    int FUN_1098e330(int A, int* B);
};

struct Struct_10ABCD90
{
    char Unknown00[0xE8];
    Class_1098E330* UnknownE8;
};

Class_10A1F880* FUN_10a1fcf0();

// FUNCTION: 0x10ABCD90 ?FUN_10abcd90@@YAHH@Z
int FUN_10abcd90(int A)
{
    Struct_10ABCD90* Obj = (Struct_10ABCD90*)FUN_10a1fcf0()->FUN_10a1f880(A);
    if (Obj)
    {
        int Value = 0;
        Obj->UnknownE8->FUN_1098e330(0x80062b, &Value);
        return Value;
    }
    return 0;
}

// FUNCTION: 0x10ABCFE0 ?FUN_10abcfe0@Class_10ABCFE0@@QAEXHH@Z
void Class_10ABCFE0::FUN_10abcfe0(int Handle, int B)
{
    Class_10ABCC20* Item = 0;
    Class_10A73EF0_Object* Obj = DAT_10f3eda4->Unknown08[Handle & 0xffff];
    Item = (Class_10ABCC20*)Obj->Virtual51();
    new (Item) Class_10ABCC20;
    Obj->Virtual45(Item, B, 0);
    FUN_10b06220();
    FUN_10ad9c90(Handle, Item);
}
