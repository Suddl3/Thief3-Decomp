// Game/Unsorted_10B3BC50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7E4E0.h"
#include "Game/Struct_10B53A00.h"

class AGarrett;

class Class_10B3B220_Item
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
    virtual void Virtual19(int A);

    char Unknown04[0x100];
    bool Unknown104;
};

class Class_10B3B220_Unknown0B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10B3B220_Item* Virtual6();
};

class Class_10DD7640
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A);
    virtual void Virtual2(int A);
    virtual bool Virtual3(int A);
};

Class_10DD7640* FUN_10dd7640();

unsigned char FUN_10cd3a40(Struct_10B53A00* P);

class Class_10E816E0 : public Class_10E7E4E0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int FUN_10b53a00(Struct_10B53A00* P, int Code);

    void FUN_10b3ae50(AGarrett* Garrett);
    void FUN_10b3b220(Struct_10B53A00* P);
    void FUN_10b3b260(Struct_10B53A00* P);
    bool FUN_10b3bc50(Struct_10B53A00* P);
    Class_10E816E0* FUN_10b53a30();

    char Unknown10[0x10];
    int Unknown20;
    int Unknown24;
    float Unknown28;
};

// FUNCTION: 0x10B3BC50 ?FUN_10b3bc50@Class_10E816E0@@QAE_NPAUStruct_10B53A00@@@Z
bool Class_10E816E0::FUN_10b3bc50(Struct_10B53A00* P)
{
    if (FUN_10dd7640()->Virtual1(1))
    {
        if (!(P->Unknown450 & 2))
        {
            FUN_10dd7640()->Virtual2(1);
            Class_10B3B220_Item* Item = P->Unknown0B0->Virtual6();
            Item->Virtual19(1);
            if (Item->Unknown104)
                P->Unknown450 |= 2;
            if (P->Unknown450 & 2)
                return true;
        }
        else if (FUN_10cd3a40(P))
        {
            FUN_10dd7640()->Virtual2(1);
            FUN_10b3b260(P);
            if (!(P->Unknown450 & 2))
                return true;
            P->Unknown450 &= ~2;
            FUN_10b3b220(P);
        }
    }
    return false;
}
