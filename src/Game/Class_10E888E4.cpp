// Game/Class_10E888E4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include "Game/Class_10E888E4.h"
#include "Game/Base_10B7AA20.h"
#include "Game/Class_10B78340.h"
#include "Game/Class_10B7AC80.h"
#include "Game/Class_10B7B910.h"
#include "Game/Class_10B81A40.h"
#include "Game/Class_10B81B10.h"
#include "Game/Class_10E89268.h"
#include "Game/Struct_10B7AA20.h"

class Class_10B7A320_Unknown0C
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A);
};

extern void* DAT_10e888e4[];

extern void* DAT_10e68f94[];

// FUNCTION: 0x10B7A2F0 ?Init@Class_10E888E4@@QAEPAV1@XZ
Class_10E888E4* Class_10E888E4::Init()
{
    Unknown04 = 1.0f;
    Unknown08 = 0;
    Unknown0C = DAT_10e68f94;
    Unknown4C = 32767.0f;
    *(void**)this = DAT_10e888e4;
    return this;
}

// FUNCTION: 0x10B7A320 ?FUN_10b7a320@Class_10E888E4@@UAEXH@Z
void Class_10E888E4::FUN_10b7a320(int A)
{
    (*(Class_10B7A320_Unknown0C*)&Unknown0C).Virtual1(A);
    if (Unknown40)
    {
        if (fabs(Unknown7C - 1.0f) > 0.0001f)
        {
            if (Unknown7C > 1.0f)
                Unknown7C = (Unknown7C - 1.0f) * 0.5f + 1.0f;
            else
                Unknown7C = (1.0f - Unknown7C) * 0.5f + 1.0f;
        }
        FVector Position = Unknown10;
        FUN_10b79340((int)&Position);
    }
}
