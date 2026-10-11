// Game/Unsorted_10C13220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_10E6BF84.h"

Class_10905A90_Member* GetAllocator();

class Class_10C13220_Unknown04
{
public:
    int Unknown00[5];
    Class_10B0D530 Unknown14;
};

class Class_10E98530 : public Class_10E6BF84
{
public:
    virtual ~Class_10E98530();

    Class_10C13220_Unknown04* Unknown04;
    int Unknown08;
    int* Unknown0C;
};

// FUNCTION: 0x10C13220 ?FUN_10c13220@@YAXXZ
Class_10E98530::~Class_10E98530()
{
    if (Unknown04)
    {
        delete Unknown04;
        Unknown04 = 0;
    }
    if (Unknown0C)
    {
        int* Obj = Unknown0C - 1;
        GetAllocator()->Virtual5(Obj);
        Unknown0C = 0;
    }
}
