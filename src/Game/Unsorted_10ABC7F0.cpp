// Game/Unsorted_10ABC7F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10978090.h"

class Class_10E77578
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, Class_10BFBD70* D);
};

Class_10E77578* FUN_10b0b2b0();

// FUNCTION: 0x10ABC8F0 ?FUN_10abc8f0@@YA_NH@Z
bool FUN_10abc8f0(int Param)
{
    Class_10BFBD70 Items;
    FUN_10b0b2b0()->Virtual4(0, Param, 0x281b9d0, &Items);
    if (Items.Count)
    {
        Class_10978090* Item = (Class_10978090*)Items.Data[0];
        UObject* Obj = (UObject*)Item->FUN_10978090();
        if (Obj->IsA(APawn::StaticClass()))
            return true;
    }
    return false;
}
