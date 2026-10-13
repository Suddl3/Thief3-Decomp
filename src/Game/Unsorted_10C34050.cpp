// Game/Unsorted_10C34050.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C49740.h"
#include "Game/Entry_10C32C30.h"
#include "Game/Struct_10C32C30.h"

class Object_10C2F4F0
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
    virtual int Virtual15();
};

class Class_10C341B0_Unknown08
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
    virtual bool Virtual10();
};

class Class_10C341B0_UnknownA8
{
public:
    char Unknown00[0x8];
    int Unknown08;
};

class Class_10C341B0
{
public:
    int FUN_10c341b0();
    Object_10C2F4F0* FUN_10c2f4f0(int A);

    char Pad00[0xA8];
    Class_10C341B0_UnknownA8* UnknownA8;
    char PadAC[0x4];
    Class_10C49740 UnknownB0;
};

// FUNCTION: 0x10C341B0 ?FUN_10c341b0@Class_10C341B0@@QAEHXZ
int Class_10C341B0::FUN_10c341b0()
{
    Entry_10C32C30* Value;
    int Key;
    if (UnknownA8)
    {
        int Cur = UnknownA8->Unknown08;
        if (Cur)
        {
            if (((Class_10C341B0_Unknown08*)Cur)->Virtual10())
            {
                Key = Cur;
                Entry_10C32C30* Found = UnknownB0.FUN_10c49740(&Key, &Value) ? Value : 0;
                Struct_10C32C30* Obj = Found->Unknown00;
                if (Obj)
                {
                    int Next = Obj->Unknown08;
                    if (Next && ((Class_10C341B0_Unknown08*)Next)->Virtual10())
                        return -1;
                }
                return FUN_10c2f4f0(Cur)->Virtual15() == 0;
            }
        }
    }
    return 0;
}
