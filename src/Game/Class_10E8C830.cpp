// Game/Class_10E8C830.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10978090.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10BBDC30.h"

class Class_1098E330;

class Class_10971570;

struct Struct_10BBD8B0;

class Class_10BBDB40;

int FUN_10baa130(int A);

Class_10BBDB40* FUN_10bb0c30(int A);

class Class_10BB0F90_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);
};

class Class_10E8C830
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb0f90(int A, Class_10978090* B, Class_10BB0F90_Param* C);
};

// FUNCTION: 0x10BB0F90 ?FUN_10bb0f90@Class_10E8C830@@UAEHHPAVClass_10978090@@PAVClass_10BB0F90_Param@@@Z
int Class_10E8C830::FUN_10bb0f90(int A, Class_10978090* B, Class_10BB0F90_Param* C)
{
    if (B && B->Virtual8() && C && C->Virtual3() >= 2)
    {
        int Key = (int)C->Virtual4(0)->FUN_10978090();
        int Value = C->Virtual4(1)->GetUnknown08();
        Class_10BBDC30* Obj = (Class_10BBDC30*)FUN_10bb0c30((int)B);
        if (Obj == 0)
            return 0;
        int Third = FUN_10baa130(Key);
        Obj->FUN_10bbdf10(Third, Value);
        return 1;
    }
    return 0;
}
