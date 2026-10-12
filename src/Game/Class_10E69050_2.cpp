// Game/Class_10E69050_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E69050.h"

class Class_10A58BE0_Member
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
};

// FUNCTION: 0x10A58BB0 ?IsFinished@Class_10E69050@@UAEHXZ
int Class_10E69050::IsFinished()
{
    int Index = m_Current;
    if (Index == m_Count - 1)
    {
        if (m_Items[Index]->Virtual1())
            return 1;
    }
    return 0;
}
