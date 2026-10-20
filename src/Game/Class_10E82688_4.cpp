// Game/Class_10E82688_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A54FE0.h"
#include "Game/Class_10A55000.h"
#include "Game/Class_10A64D50.h"

class Class_10A55050
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16(int A);
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();

    void FUN_10a55050(unsigned char A);
};

class Class_10E82688
{
public:
    void StartSequence();

    char Unknown00[0x11C];
    Class_10A55050* Unknown11C;
    char m_FrameTime[4];
    int m_Elapsed;
    int m_FrameCount;
    int m_Frame;
    int Unknown130;
    Class_10A64D50 Unknown134;
};

// FUNCTION: 0x10B5A570 ?StartSequence@Class_10E82688@@QAEXXZ
void Class_10E82688::StartSequence()
{
    if (Unknown11C)
    {
        Unknown11C->Virtual36();
        m_FrameCount = ((Class_10A55000*)Unknown11C)->FUN_10a55000();
        if (!m_FrameCount)
            m_FrameCount = 1;
        m_Elapsed = 0;
        Unknown134.Reset();
        Unknown130 = 0;
        if (Unknown11C)
            Unknown11C->FUN_10a55050(Unknown130);
        m_Frame = 0;
        Unknown11C->FUN_10a55050(Unknown130);
        ((Class_10A54FE0*)Unknown11C)->FUN_10a54fe0(m_Frame);
    }
}
