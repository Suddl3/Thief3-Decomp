// Game/Unsorted_10925130.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cRenderTargetState.h"
#include "Game/Class_109251C0.h"
#include "Game/Class_109242E0.h"

class Class_10950230;

extern bool DAT_10f31a60;

extern Class_10950230* DAT_10f31a64;

extern bool DAT_10efef51;

extern Class_109242E0* DAT_10f319a0;

class Class_109251C0_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(int Value);

    char Unknown04[0x38];
    bool Unknown3C;
};

// FUNCTION: 0x109251C0 ?FUN_109251c0@Class_109251C0@@QAEXH@Z
void Class_109251C0::FUN_109251c0(int Value)
{
    if (!DAT_10f31a60 && !DAT_10f31a64)
    {
        if (DAT_10efef51)
            FUN_109189c0();
        else
            DAT_10f319a0->ApplyRenderTarget();
        Unknown04 = Value;
        for (int i = 0; i < UnknownBC; i++)
        {
            Class_109251C0_Item* Item = UnknownC4[i];
            if (Item->Unknown3C)
                Item->Virtual3(Unknown04);
        }
    }
}
