// Game/Class_10E93148.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E90D70.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10BD1320
{
public:
    void FUN_10bd0410(int Count);

    ~Class_10BD1320()
    {
        FUN_10bd0410(0);
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

class Class_10E93148 : public Class_10E90D70
{
public:
    virtual ~Class_10E93148();

    Class_10BD1320 Unknown40;
};

// FUNCTION: 0x10BD09D0 ??1Class_10E93148@@UAE@XZ
Class_10E93148::~Class_10E93148()
{
}
