// Game/Class_10E888E4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>

#include "Game/Class_10E888E4.h"

class Class_10B7A320_Unknown0C
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A);
};

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
