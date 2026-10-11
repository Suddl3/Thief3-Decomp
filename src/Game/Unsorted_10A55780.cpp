// Game/Unsorted_10A55780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

class Class_10A249B0
{
public:
    ~Class_10A249B0();
};

class Class_1091CD10
{
public:
    void FUN_1091cd10();
};

class Class_10A55300
{
public:
    void FUN_10a55300();
};

class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
};

class Class_10E684A8 : public Class_10E67FD0
{
public:
    virtual ~Class_10E684A8();

    char Unknown04[0x114];
    bool Unknown118;
    bool Unknown119;
    int Unknown11C;
    bool Unknown120;
    Class_109081E0 Unknown124;
    Class_109081E0 Unknown128;
    Class_10A249B0* Unknown12C;
    Class_1091CD10* Unknown130;
    char Unknown134[0x14];
    Class_10A55300* Unknown148;
};

// FUNCTION: 0x10A55DB0 ??1Class_10E684A8@@UAE@XZ
Class_10E684A8::~Class_10E684A8()
{
    if (Unknown12C)
    {
        delete Unknown12C;
        Unknown12C = 0;
    }
    Class_1091CD10* Object = Unknown130;
    if (Object)
    {
        Object->FUN_1091cd10();
        delete Object;
        Unknown130 = 0;
    }
    Class_10A55300* Other = Unknown148;
    if (Other)
    {
        Other->FUN_10a55300();
        delete Other;
        Unknown148 = 0;
    }
}
