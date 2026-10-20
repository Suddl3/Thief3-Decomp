// Game/Unsorted_10BFD110_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10BAA6B0_Param;

class Class_10C08940;

// Copied whole from include/Game/Class_10978090.h, with the one member the call site shows
// differently: Virtual0 returns the int the code compares with.
class Class_10978090
{
public:
    virtual int Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(int A, int B);
    virtual void Virtual7();
    virtual Class_10BAA6B0_Param* Virtual8();

    Class_10C08940* FUN_10978090();

    Class_10C08940* Unknown04;
    int Unknown08;
};

// Copied whole from include/Game/Class_10BFD160.h, with the method this function defines.
class Class_10BFD160
{
public:
    void CollectMatching(Class_10C08940* Owner, cIntArray* Ids, float Limit, cIntArray* Out);
    void FUN_10bfd110(cIntArray* Out, int Id);

    char Pad00[0x8];
    int m_Count;
    char Pad0C[0x4];
    Class_10978090** m_Objects;
};

// FUNCTION: 0x10BFD110 ?FUN_10bfd110@Class_10BFD160@@QAEXPAVcIntArray@@H@Z
void Class_10BFD160::FUN_10bfd110(cIntArray* Out, int Id)
{
    for (int i = 0; i < m_Count; i++)
    {
        Class_10978090* Obj = m_Objects[i];
        if (Obj->Virtual0() == Id)
        {
            int Index = Out->Count;
            Out->SetCount(Index + 1);
            Out->Data[Index] = (int)Obj;
        }
    }
}
