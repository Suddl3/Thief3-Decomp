// Game/State_Flee_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10E90D70.h"
#include "Game/Struct_10BE9AC0.h"
#include "Game/Struct_10C08690.h"

class APawn
{
public:
    void FUN_10a6ea30(int Flags, int Value);
};

class State_Flee : public Class_10E90D70
{
public:
    virtual void Virtual0();  // slot 0: FUN_10be9ac0 (0x10BE9AC0)
    ~State_Flee();

    char Unknown40[0x14];
    cIntArray Unknown54;
    Struct_10BE9AC0* Unknown60;
};

// FUNCTION: 0x10BE9E80 ??1State_Flee@@QAE@XZ
State_Flee::~State_Flee()
{
    cIntArray* Items = &Unknown54;
    for (int i = 0; i < Items->Count; i++)
        delete (Struct_10C08690*)Items->Data[i];
    Items->Count = 0;
    if (Unknown60)
    {
        if (Unknown60->Unknown04)
            Unknown60->Unknown04->FUN_10a6ea30(0x800709, 0);
        delete Unknown60;
        Unknown60 = 0;
    }
}
