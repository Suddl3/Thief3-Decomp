// Game/Unsorted_10C57880.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1091CA00.h"
#include "Game/Class_1091DEE0.h"
#include "Game/cString.h"
#include "Game/Class_10C59EE0.h"
#include "Game/Class_10A036A0.h"
#include "Game/Class_10C56E40.h"
#include "Game/Class_10C57B30.h"
#include "Game/Class_10C57BC0.h"

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

class Class_10C57B30_Unknown00_Unknown00
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10C57BC0_Unknown00
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10C57BC0_Unknown04
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// FUNCTION: 0x10C57B30 ??1Class_10C57B30@@QAE@XZ
Class_10C57B30::~Class_10C57B30()
{
}

// FUNCTION: 0x10C57BC0 ?FUN_10c57bc0@Class_10C57BC0@@QAEAAV1@ABV1@@Z
Class_10C57BC0& Class_10C57BC0::FUN_10c57bc0(const Class_10C57BC0& Other)
{
    Class_10C57BC0_Unknown00* Old = Unknown00;
    Unknown00 = Other.Unknown00;
    if (Unknown00)
        Unknown00->Virtual1();
    if (Old)
        Old->Virtual2();

    Class_10C57BC0_Unknown04* Old4 = Unknown04;
    Unknown04 = Other.Unknown04;
    if (Unknown04)
        Unknown04->Virtual1();
    if (Old4)
        Old4->Virtual2();

    Unknown08 = Other.Unknown08;
    Unknown0C = Other.Unknown0C;
    Unknown10 = Other.Unknown10;
    Unknown14.FUN_10a036a0(Other.Unknown14);
    return *this;
}

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
            cString Name("font10");
            Font = DAT_10f2c928->FUN_1091dc40(Name);
        }
        if (Font)
            Font->FUN_1091ca00(Unknown00->Unknown0C);
    }
}
