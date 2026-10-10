// Game/Unsorted_10A88E50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A19020.h"

class Class_10E6C484_Unknown04
{
public:
    virtual ~Class_10E6C484_Unknown04();
};

class Class_10E6C484 : public Class_10A19020
{
public:
    ~Class_10E6C484();

    Class_10E6C484_Unknown04* Unknown04;
    char Unknown08[0x670];
    int Unknown678;
};

// FUNCTION: 0x10A88E50 ??1Class_10E6C484@@QAE@XZ
Class_10E6C484::~Class_10E6C484()
{
    if (Unknown04)
    {
        delete Unknown04;
        Unknown678 = 0;
        Unknown04 = 0;
    }
}
