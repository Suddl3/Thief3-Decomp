// Game/Class_10E6D400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Object_10970890.h"

class Class_10AA25F0_Param
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
    virtual Class_1098E330* Virtual8();
};

class Class_10AA25F0_Param2
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5(int A);
};

class Class_10970890
{
public:
    void FUN_109724c0(Class_1098E330* A, int B);
    Object_10970890* FUN_10970890();
    void FUN_10971750(Class_1098E330* A, int B);

    char Unknown00[0x5C];
    int Unknown5C;
};

class Class_10E6D400
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10aa25f0(int A, Class_10AA25F0_Param* B, Class_10AA25F0_Param2* C);

    Class_10E6D400* Construct();

    union
    {
        void* Field00;
        void* Unknown00;
    };
};

// FUNCTION: 0x10AA25F0 ?FUN_10aa25f0@Class_10E6D400@@UAEHHPAVClass_10AA25F0_Param@@PAVClass_10AA25F0_Param2@@@Z
int Class_10E6D400::FUN_10aa25f0(int A, Class_10AA25F0_Param* B, Class_10AA25F0_Param2* C)
{
    Class_1098E330* Obj = B->Virtual8();
    Class_10970890* Ctrl = Obj->FUN_10991eb0();
    if (!Ctrl)
        return 1;
    Object_10970890* O = Ctrl->FUN_10970890();
    if (O)
    {
        int R = O->Virtual23(C->Virtual5(0));
        if (R != -1)
            Ctrl->FUN_10971750(B->Virtual8(), R);
    }
    return 1;
}
