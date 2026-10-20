// Game/Unsorted_10AA8560_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10AB37F0.h"
#include "Game/Class_10AB3C20.h"
#include "Game/Class_10AAB590_Param.h"

// The class the vtable at 0x10E6D990 belongs to: this function is its
// slot 4.
class Class_10E6D990
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int FUN_10aa88b0(Class_10AAB590_Param* Src);

    cString Unknown04;
    cString Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    cString Unknown1C;
    Class_10AB37F0 Unknown20;
};

// FUNCTION: 0x10AA88B0 ?FUN_10aa88b0@Class_10E6D990@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6D990::FUN_10aa88b0(Class_10AAB590_Param* Src)
{
    Unknown04 = Src->Virtual2();
    Unknown08 = Src->Virtual2();
    Unknown20.FUN_10ab37f0(Src->Virtual2());
    Unknown0C = Src->Virtual3();
    Unknown10 = Src->Virtual3();
    Unknown14 = Src->Virtual3();
    Unknown18 = Src->Virtual3();
    Unknown1C = Src->Virtual2();
    ((Class_10AB3C20*)&Unknown20)->SetValue(Src->Virtual2());
    return 1;
}
