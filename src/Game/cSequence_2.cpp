// Game/cSequence_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cSequence.h"

class Class_10A58BE0_Member
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
};

// FUNCTION: 0x10A58BB0 ?IsFinished@cSequence@@UAEHXZ
int cSequence::IsFinished()
{
    int Index = m_Current;
    if (Index == m_Count - 1)
    {
        if (m_Items[Index]->Virtual1())
            return 1;
    }
    return 0;
}
