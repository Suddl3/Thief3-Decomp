// Game/Class_10E6D940_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10A810F0.h"

class cConEvent : public Class_10A810F0
{
public:
    virtual ~cConEvent() {}
};

// The objects Class_10E6D940 owns at +0x08 and +0x0C, deleted through their virtual destructors.
class Class_10AA78B0_Field08
{
public:
    virtual ~Class_10AA78B0_Field08();
};

class Class_10AA78B0_Field0C
{
public:
    virtual ~Class_10AA78B0_Field0C();
};

class Class_10E6D940 : public cConEvent
{
public:
    virtual ~Class_10E6D940();

    Class_10AA78B0_Field08* Unknown08;
    Class_10AA78B0_Field0C* Unknown0C;
    cString Unknown10;
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10AA78B0 ??1Class_10E6D940@@UAE@XZ
Class_10E6D940::~Class_10E6D940()
{
    delete Unknown08;
    delete Unknown0C;
    Unknown08 = 0;
    Unknown0C = 0;
}
