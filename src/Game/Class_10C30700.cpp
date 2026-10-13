// Game/Class_10C30700.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C2F970.h"
#include "Game/Class_10C30640.h"
#include "Game/Class_10C30700.h"
#include "Game/Class_10C30700_Unknown140.h"
#include "Game/Class_10C32C70.h"
#include "Game/Class_10C66590.h"
#include "Game/Class_10C7D570.h"
#include "Game/USkeletalMesh.h"
#include "Game/Class_10C49740.h"
#include "Game/Entry_10C32C30.h"
#include "Game/Struct_10C32C30.h"

class Class_10C30700_Unknown140;

class Class_10C33BC0_UnknownA8;

class Class_10C33BC0_Virtual12;

class Class_10C33BC0_Unknown08
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
    virtual Class_10C33BC0_Virtual12* Virtual12();
};

class Class_10C33BC0_Virtual12
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
    virtual void Virtual23();
    virtual bool Virtual24();
};

class Class_10C33BC0_UnknownA8
{
public:
    char Unknown00[0x8];
    int Unknown08;
};

class cMotionControllerAnim
{
public:
    void FUN_10c30700();
    void FUN_10c30750(int A, int B);
    void FUN_10c307a0(int A, int B);
    void FUN_10c33bc0();

    char Unknown00[0x99];
    bool m_Iterating;
    char Unknown9A[0xE];
    Class_10C33BC0_UnknownA8* UnknownA8;
    char UnknownAC[0x4];
    Class_10C49740 UnknownB0;
    char UnknownB0Tail[0x138 - 0xB0 - sizeof(Class_10C49740)];
    int m_Count;
    char Unknown13C[4];
    Class_10C30700_Unknown140** m_Entries;
};

// FUNCTION: 0x10C30700 ?FUN_10c30700@Class_10C30700@@QAEXXZ
void Class_10C30700::FUN_10c30700()
{
    m_Iterating = true;
    for (int i = 0; i < m_Count; i++)
        m_Entries[i]->Virtual0();
    m_Iterating = false;
}

// FUNCTION: 0x10C30750 ?FUN_10c30750@Class_10C30700@@QAEXHH@Z
void Class_10C30700::FUN_10c30750(int A, int B)
{
    m_Iterating = true;
    for (int i = 0; i < m_Count; i++)
        m_Entries[i]->Virtual1(A, B);
    m_Iterating = false;
}

// FUNCTION: 0x10C307A0 ?FUN_10c307a0@Class_10C30700@@QAEXHH@Z
void Class_10C30700::FUN_10c307a0(int A, int B)
{
    m_Iterating = true;
    for (int i = 0; i < m_Count; i++)
        m_Entries[i]->Virtual2(A, B);
    m_Iterating = false;
}

// FUNCTION: 0x10C33BC0 ?FUN_10c33bc0@Class_10C30700@@QAEXXZ
void cMotionControllerAnim::FUN_10c33bc0()
{
    Entry_10C32C30* Value;
    int Key;
    if (UnknownA8)
    {
        int Cur = UnknownA8->Unknown08;
        while (Cur != 0)
        {
            if (!((Class_10C33BC0_Unknown08*)Cur)->Virtual10())
                break;
            Class_10C33BC0_Virtual12* Node = ((Class_10C33BC0_Unknown08*)Cur)->Virtual12();
            if (Node && Node->Virtual24())
                FUN_10c30700();
            Key = Cur;
            Entry_10C32C30* Found = UnknownB0.FUN_10c49740(&Key, &Value) ? Value : 0;
            Struct_10C32C30* Obj = Found->Unknown00;
            if (!Obj)
                break;
            Cur = Obj->Unknown08;
        }
    }
}
