// Game/Unsorted_10B3C860.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10B3C760_Param.h"
#include "Game/Class_10B3C760.h"

class FVector;

struct Struct_10B3C760_Param;

class Class_10B39890;

class Class_10B3C860_Unknown0B0;

class Class_10B3C860_Result;

class Class_10B3C860_Unknown0B0
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
    virtual Class_10B3C860_Result* Virtual8();
};

class Class_10B3C860_Result
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
    virtual void Virtual19(int A);

    char Unknown04[0x100];
    bool Unknown104;
};

// FUNCTION: 0x10B3C860 ?FUN_10b3c860@Class_10B3C760@@QAE_NPAUStruct_10B3C760_Param@@ABVFVector@@_N@Z
bool Class_10B3C760::FUN_10b3c860(Struct_10B3C760_Param* P, const FVector& V, bool C)
{
    Class_10B3C860_Result* Obj = P->Unknown0B0->Virtual8();
    if (Obj)
    {
        bool Flag = Obj->Unknown104;
        if (!Flag)
            Obj->Virtual19(1);
        bool R = FUN_10b3c430(P, V, C);
        if (!Flag)
            Obj->Virtual19(0);
        return R;
    }
    return false;
}
