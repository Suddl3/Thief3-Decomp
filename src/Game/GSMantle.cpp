// Game/GSMantle.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/GSMantle.h"
#include "Core/Core.h"
#include "Game/Class_10B25200.h"
#include "Game/Class_10B3AE70.h"
#include "Game/Class_10E7E538.h"

class Class_10B3B260_Item
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

class Class_10B3B260_Unknown0B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10B3B260_Item* Virtual6();
};

struct Struct_10B53A00
{
    char Unknown00[0xB0];
    Class_10B3B260_Unknown0B0* Unknown0B0;
    char Unknown0B4[0x39C];
    int Unknown450;
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

// FUNCTION: 0x10B3AE50 ?ForceArms@GSMantle@@QAEXPAVAGarrett@@@Z
void GSMantle::ForceArms(AGarrett* Garrett)
{
    Garrett->ArmUse = EAU_FORCED_ARMS;
    GetSelection()->SetJunkState();
}

// FUNCTION: 0x10B3B260 ?ReleaseItem@GSMantle@@QAEXPAUStruct_10B53A00@@@Z
void GSMantle::ReleaseItem(Struct_10B53A00* P)
{
    Class_10B3B260_Item* Item = P->Unknown0B0->Virtual6();
    Item->Virtual19(0);
    if (!Item->Unknown104)
        P->Unknown450 &= ~2;
}
