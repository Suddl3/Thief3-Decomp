// Game/Unsorted_10B19D90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];

// The header's cString plus the void method this function calls (FUN_1090afd0 at 0x1090AFD0).
class cString : public Class_1090A780
{
public:
    cString() {}
    cString(const char* In);
    cString(const cString& Other);
    cString(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    cString& operator=(const cString& Other);
    cString& FUN_1090a590(const char* In);
    void FUN_1090afd0(const cString& Other);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};

class Class_10B19D90_Arg1;

class Class_10B19D90_Unknown24
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
    virtual void Virtual24();
    virtual cString Virtual25();
};

class Class_10B19D90_Arg1
{
public:
    char Unknown00[0x24];
    Class_10B19D90_Unknown24* Unknown24;
};

class Class_10B19D90
{
public:
    Class_10B19D90(Class_10B19D90_Arg1* A, int B);

    Class_10B19D90_Arg1* Unknown00;
    int Unknown04;
    cString Unknown08;
};

// FUNCTION: 0x10B19D90 ??0Class_10B19D90@@QAE@PAVClass_10B19D90_Arg1@@H@Z
Class_10B19D90::Class_10B19D90(Class_10B19D90_Arg1* A, int B)
{
    Unknown00 = A;
    Unknown04 = B;
    Unknown08.FUN_1090a590(DAT_10e47660);
    if (A)
        Unknown08.FUN_1090afd0(A->Unknown24->Virtual25());
}
