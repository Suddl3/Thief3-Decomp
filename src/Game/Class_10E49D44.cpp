// Game/Class_10E49D44.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E49D44.h"

class Class_10932F40_Item
{
public:
    virtual ~Class_10932F40_Item();
};

// FUNCTION: 0x10932F40 ?ClearItems@Class_10E49D44@@QAEXXZ
void Class_10E49D44::ClearItems()
{
    if (Unknown10)
    {
        for (unsigned int i = 0; i < Unknown0C; i++)
        {
            delete Unknown10[i];
            Unknown10[i] = 0;
        }
        delete Unknown10;
        Unknown10 = 0;
        Unknown0C = 0;
    }
}

// FUNCTION: 0x10932FA0 ?AddRef@Class_10E49D44@@UAEHXZ
int Class_10E49D44::AddRef()
{
    return ++Unknown04;
}

// FUNCTION: 0x109331A0 ?Release@Class_10E49D44@@UAEHXZ
int Class_10E49D44::Release()
{
    int Count = --Unknown04;
    if (Count == 0)
        delete this;
    return Count;
}
