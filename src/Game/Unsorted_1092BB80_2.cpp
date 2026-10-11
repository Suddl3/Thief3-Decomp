// Game/Unsorted_1092BB80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];

Class_10905A90_Member* FUN_10905aa0();

class Class_109081E0 : public Class_1090A780
{
public:
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }
    Class_109081E0(const char* In);
    Class_109081E0(const Class_109081E0& Other);
    Class_109081E0(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    Class_109081E0& operator=(const Class_109081E0& Other);
    Class_109081E0& FUN_1090a590(const char* In);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }

    char Unknown04[8];
    Class_109081E0* Unknown0C;
    Class_109081E0* Unknown10;
};

class Class_1092C0A0
{
public:
    void FUN_1092c0a0();

    Class_109081E0* Unknown00;
    Class_109081E0* Unknown04;
    int Unknown08;
};

// FUNCTION: 0x1092C0A0 ?FUN_1092c0a0@Class_1092C0A0@@QAEXXZ
void Class_1092C0A0::FUN_1092c0a0()
{
    Class_109081E0* P = Unknown00;
    while (P && Unknown08)
    {
        Class_109081E0* Next = P->Unknown10;
        if (!P->Unknown0C)
            Unknown00 = P->Unknown10;
        else
            P->Unknown0C->Unknown10 = P->Unknown10;
        if (!P->Unknown10)
            Unknown04 = P->Unknown0C;
        else
            P->Unknown10->Unknown0C = P->Unknown0C;
        Unknown08--;
        delete P;
        P = Next;
    }
}
