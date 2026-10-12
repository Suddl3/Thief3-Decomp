// Game/Class_10E6D964_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10A810F0.h"

class Class_10E6C104 : public Class_10A810F0
{
public:
    virtual ~Class_10E6C104() {}
};

class Class_10AA7CC0_Unknown08
{
public:
    virtual ~Class_10AA7CC0_Unknown08();
};

class Class_10AA7CC0_Unknown0C
{
public:
    virtual ~Class_10AA7CC0_Unknown0C();
};

class Class_10E6D964 : public Class_10E6C104
{
public:
    virtual ~Class_10E6D964();

    Class_10AA7CC0_Unknown08* Unknown08;
    Class_10AA7CC0_Unknown0C* Unknown0C;
    cString Unknown10;
};

// FUNCTION: 0x10AA7CC0 ??1Class_10E6D964@@UAE@XZ
Class_10E6D964::~Class_10E6D964()
{
    delete Unknown08;
    delete Unknown0C;
    Unknown08 = 0;
    Unknown0C = 0;
}
