// Game/Unsorted_10AAA150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

// Class_10AAB590_Param with the slots this function calls.
class Class_10AAB590_Param
{
public:
    virtual void Virtual0(int* Value);
    virtual void Virtual1(int Value);
    virtual cString Virtual2();
    virtual int Virtual3();
};

// The class the vtable at 0x10E6D9BC belongs to: this function is its slot 4.
class Class_10E6D9BC
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int FUN_10aaa150(Class_10AAB590_Param* Src);

    cString Unknown04;
    cString Unknown08;
    cString Unknown0C;
    cString Unknown10;
    cString Unknown14;
    cString Unknown18;
    cString Unknown1C;
    cString Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
};

// FUNCTION: 0x10AAA150 ?FUN_10aaa150@Class_10E6D9BC@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6D9BC::FUN_10aaa150(Class_10AAB590_Param* Src)
{
    Unknown04 = Src->Virtual2();
    Unknown08 = Src->Virtual2();
    Unknown10 = Src->Virtual2();
    Unknown18 = Src->Virtual2();
    Unknown0C = Src->Virtual2();
    Unknown14 = Src->Virtual2();
    Unknown1C = Src->Virtual2();
    Unknown20 = Src->Virtual2();
    Unknown24 = Src->Virtual3();
    Unknown30 = Src->Virtual3();
    return 1;
}
