// Game/Class_10E6C68C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

extern const char DAT_10e6c100[];

// The primary base (0x10E6BF84): it shares the vptr at offset 0.
class Class_10E6BF84
{
public:
    virtual ~Class_10E6BF84();
};

class Class_10E6C68C : public Class_10E6BF84
{
public:
    Class_10E6C68C();
    virtual ~Class_10E6C68C();

    int Unknown04;
    int Unknown08;
    Class_109081E0 Unknown0C;
};

// FUNCTION: 0x10A8B750 ??0Class_10E6C68C@@QAE@XZ
Class_10E6C68C::Class_10E6C68C()
{
    Unknown04 = 0;
    FUN_10905aa0()->Virtual8(0, 0);
    Unknown0C.FUN_1090a590(DAT_10e6c100);
    FUN_10905aa0()->Virtual9();
}
