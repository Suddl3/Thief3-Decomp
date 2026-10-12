// Game/Unsorted_10C27100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C27100.h"
#include "Game/Class_10C39220.h"
#include "Game/Class_10E93B5C.h"

extern void* DAT_10e99314[];

class MoveCommand
{
public:
    MoveCommand* Init(int A, const Class_10E93B5C& B, int C);

    void** Unknown00;
    int Unknown04;
    Class_10E93B5C Unknown08;
    int Unknown3C;
    int Unknown40;
    bool m_Active;
    bool m_Finished;
    int Unknown48;
};

// FUNCTION: 0x10C27100 ?Update@Class_10C27100@@QAEXXZ
void Class_10C27100::Update()
{
    if (m_Child && !m_Child->FUN_10c3c2c0(0))
    {
        if (m_Child)
        {
            delete m_Child;
            m_Child = 0;
        }
        m_Active = false;
        m_Finished = true;
    }
}

// FUNCTION: 0x10C27320 ?Init@MoveCommand@@QAEPAV1@HABVClass_10E93B5C@@H@Z
MoveCommand* MoveCommand::Init(int A, const Class_10E93B5C& B, int C)
{
    Unknown00 = DAT_10e99314;
    Unknown04 = A;
    Unknown08.Class_10E93B5C::Class_10E93B5C(B);
    Unknown3C = 0;
    m_Finished = false;
    Unknown48 = 0;
    Unknown40 = C;
    m_Active = true;
    return this;
}
