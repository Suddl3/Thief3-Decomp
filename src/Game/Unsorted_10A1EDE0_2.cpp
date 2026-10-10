// Game/Unsorted_10A1EDE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E65558.h"

Class_10905A90_Member* FUN_10905aa0();

extern const char DAT_10e5027c[];

class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();
    Class_109081E0& FUN_1090a590(const char* In);

    char* Unknown00;
};

class Class_10E65574 : public Class_10E65558
{
public:
    Class_10E65574();
    virtual ~Class_10E65574();

    Class_109081E0 Unknown04;
};

// FUNCTION: 0x10A1EDE0 ??0Class_10E65574@@QAE@XZ
Class_10E65574::Class_10E65574()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Unknown04.FUN_1090a590(DAT_10e5027c);
    FUN_10905aa0()->Virtual9();
}
