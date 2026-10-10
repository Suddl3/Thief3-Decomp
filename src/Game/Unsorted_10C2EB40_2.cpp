// Game/Unsorted_10C2EB40_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C39220.h"
#include "Game/Struct_10C2EB70.h"
#include "Game/Class_10C2EB70.h"

class Class_10C270D0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();

    void FUN_10c270d0();

    char Unknown04[0x44];
    Class_10C39220* Unknown48;
};

class Class_10E9AA7C : public Class_10C270D0
{
public:
    virtual void FUN_10c2eb40();
};

// FUNCTION: 0x10C2EB40 ?FUN_10c2eb40@Class_10E9AA7C@@UAEXXZ
void Class_10E9AA7C::FUN_10c2eb40()
{
    if (Unknown48)
    {
        switch (Unknown48->FUN_10c3c2c0(1))
        {
        case 0:
            FUN_10c270d0();
            break;
        case 1:
            return;
        }
    }
}

// FUNCTION: 0x10C2EB70 ?FUN_10c2eb70@Class_10C2EB70@@QAEXPAUStruct_10C2EB70@@@Z
void Class_10C2EB70::FUN_10c2eb70(Struct_10C2EB70* Out)
{
    *Out = Unknown4C;
}
