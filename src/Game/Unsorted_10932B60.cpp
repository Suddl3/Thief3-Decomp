// Game/Unsorted_10932B60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10932830.h"
#include "Game/Class_109329F0.h"

class Class_10E4A668
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual ~Class_10E4A668();
};

Class_10E4A668* FUN_10955790(int B);

int FUN_10932c50(int A, Class_10E4A668* P);

void FUN_10932d40(int A, int B);

Class_10905A90_Member* FUN_10905aa0();

extern const char DAT_10e47660[];

Class_109081E0 FUN_10932a70(const char* Param1);

extern Class_109329F0 DAT_10eff31c;

// FUNCTION: 0x10932D40 ?FUN_10932d40@@YAXABVClass_109081E0@@H@Z
void FUN_10932d40(const Class_109081E0& Param1, int Param2)
{
    Class_109081E0 Name = FUN_10932a70(*Param1);
    DAT_10eff31c.FUN_10932830(Name, Param2);
}

// FUNCTION: 0x10932DC0 ?FUN_10932dc0@@YAXHH@Z
void FUN_10932dc0(int A, int B)
{
    Class_10E4A668* P = FUN_10955790(B);
    if (P)
    {
        FUN_10932d40(A, FUN_10932c50(A, P));
        delete P;
    }
}
