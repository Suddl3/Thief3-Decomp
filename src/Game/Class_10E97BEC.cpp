// Game/Unsorted_10C0AD90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
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

    void FUN_10bfbd70(int Count);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10E97BEC
{
public:
    virtual ~Class_10E97BEC();

    Class_10BFBD70 Unknown04;
};

// FUNCTION: 0x10C0AD90 ??1Class_10E97BEC@@UAE@XZ
Class_10E97BEC::~Class_10E97BEC()
{
}
