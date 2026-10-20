// Game/Class_10E6F474.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6F474.h"

class Class_10ABB4E0_Element
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4(int A);
};

// FUNCTION: 0x10ABB4E0 ?FindMatchIndex@Class_10E6F474@@QAEHH@Z
int Class_10E6F474::FindMatchIndex(int A)
{
    for (int i = 0; i < m_Entries.Count; i++)
    {
        if (((Class_10ABB4E0_Element**)m_Entries.Data)[i]->Virtual4(A))
            return i;
    }
    return -1;
}
