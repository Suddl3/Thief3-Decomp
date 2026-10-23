// Game/Unsorted_10BF0D70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10C7D570.h"
#include "Game/Object_10BF1500.h"
#include "Game/Struct_10BF1500.h"

class Class_10E90D70
{
public:
    ~Class_10E90D70();

    virtual void Virtual0();
};

class cStateMeleeCombat : public Class_10E90D70
{
public:
    ~cStateMeleeCombat();

    char Unknown04[0x44];
    FString Unknown48;
};

class cStateRangedCombat
{
public:
    bool FUN_10bf1500();

    char Unknown00[4];
    Struct_10BF1500* Unknown04;
};

// FUNCTION: 0x10BF1500 ?FUN_10bf1500@cStateRangedCombat@@QAE_NXZ
bool cStateRangedCombat::FUN_10bf1500()
{
    Class_1098E330* Obj = ((Object_10BF1500*)Unknown04->Unknown08->FUN_10c7d570())->Virtual98();
    if (Obj)
    {
        int Value = 0;
        Obj->GetPropertyValue(0x8007b1, &Value);
        return Value != 0;
    }
    return false;
}

// FUNCTION: 0x10BF6990 ??1cStateMeleeCombat@@QAE@XZ
cStateMeleeCombat::~cStateMeleeCombat()
{
}
