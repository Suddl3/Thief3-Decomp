// Game/Class_10E85AD8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);

    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
};

class Class_10E85AD8 : public Class_10E67FD0
{
public:
    virtual ~Class_10E85AD8();

    char Unknown04[0x148];
    Class_10BFBD70 Unknown14C;
};

// FUNCTION: 0x10B698B0 ??1Class_10E85AD8@@UAE@XZ
Class_10E85AD8::~Class_10E85AD8()
{
}
