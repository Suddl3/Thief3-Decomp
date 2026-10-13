// Game/cMotionControllerAnim_26.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C49740.h"
#include "Game/Entry_10C32C30.h"
#include "Game/Struct_10C32C30.h"

class Class_10C30700_Unknown140;

class Class_10C33C40_Virtual14;

class Class_10C33C40_UnknownA8
{
public:
    char Unknown00[0x8];
    int Unknown08;
};

class Class_10C33C40_Unknown08
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual Class_10C33C40_Virtual14* Virtual14();
};

class Class_10C33C40_Virtual14
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
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual int Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual float Virtual27();
    virtual void Virtual28();
    virtual bool Virtual29();
};

class cMotionControllerAnim
{
public:
    void FUN_10c30700();
    void FUN_10c30750(int A, float B);
    void FUN_10c307a0(int A, int B);
    void FUN_10c33c40();

    char Unknown00[0x99];
    bool m_Iterating;
    char Unknown9A[0xE];
    Class_10C33C40_UnknownA8* UnknownA8;
    char UnknownAC[0x4];
    Class_10C49740 UnknownB0;
    char UnknownB0Tail[0x138 - 0xB0 - sizeof(Class_10C49740)];
    int m_Count;
    char Unknown13C[4];
    Class_10C30700_Unknown140** m_Entries;
};

// FUNCTION: 0x10C33C40 ?FUN_10c33c40@cMotionControllerAnim@@QAEXXZ
void cMotionControllerAnim::FUN_10c33c40()
{
    Entry_10C32C30* Value;
    int Key;
    if (UnknownA8)
    {
        int Cur = UnknownA8->Unknown08;
        while (Cur != 0)
        {
            if (!((Class_10C33C40_Unknown08*)Cur)->Virtual10())
                break;
            Class_10C33C40_Virtual14* Node = ((Class_10C33C40_Unknown08*)Cur)->Virtual14();
            if (Node && Node->Virtual29())
                FUN_10c30750(Node->Virtual23(), Node->Virtual27());
            Key = Cur;
            Entry_10C32C30* Found = UnknownB0.FUN_10c49740(&Key, &Value) ? Value : 0;
            Struct_10C32C30* Obj = Found->Unknown00;
            if (!Obj)
                break;
            Cur = Obj->Unknown08;
        }
    }
}
