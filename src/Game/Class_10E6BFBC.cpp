// Game/Class_10E6BFBC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E6BF84.h"
#include "Game/Class_109081E0.h"

extern const char DAT_10e5da48[];

class Class_10E6BFBC : public Class_10E6BF84
{
public:
    Class_10E6BFBC(bool A);

    virtual int Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int FUN_10a7f470();
    virtual void Virtual8();
    virtual int FUN_10a7f420();

    bool Unknown04;
    char Unknown05[2];
    bool Unknown07;
    Class_109081E0 Unknown08;
    int Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10A7EF60 ??0Class_10E6BFBC@@QAE@_N@Z
Class_10E6BFBC::Class_10E6BFBC(bool A) : Unknown04(A), Unknown07(true), Unknown08(DAT_10e5da48)
{
    Unknown10 = 0;
}
