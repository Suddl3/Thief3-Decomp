// Game/Unsorted_10B756D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E67FD0.h"
#include "Game/Class_10B7B910.h"

class Class_10E876D0 : public Class_10E67FD0
{
public:
    virtual void Virtual56(int A);
    virtual void Virtual90();
    virtual void Virtual91();
    virtual void Virtual92();
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();

    Class_10E876D0();

    char Unknown150[0x80];
    Class_10B7B910 Unknown1D0;
};

// FUNCTION: 0x10B756D0 ?Virtual56@Class_10E876D0@@UAEXH@Z
void Class_10E876D0::Virtual56(int A)
{
    Class_10E67FD0::FUN_10a52a90(A);
    Virtual20();
    if (!A)
    {
        Virtual97();
        Virtual98();
    }
    else
    {
        Virtual98();
        Virtual97();
        Unknown1D0.Field00 = 1;
    }
}
