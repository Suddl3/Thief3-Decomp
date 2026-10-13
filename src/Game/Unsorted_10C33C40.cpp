// Game/Unsorted_10C33C40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C49740.h"
#include "Game/Entry_10C32C30.h"
#include "Game/Struct_10C32C30.h"

class Class_10C33CE0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(int A);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual bool Virtual10();
};

class Class_10C33CE0_UnknownA8
{
public:
    char Unknown00[0x8];
    int Unknown08;
};

class Class_10C33CE0
{
public:
    void FUN_10c33ce0(int A);

    char Pad00[0xA8];
    Class_10C33CE0_UnknownA8* UnknownA8;
    char PadAC[0x4];
    Class_10C49740 UnknownB0;
};

class Class_10C33FC0_UnknownA8
{
public:
    char Unknown00[0x8];
    int Unknown08;
};

class Class_10C33FC0_Unknown1C
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

class Class_10C33FC0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();

    char Pad04[0x18];
    Class_10C33FC0_Unknown1C Unknown1C;
    char Pad20[0x10];
    Class_10C33FC0_Unknown1C Unknown30;
    char Pad34[0x8];
    Class_10C33FC0_Unknown1C Unknown3C;
};

class Class_10C33FC0
{
public:
    Class_10C33FC0_Unknown08* FUN_10c33fc0(int A);

    char Pad00[0xA8];
    Class_10C33FC0_UnknownA8* UnknownA8;
    char PadAC[0x4];
    Class_10C49740 UnknownB0;
};

// FUNCTION: 0x10C33CE0 ?FUN_10c33ce0@Class_10C33CE0@@QAEXH@Z
void Class_10C33CE0::FUN_10c33ce0(int A)
{
    Entry_10C32C30* Value;
    int Key;
    if (UnknownA8)
    {
        int Cur = UnknownA8->Unknown08;
        while (Cur != 0)
        {
            if (!((Class_10C33CE0_Unknown08*)Cur)->Virtual10())
                break;
            ((Class_10C33CE0_Unknown08*)Cur)->Virtual3(A);
            Key = Cur;
            Entry_10C32C30* Found = UnknownB0.FUN_10c49740(&Key, &Value) ? Value : 0;
            Struct_10C32C30* Obj = Found->Unknown00;
            if (!Obj)
                break;
            Cur = Obj->Unknown08;
        }
    }
}

// FUNCTION: 0x10C33FC0 ?FUN_10c33fc0@Class_10C33FC0@@QAEPAVClass_10C33FC0_Unknown08@@H@Z
Class_10C33FC0_Unknown08* Class_10C33FC0::FUN_10c33fc0(int A)
{
    Entry_10C32C30* Value;
    if (UnknownA8)
    {
        int Cur = UnknownA8->Unknown08;
        while (Cur != 0)
        {
            Class_10C33FC0_Unknown08* Node = (Class_10C33FC0_Unknown08*)Cur;
            Class_10C33FC0_Unknown1C* Sub;
            switch (Node->Virtual5())
            {
            case 0:
                Sub = &Node->Unknown30;
                break;
            case 1:
                Sub = &Node->Unknown3C;
                break;
            case 2:
                Sub = &Node->Unknown1C;
                break;
            default:
                Sub = 0;
                break;
            }
            if (Sub->Virtual15() == A)
                return Node;
            int Key = Cur;
            Entry_10C32C30* Found = UnknownB0.FUN_10c49740(&Key, &Value) ? Value : 0;
            Struct_10C32C30* Obj = Found->Unknown00;
            if (!Obj)
                break;
            Cur = Obj->Unknown08;
        }
    }
    return 0;
}
