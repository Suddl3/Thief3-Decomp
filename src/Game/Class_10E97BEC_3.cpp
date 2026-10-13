// Game/Class_10E97BEC_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Struct_10AA3520.h"

class Class_10C0AEB0_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1(bool* Out, int Mode);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(Class_10B21560** Item);

    char Unknown04[0x10];
    int Unknown14;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E97BEC
{
public:
    virtual void Virtual0();
    virtual void FUN_10c0aeb0(Class_10C0AEB0_Param* A, Class_10B21560** B);

    cIntArray Unknown04;
};

// FUNCTION: 0x10C0AEB0 ?FUN_10c0aeb0@Class_10E97BEC@@UAEXPAVClass_10C0AEB0_Param@@PAPAVClass_10B21560@@@Z
void Class_10E97BEC::FUN_10c0aeb0(Class_10C0AEB0_Param* A, Class_10B21560** B)
{
    bool Found = B && *B && DAT_10f35dec && DAT_10f35dec->Unknown08 == *B;
    A->Virtual1(&Found, 1);
    if (Found)
    {
        if (A->Unknown14)
        {
            cIntArray* List = &Unknown04;
            int Index = List->Count;
            List->SetCount(Index + 1);
            List->Data[Index] = (int)B;
            *B = 0;
        }
    }
    else
    {
        A->Virtual6(B);
    }
}
