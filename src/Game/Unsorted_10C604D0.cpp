// Game/Unsorted_10C604D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C60480.h"
#include "Game/Class_10BFBD70.h"

class Item_10943600;

Class_10905A90_Member* GetAllocator();

// Game/Class_10C603E0.h has no destructor; this copy adds the inline one the owner's cleanup runs.
class Class_10C603E0
{
public:
    ~Class_10C603E0()
    {
        FUN_10c504a0(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void FUN_10c504a0(int Count);
    void FUN_10c603e0();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

// Game/Class_10943600.h has no destructor; Empty() is the body of its inline destructor.
class Class_10943600
{
public:
    ~Class_10943600()
    {
        FUN_10da4f50(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int FUN_10943600(const Item_10943600* Item);
    void FUN_10da4f50(int NewCount);

    int Unknown00;
    int Unknown04;
    Item_10943600* Unknown08;
};

class Class_10C609D0
{
public:
    ~Class_10C609D0();

    Class_10C603E0 Unknown00;
    Class_10BFBD70 Unknown0C;
    char Unknown18[0xc];
    Class_10943600 Unknown24;
};

// FUNCTION: 0x10C609D0 ??1Class_10C609D0@@QAE@XZ
Class_10C609D0::~Class_10C609D0()
{
    ((Class_10C60480*)this)->FUN_10c60480();
}
