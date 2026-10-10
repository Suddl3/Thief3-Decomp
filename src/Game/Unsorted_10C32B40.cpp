// Game/Unsorted_10C32B40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C49740.h"
#include "Game/Entry_10C32C30.h"
#include "Game/Struct_10C32C30.h"
#include "Game/Class_10C32C30.h"
#include "Game/Class_10BFBD70.h"

class Class_10E9AC80
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void FUN_10c32b40(int Item);

    char Unknown04[0x134];
    Class_10BFBD70 Unknown138;
};

// FUNCTION: 0x10C32B40 ?FUN_10c32b40@Class_10E9AC80@@UAEXH@Z
void Class_10E9AC80::FUN_10c32b40(int Item)
{
    int Count = Unknown138.Unknown00;
    Class_10BFBD70* Set = &Unknown138;
    for (int i = 0; i < Count; i++)
    {
        if (Unknown138.Unknown08[i] == Item)
        {
            int Last = Set->Unknown00 - 1;
            int Moved = Set->Unknown08[Last];
            int Old = Set->Unknown08[i];
            Set->Unknown08[i] = Moved;
            Set->Unknown08[Last] = Old;
            Set->FUN_10bfbd70(Set->Unknown00 - 1);
            return;
        }
    }
}

// FUNCTION: 0x10C32C30 ?FUN_10c32c30@Class_10C32C30@@QAEHH@Z
int Class_10C32C30::FUN_10c32c30(int A)
{
    int Key = A;
    Entry_10C32C30* Value;
    Entry_10C32C30* Entry = Unknown0C.FUN_10c49740(&Key, &Value) ? Value : 0;
    Struct_10C32C30* Obj = Entry->Unknown00;
    if (Obj)
        return Obj->Unknown08;
    return 0;
}
