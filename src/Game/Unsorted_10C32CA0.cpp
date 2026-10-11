// Game/Unsorted_10C32CA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C49740.h"
#include "Game/Entry_10C32C30.h"
#include "Game/Struct_10C32C30.h"
#include "Game/Struct_10FF66BC.h"
#include "Game/Class_10C334A0.h"

class Class_10C334A0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int Virtual6();
};

class Class_10C334A0_UnknownA8
{
public:
    char Unknown00[0x8];
    int Unknown08;
};

extern Struct_10FF66BC DAT_10ff66bc[];

// FUNCTION: 0x10C334A0 ?FUN_10c334a0@Class_10C334A0@@QAE_NXZ
bool Class_10C334A0::FUN_10c334a0()
{
    Entry_10C32C30* Value;
    int Key;
    if (UnknownA8)
    {
        int Cur = UnknownA8->Unknown08;
        while (Cur != 0)
        {
            if (DAT_10ff66bc[((Class_10C334A0_Unknown08*)Cur)->Virtual6()].Flags & 2)
                return true;
            Key = Cur;
            Entry_10C32C30* Found = UnknownB0.FUN_10c49740(&Key, &Value) ? Value : 0;
            Struct_10C32C30* Obj = Found->Unknown00;
            if (!Obj)
                break;
            Cur = Obj->Unknown08;
        }
    }
    return false;
}
