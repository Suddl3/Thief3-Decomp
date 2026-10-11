// Game/Class_10E6C740_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

class Class_10E6C740_Member
{
public:
    int Unknown00;
    char Pad04[0x30];
    FName* Unknown34;
    int Unknown38;
};

class Class_10E6C740
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a8c950(int A, const Class_10E6C740* B);
    virtual Class_109081E0 FUN_10a8ccc0();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10a8c990();
    virtual int FUN_10a8c9b0();
    virtual void Virtual8() = 0;
    virtual void Virtual9() = 0;
    virtual void Virtual10() = 0;
    virtual void Virtual11() = 0;
    virtual void FUN_10a8ca90(const Class_10E6C740* p1);

    Class_10E6C740_Member* Unknown04;
    int Unknown08;
};

extern const char DAT_10e5d9fc[];

extern const char DAT_10e6c778[];

extern const char DAT_10e48c2c[];

Class_109081E0 FUN_1090a660(const char* Format, ...);

// FUNCTION: 0x10A8CCC0 ?FUN_10a8ccc0@Class_10E6C740@@UAE?AVClass_109081E0@@XZ
Class_109081E0 Class_10E6C740::FUN_10a8ccc0()
{
    if (Unknown08 == -1)
        return Class_109081E0(DAT_10e5d9fc);
    if (Unknown04 && Unknown08 <= Unknown04->Unknown38)
    {
        if (Unknown08 == Unknown04->Unknown38)
            return Class_109081E0(DAT_10e6c778);
        return Class_109081E0(Unknown04->Unknown34[Unknown08].FUN_10af9730());
    }
    return Class_109081E0(FUN_1090a660(DAT_10e48c2c, Unknown08));
}
