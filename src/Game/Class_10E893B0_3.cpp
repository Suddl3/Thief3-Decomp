// Game/Class_10E893B0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B8D520.h"
#include "Game/Class_10DA91B0.h"

class Class_10E89384
{
public:
    virtual ~Class_10E89384() {}
};

class Class_10E893B0 : public Class_10E89384
{
public:
    virtual ~Class_10E893B0();

    char Unknown04[0x48];
    Class_10DA91B0 Unknown4C;
    Class_10B8D520* Unknown78;
};

// FUNCTION: 0x10B879C0 ??1Class_10E893B0@@UAE@XZ
Class_10E893B0::~Class_10E893B0()
{
    if (Unknown78)
    {
        delete Unknown78;
        Unknown78 = 0;
    }
}
