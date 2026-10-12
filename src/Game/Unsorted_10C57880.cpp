// Game/Unsorted_10C57880.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1091CA00.h"
#include "Game/Class_1091DEE0.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10C59EE0.h"

extern Class_1091DEE0* DAT_10f2c928;

class Class_10C59EE0_Unknown00
{
public:
    char Pad00[9];
    bool Unknown09;
    bool Unknown0A;
    char Pad0B[1];
    int Unknown0C;
};

// FUNCTION: 0x10C58BB0 ?FUN_10c58bb0@Class_10C59EE0@@QAEX_N0@Z
void Class_10C59EE0::FUN_10c58bb0(bool A, bool B)
{
    if (A)
    {
        Unknown00->Unknown09 = true;
        Unknown00->Unknown0A = B;
        return;
    }
    Unknown00->Unknown09 = false;
    if (DAT_10f2c928)
    {
        Class_1091CA00* Font;
        {
            Class_109081E0 Name("font10");
            Font = DAT_10f2c928->FUN_1091dc40(Name);
        }
        if (Font)
            Font->FUN_1091ca00(Unknown00->Unknown0C);
    }
}
