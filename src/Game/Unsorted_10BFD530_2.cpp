// Game/Unsorted_10BFD530_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"

class Class_10BAEC00
{
public:
    void FUN_10bae100(int Count);
    void FUN_10baec00();
    void FUN_10bfc320(int A, int B);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10BFD780_Unknown10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual bool Virtual12(int Key);
    virtual void Virtual13(int Key);
};

struct Struct_10BFD780_Elem
{
    int Unknown00;
    int Key;
    char Pad08[0xc];
};

class Class_10BFD780
{
public:
    void FUN_10bfd780(int Key);

    char Unknown00[8];
    Class_10BFBD70 Unknown08;
    Class_10BFD780_Unknown10* Unknown14;
    Class_10BFD780_Unknown10* Unknown18;
    Class_10BFD780_Unknown10* Unknown1C;
    char Pad20[0x34];
    Class_10BAEC00 Unknown54;
};

// FUNCTION: 0x10BFD780 ?FUN_10bfd780@Class_10BFD780@@QAEXH@Z
void Class_10BFD780::FUN_10bfd780(int Key)
{
    for (int i = 0; i < Unknown08.Count; i++)
    {
        Class_10BFD780_Unknown10* Obj = (Class_10BFD780_Unknown10*)Unknown08.Data[i];
        if (Obj->Virtual12(Key))
        {
            if (Unknown14 == Obj)
                Unknown14 = 0;
            if (Unknown18 == Obj)
                Unknown18 = 0;
            if (Unknown1C == Obj)
                Unknown1C = 0;
            Class_10BFBD70* Arr = &Unknown08;
            int Tmp = Arr->Data[i];
            int Last = Arr->Count - 1;
            Arr->Data[i] = Arr->Data[Last];
            Arr->Data[Last] = Tmp;
            Arr->FUN_10bfbd70(Arr->Count - 1);
            i--;
            Obj->Virtual5(1);
        }
        else
        {
            Obj->Virtual13(Key);
        }
    }
    for (int j = 0; j < Unknown54.Unknown00; j++)
    {
        Struct_10BFD780_Elem* Elem = (Struct_10BFD780_Elem*)Unknown54.Unknown08;
        if (Elem[j].Key == Key)
        {
            Unknown54.FUN_10bfc320(j, Unknown54.Unknown00 - 1);
            Unknown54.FUN_10bae100(Unknown54.Unknown00 - 1);
            j--;
        }
    }
}
