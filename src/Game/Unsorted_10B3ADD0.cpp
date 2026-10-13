// Game/Unsorted_10B3ADD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B25200.h"
#include "Game/Class_10B3AE70.h"
#include "Game/Class_10E7E538.h"
#include "Game/GSMantle.h"

struct Struct_10B48890;

class Class_10B3AF40_UnknownB0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Struct_10B48890* Virtual6();
};

struct Struct_10B3AF40_Param
{
    char Unknown00[0xB0];
    Class_10B3AF40_UnknownB0* UnknownB0;
};

enum EArmUse
{
    EAU_FREE,
    EAU_FORCED_BODY,
    EAU_FORCED_ARMS
};

class AGarrett
{
public:
    char Unknown00[0x54D];
    unsigned char ArmUse;
};

class Class_10B255F0 : public Class_10B25200
{
};

Class_10B255F0* GetSelection();

// FUNCTION: 0x10B3ADD0 ?FUN_10b3add0@@YGHE@Z
int __stdcall FUN_10b3add0(unsigned char A)
{
    switch (A)
    {
    case 2:
    case 10:
        return 0x1c;
    case 3:
        return 0x18;
    }
    return 0x21;
}

// FUNCTION: 0x10B3AE70 ?ForceBody@Class_10B3AE70@@QAEXPAVAGarrett@@@Z
void Class_10B3AE70::ForceBody(AGarrett* Garrett)
{
    Garrett->ArmUse = EAU_FORCED_BODY;
    GetSelection()->SetJunkState();
}

// FUNCTION: 0x10B3AF40 ?FUN_10b3af40@@YGPAUStruct_10B48890@@PAUStruct_10B3AF40_Param@@@Z
Struct_10B48890* __stdcall FUN_10b3af40(Struct_10B3AF40_Param* p1)
{
    return p1->UnknownB0->Virtual6();
}
