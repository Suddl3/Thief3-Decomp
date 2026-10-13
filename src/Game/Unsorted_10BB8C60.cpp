// Game/Unsorted_10BB8C60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBA080.h"
#include "Game/Class_10BC9D40.h"

class Class_1098E330;

class Class_10DBD510;

class Class_10BE3FF0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
};

// FUNCTION: 0x10BB8C60 ?FUN_10bb8c60@Class_10BBA080@@QAEEXZ
unsigned char Class_10BBA080::FUN_10bb8c60()
{
    Class_10BE3FF0* Obj = FUN_10bb89d0();
    if (Obj)
    {
        if (Obj->Virtual3() == 2)
            return 1;
        if (Obj->Virtual3() == 3)
            return 2;
        if (Obj->Virtual3() == 4)
            return 3;
        Class_10BC9D40* Current = GetCurrent();
        if (Current && Current->Virtual3() == 0x29)
            return 3;
    }
    return 0;
}
