// Game/Unsorted_10B1BCF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B1D1B0.h"
#include "Game/Struct_10B1D1B0_Unknown00.h"

extern void* DAT_10e79488[];

class Class_10B1BCF0_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10E79488
{
public:
    ~Class_10E79488();

    void** Unknown00;
    int Unknown04;
    Class_10B1BCF0_Member* Unknown08;
};

class Class_10B228E0;

// FUNCTION: 0x10B1BCF0 ??1Class_10E79488@@QAE@XZ
Class_10E79488::~Class_10E79488()
{
    Unknown00 = DAT_10e79488;
    if (Unknown08)
        Unknown08->Virtual2();
}

// FUNCTION: 0x10B1D1B0 ?FUN_10b1d1b0@Class_10B1D1B0@@QAEPAVClass_10B228E0@@XZ
Class_10B228E0* Class_10B1D1B0::FUN_10b1d1b0()
{
    if (!Unknown00)
        return 0;
    return (Class_10B228E0*)Unknown00->m_PlayerStateController;
}
