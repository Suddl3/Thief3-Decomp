// Game/Unsorted_10A7A990_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39870.h"
#include "Game/Class_10BFBD70.h"

class UClass;

class UObject;

class Class_10E77578
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, UClass* C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, Class_10BFBD70& Found);
    virtual void Virtual5(int A, int B, int C, int D, int E);
};

Class_10E77578* FUN_10b0b2b0();

class Class_10E6BD90
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool FUN_10a7a370(int p1);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int Virtual7(int p1);
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10a7a390(int A, int B);
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17(int A, int B);
    virtual void Virtual18();
    virtual Class_10B39870* __stdcall FUN_10a7c7b0();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void FUN_10a7a920(UObject* Obj, int Unknown04, int Unknown08);

    char Pad04[0xA0];
    int UnknownA4;
};

// FUNCTION: 0x10A7C7B0 ?FUN_10a7c7b0@Class_10E6BD90@@UAGPAVClass_10B39870@@XZ
Class_10B39870* __stdcall Class_10E6BD90::FUN_10a7c7b0()
{
    if (UnknownA4)
    {
        Class_10BFBD70 Found;
        FUN_10b0b2b0()->Virtual4(UnknownA4, (int)this, 0x281B9D0, Found);
        if (Found.Count == 1)
            return (Class_10B39870*)((Class_10AA82D0*)Found.Data[0])->FUN_10aa82d0();
    }
    return 0;
}
