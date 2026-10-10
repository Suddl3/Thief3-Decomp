// Game/Unsorted_10BC49B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10AAF570
{
public:
    int FUN_10aaf570();
};

class Class_10AAF570_Field10
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
    virtual int Virtual16(int A, int B, int C);
    virtual FVector* Virtual17(FVector* Out, int Id);
};

class Class_10BC4B80_Field04
{
public:
    char Unknown00[0xC];
    Class_10AAF570* Unknown0C;
};

class Class_10BC4B80
{
public:
    bool FUN_10bc4b80(FVector* Out, int B, int C);

    int Unknown00;
    Class_10BC4B80_Field04* Unknown04;
};

// FUNCTION: 0x10BC4B80 ?FUN_10bc4b80@Class_10BC4B80@@QAE_NPAVFVector@@HH@Z
bool Class_10BC4B80::FUN_10bc4b80(FVector* Out, int B, int C)
{
    Class_10AAF570_Field10* Obj = (Class_10AAF570_Field10*)Unknown04->Unknown0C->FUN_10aaf570();
    int Id = Obj->Virtual16(B, C, 1);
    if (!Id)
        return false;
    FVector Result;
    FVector* Source = Obj->Virtual17(&Result, Id);
    *Out = *Source;
    return true;
}
