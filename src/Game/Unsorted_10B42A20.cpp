// Game/Unsorted_10B42A20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();

    char Unknown04[0x128];
};

class Class_10E809B8 : public Class_10E67FD0
{
public:
    virtual ~Class_10E809B8();

    Class_109081E0 Unknown12C;
};

// FUNCTION: 0x10B42A20 ??1Class_10E809B8@@UAE@XZ
Class_10E809B8::~Class_10E809B8()
{
}
