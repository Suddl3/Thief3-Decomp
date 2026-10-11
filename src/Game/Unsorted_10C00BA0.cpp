// Game/Unsorted_10C00BA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E98C8C.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

class Class_10C00BA0_Unknown08_Unknown00
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// The member at 0x08 is Class_10C56E40 (its destructor is 0x10C56E40, which the unwind funclet calls).
class Class_10C56E40
{
public:
    ~Class_10C56E40()
    {
        Class_10C00BA0_Unknown08_Unknown00* P = Unknown00;
        if (P)
        {
            P->Virtual2();
        }
    }

    Class_10C00BA0_Unknown08_Unknown00* Unknown00;
    char Pad04[0x4];
};

class Class_10C00BA0
{
public:
    ~Class_10C00BA0();

    Class_109081E0 Unknown00;
    char Pad04[0x4];
    Class_10C56E40 Unknown08;
    Class_10E98C8C* Unknown10;
    char Pad14[0x8];
    Class_109081E0 Unknown1C;
};

// FUNCTION: 0x10C00BA0 ??1Class_10C00BA0@@QAE@XZ
Class_10C00BA0::~Class_10C00BA0()
{
    delete Unknown10;
}
