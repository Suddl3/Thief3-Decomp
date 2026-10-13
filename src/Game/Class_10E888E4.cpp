// Game/Class_10E888E4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>

class FVector
{
public:
    float X;
    float Y;
    float Z;
};

class Class_10B7A320_Unknown0C
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A);
};

class Class_10E888E4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void FUN_10b7a320(int A);

    void FUN_10b79340(int A);

    char Unknown04[8];
    Class_10B7A320_Unknown0C Unknown0C;
    FVector Unknown10;
    char Unknown1C[0x24];
    bool Unknown40;
    char Unknown41[0x3B];
    float Unknown7C;
};

// FUNCTION: 0x10B7A320 ?FUN_10b7a320@Class_10E888E4@@UAEXH@Z
void Class_10E888E4::FUN_10b7a320(int A)
{
    Unknown0C.Virtual1(A);
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
