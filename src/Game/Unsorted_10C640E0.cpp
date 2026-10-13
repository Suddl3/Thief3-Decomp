// Game/Unsorted_10C640E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C54970.h"
#include "Game/Class_10C562C0.h"
#include "Game/Class_10C64030_Member.h"
#include "Game/Class_10C647F0.h"
#include "Game/Struct_10C647F0_Vec.h"
#include "Game/cRefPtr.h"
#include "Game/Object_10AB5B20.h"
#include "Game/Class_10C60C60.h"

Class_10C562C0* FUN_10c562c0();

class Class_10C647F0_Unknown08
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
};

float FUN_10d4e270(const Struct_10C647F0_Vec& V);

class Class_10EB7660
{
public:
    Class_10EB7660();

    virtual ~Class_10EB7660();

    int Unknown04;
};

class Class_10E9CD84 : public Class_10EB7660
{
public:
    virtual ~Class_10E9CD84();

    Class_10C64030_Member* Unknown08;
    Class_10C60C60 Unknown0C;
    int Unknown10;
    bool Unknown14;
    bool Unknown15;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
};

bool FUN_10c5d5b0(int p1, int p2);

// FUNCTION: 0x10C640E0 ??1Class_10E9CD84@@UAE@XZ
Class_10E9CD84::~Class_10E9CD84()
{
    if (Unknown18)
        FUN_10c5d5b0((int)this, Unknown18);
    Unknown08->Virtual13();
    delete Unknown08;
    Unknown08 = 0;
}

// FUNCTION: 0x10C647F0 ?FUN_10c647f0@Class_10C647F0@@QAEXH@Z
void Class_10C647F0::FUN_10c647f0(int Param)
{
    if (Unknown08->Virtual1())
    {
        Unknown10 = Param + 10;
        return;
    }
    float Dist = FUN_10d4e270(Unknown20 - *FUN_10c562c0()->GetObject().m_Object->Virtual3());
    float Scaled = Dist * 0.0010416667f;
    Unknown10 = Scaled > 5.0f ? Param + 5 : (int)(Param + Scaled);
}
