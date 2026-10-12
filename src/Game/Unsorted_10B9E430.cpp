// Game/Unsorted_10B9E430.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9E410_Member.h"
#include "Game/Class_10BA9EC0.h"
#include "Game/Class_10C01CE0.h"
#include "Game/Class_10BA9EE0.h"

struct Class_10B9E410_Unknown0C
{
    char Unknown00[8];
    Class_10BA9EE0* Unknown08;
};

class cStateStack
{
public:
    void ApplyNextState(int A);
    void FUN_10b9e660();
    void FUN_10b9e690(int A);

    char Unknown00[0xC];
    Class_10B9E410_Unknown0C* Unknown0C;
    char m_Count[0x28];
    Class_10B9E410_Member* m_Member;
};

// FUNCTION: 0x10B9E660 ?FUN_10b9e660@cStateStack@@QAEXXZ
void cStateStack::FUN_10b9e660()
{
    int Result = Unknown0C->Unknown08->FUN_10ba9ee0();
    if (Result)
    {
        int Next = m_Member->Virtual11(Unknown0C, Result);
        if (Next)
            ApplyNextState(Next);
    }
}

// FUNCTION: 0x10B9E690 ?FUN_10b9e690@cStateStack@@QAEXH@Z
void cStateStack::FUN_10b9e690(int A)
{
    static_cast<Class_10C01CE0*>(Unknown0C->Unknown08->FUN_10ba9ec0())->RemoveAll();
    Class_10B9E410_Member* Obj = m_Member;
    Class_10B9E410_Unknown0C* Key = Unknown0C;
    int Next = Obj->Virtual48(Key, A);
    if (Next)
        ApplyNextState(Next);
}
