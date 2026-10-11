// Game/Unsorted_10B499D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10A18E80.h"
#include "Game/Class_10B193E0.h"
#include "Game/Class_10B3C760.h"

class Class_10B19300;

class Object_10A18FC0;

Class_10B19300* FUN_10b190e0();

Object_10A18FC0* FUN_10a18fc0();

class Class_10E7E610
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int FUN_10b49c60(Struct_10B193E0* A);

    int FUN_10b499d0(Struct_10B193E0* A);
    bool FUN_10b3b540(Struct_10B193E0* A, int B, int C);
    void FUN_10b493a0();
};

// FUNCTION: 0x10B49C60 ?FUN_10b49c60@Class_10E7E610@@UAEHPAUStruct_10B193E0@@@Z
int Class_10E7E610::FUN_10b49c60(Struct_10B193E0* A)
{
    ((Class_10B193E0*)FUN_10b190e0())->FUN_10b193e0(A);
    int Result = FUN_10b499d0(A);
    if (Result == 0x21)
    {
        if (FUN_10b3b540(A, 0, 0))
            return 1;
        if (((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(0) < 0.0f)
        {
            FVector V(0.0f, 0.0f, 0.0f);
            if (((Class_10B3C760*)this)->FUN_10b3c430((Struct_10B3C760_Param*)A, V, true))
                return 2;
        }
        FUN_10b493a0();
        Result = Virtual4();
    }
    return Result;
}
