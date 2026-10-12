// Game/Unsorted_10B55830.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B559A0.h"
#include "Game/Class_10E81DE8.h"

class Object_10B56210
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A, int B, int C);
};

// FUNCTION: 0x10B559A0 ?SetState@Class_10B559A0@@QAEXHH@Z
void Class_10B559A0::SetState(int A, int B)
{
    switch (A)
    {
    case 2:
        FUN_10b55930();
        break;
    case 3:
        Virtual56(2);
        FUN_10b55830();
        break;
    }
    m_State = A;
}

// FUNCTION: 0x10B56210 ?FUN_10b56210@Class_10E81DE8@@UAE_NHHH@Z
bool Class_10E81DE8::FUN_10b56210(int A, int B, int C)
{
    if (Unknown1D0 && Unknown1D0->Virtual1(A, B, C))
        return true;
    return false;
}
