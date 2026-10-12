// Game/Class_10E6C364_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A84610_Unknown10.h"
#include "Game/Class_10AAB590_Param.h"

class Class_10E6C364
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int Write(Class_10AAB590_Param* Ar);

    int Unknown04;
    int m_Count;
    char Unknown0C[4];
    Class_10A84610_Unknown10** m_Entries;
};

// FUNCTION: 0x10A84610 ?Write@Class_10E6C364@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6C364::Write(Class_10AAB590_Param* Ar)
{
    Ar->Virtual1(Unknown04);
    Ar->Virtual1(m_Count);
    for (int i = 0; i < m_Count; i++)
    {
        Ar->Virtual1(m_Entries[i]->Virtual1());
        m_Entries[i]->Virtual7(Ar);
    }
    return 1;
}
