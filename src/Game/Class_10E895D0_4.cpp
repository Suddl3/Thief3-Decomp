// Game/Class_10E895D0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B8B9F0_Unknown10.h"

struct Struct_10B8B830;

class Class_10B8B9F0_Unknown10;

class Class_10E895D0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10b8c180(int A);

    void SetState(int Arg);
    bool FUN_10b8b640();
    void FUN_10b8b9f0(int A);
    void FUN_10b8baa0(int A);
    Class_10B8B9F0_Unknown10* FUN_10b8b8a0();
    void FUN_10b8bb30();
    void FUN_10b8bf80();

    int Unknown04;
    Struct_10B8B830* Unknown08;
    int m_State;
    Class_10B8B9F0_Unknown10* m_Controller;
    char Pad14[0x1C];
    int Unknown30;
    bool Unknown34;
    char Pad35[0x3];
};

// FUNCTION: 0x10B8C180 ?FUN_10b8c180@Class_10E895D0@@UAEXH@Z
void Class_10E895D0::FUN_10b8c180(int A)
{
    m_Controller = FUN_10b8b8a0();
    if (Unknown34 && Unknown30 == 0)
        FUN_10b8bf80();
    else
        Unknown34 = false;
    if (m_Controller)
    {
        if (Unknown30 != 0)
            FUN_10b8bb30();
        int Kind = m_Controller->Unknown04;
        if (Kind == 0)
        {
            FUN_10b8b9f0(A);
            return;
        }
        if (Kind == 1)
            FUN_10b8baa0(A);
    }
}
