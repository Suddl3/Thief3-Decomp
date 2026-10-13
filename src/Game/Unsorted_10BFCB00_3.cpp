// Game/Unsorted_10BFCB00_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10BFCDD0.h"

class Class_10978090Result;

class Class_10BAA6B0_Param;

class Class_10C08940;

// Copied whole from include/Game/Class_10978090.h, with the two members the call sites show
// differently: Virtual0 returns an int, and Virtual5 takes an int.
class Class_10978090
{
public:
    virtual int Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5(int A);
    virtual int Virtual6(int A, int B);
    virtual void Virtual7();
    virtual Class_10BAA6B0_Param* Virtual8();

    Class_10978090Result* FUN_10978090();

    Class_10C08940* Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10BFCDD0 ?FUN_10bfcdd0@Class_10BFCDD0@@QAEXXZ
void Class_10BFCDD0::FUN_10bfcdd0()
{
    cIntArray* List = &Unknown08;
    for (int i = 0; i < Unknown08.Count; i++)
    {
        Class_10978090* Item = (Class_10978090*)Unknown08.Data[i];
        if (Item->Virtual0() == 1 || Item->Virtual0() == 7)
        {
            if (Unknown14 == Item)
                Unknown14 = 0;
            if (Unknown18 == Item)
                Unknown18 = 0;
            if (Unknown1C == Item)
                Unknown1C = 0;
            int Last = List->Count - 1;
            int Tmp = List->Data[i];
            List->Data[i] = List->Data[Last];
            List->Data[Last] = Tmp;
            List->SetCount(List->Count - 1);
            i--;
            Item->Virtual5(1);
        }
    }
}
