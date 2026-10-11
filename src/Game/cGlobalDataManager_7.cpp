// Game/cGlobalDataManager_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A16B60.h"

struct Struct_10A16E90
{
    unsigned short Low;
    short High;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class cGlobalDataManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void AddIntRef(int A, int B, int C, int D, short E);

    char m_FlagValues[0x2C];
    Class_10A16B60 m_Ints;
};

// FUNCTION: 0x10A16E90 ?AddIntRef@cGlobalDataManager@@UAEXHHHHF@Z
void cGlobalDataManager::AddIntRef(int A, int B, int C, int D, short E)
{
    if (A)
    {
        Struct_10A16E90 Key;
        Key.High = E;
        Key.Low = D;
        Key.Unknown04 = B;
        Key.Unknown08 = C;
        int Mid = 0;
        if (!(D & 1))
        {
            if (B > 0)
                Mid = B;
            if (Mid > C)
                Mid = C;
        }
        Key.Unknown0C = Mid;
        m_Ints.FUN_10a16b60(A, Key, 0, -1);
    }
}
