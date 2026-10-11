// Game/Class_10E6C740_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

extern int DAT_10f3a1f4;

extern const char DAT_10e6c100[];

extern const char DAT_10e6c778[];

class Class_10A8CF70_Unknown04
{
public:
    char Pad00[0x34];
    FName* Unknown34;
    int Unknown38;
};

class Class_10E6C740
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual Class_109081E0 FUN_10a8cf70();

    Class_10A8CF70_Unknown04* Unknown04;
};

// FUNCTION: 0x10A8CF70 ?FUN_10a8cf70@Class_10E6C740@@UAE?AVClass_109081E0@@XZ
Class_109081E0 Class_10E6C740::FUN_10a8cf70()
{
    if (Unknown04)
    {
        int Count = Unknown04->Unknown38;
        if (DAT_10f3a1f4 == Count)
            return Class_109081E0(DAT_10e6c778);
        if (DAT_10f3a1f4 < Count)
            return Class_109081E0(Unknown04->Unknown34[DAT_10f3a1f4].FUN_10af9730());
    }
    return Class_109081E0(DAT_10e6c100);
}
