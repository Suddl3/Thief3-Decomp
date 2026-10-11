// Game/Unsorted_109E1FC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090FD40.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_1091CD10.h"

// COM interface behind DAT_10f35b10 and DAT_10f35b14: only Release (slot 2) is called.
class Class_109E2840_Com
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

extern const char DAT_10e47660[];

extern Class_109081E0 DAT_10f35d9c;

extern Class_1090FD40 DAT_10f35da0;

extern Class_1091CD10* DAT_10f35b38[2];

extern Class_109E2840_Com* DAT_10f35b10;

extern Class_109E2840_Com* DAT_10f35b14;

extern bool DAT_10f35b1c;

extern float DAT_10f35b20;

extern bool DAT_10effbec;

// FUNCTION: 0x109E2840 ?FUN_109e2840@@YAXXZ
void FUN_109e2840()
{
    DAT_10f35d9c = Class_109081E0(DAT_10e47660);
    DAT_10f35da0.FUN_1090f2c0(0);
    for (int i = 0; i < 2; i++)
    {
        Class_1091CD10* Element = DAT_10f35b38[i];
        if (Element)
        {
            Element->FUN_1091cd10();
            delete Element;
            DAT_10f35b38[i] = 0;
        }
    }
    if (DAT_10f35b10)
    {
        DAT_10f35b10->Virtual2();
        DAT_10f35b10 = 0;
    }
    if (DAT_10f35b14)
    {
        DAT_10f35b14->Virtual2();
        DAT_10f35b14 = 0;
    }
    DAT_10f35b1c = false;
    DAT_10f35b20 = 0.0f;
    DAT_10effbec = true;
}
