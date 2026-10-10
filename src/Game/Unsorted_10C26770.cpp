// Game/Unsorted_10C26770.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <math.h>
#include "Game/Class_109B6D50.h"
#include "Game/Class_10E9925C.h"

extern float DAT_10e49684;

class Class_10E992D4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10c26920();

    void FUN_10c265c0();
    void FUN_10c26600();

    char Unknown04[0x20];
    float Unknown24;
    float Unknown28;
    float Unknown2C;
    char Unknown30[4];
    bool Unknown34;
    char Unknown35[3];
    int Unknown38;
};

// FUNCTION: 0x10C26770 ?FUN_10c26770@Class_10E9925C@@UAEXXZ
void Class_10E9925C::FUN_10c26770()
{
    if (Virtual14())
    {
        Class_109B6D50* P = FUN_10c26490();
        if (P && Unknown35 == true)
        {
            if (P->FUN_109b6d50(Unknown0C) == true)
                P->FUN_109b6d10(Unknown0C);
        }
        Unknown35 = false;
    }
}

// FUNCTION: 0x10C26920 ?FUN_10c26920@Class_10E992D4@@UAEXXZ
void Class_10E992D4::FUN_10c26920()
{
    if (!Unknown34)
    {
        if (Unknown38 > 0)
            FUN_10c265c0();
    }
    else if (Unknown38 == 0 && fabs(Unknown24) < DAT_10e49684 && fabs(Unknown28) < DAT_10e49684 && fabs(Unknown2C) < DAT_10e49684)
        FUN_10c26600();
}
