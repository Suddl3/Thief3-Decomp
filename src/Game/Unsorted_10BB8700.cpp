// Game/Unsorted_10BB8700.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9BCA0.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10BB8700.h"
#include "Game/Class_10BB8A30.h"
#include "Game/Class_10BB8A60.h"
#include "Game/Class_10BB8AA0.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10B9BCA0.h"

extern float DAT_10eafbdc;

class Class_10BB8700_Unknown1C
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
};

class Class_10BC9D40;

class AAIPawn;

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

// FUNCTION: 0x10BB8700 ?ProcessItems@Class_10BB8700@@QAEXXZ
void Class_10BB8700::ProcessItems()
{
    for (int i = 0; i < m_ItemCount; i++)
    {
        Class_10BB8700_Unknown1C* Item = m_Items[i];
        if (Item->Virtual1())
            Item->Virtual0();
    }
}

// FUNCTION: 0x10BB8A30 ?GetCurrent@Class_10BB8A30@@QAEPAVClass_10BC9D40@@XZ
Class_10BC9D40* Class_10BB8A30::GetCurrent()
{
    Class_10B9BCA0* Controller = GetAIPawnController((AAIPawn*)Unknown08->FUN_10c7d570());
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
        return Controller->Unknown118->Unknown08->GetCurrent();
    return 0;
}

// FUNCTION: 0x10BB8A60 ?Tick@Class_10BB8A60@@QAEXM@Z
void Class_10BB8A60::Tick(float Delta)
{
    Unknown258 += Delta;
    Unknown258 = (DAT_10eafbdc >= Unknown258) ? 0.0f : Unknown258;
}

// FUNCTION: 0x10BB8AA0 ?Tick@Class_10BB8AA0@@QAEXM@Z
void Class_10BB8AA0::Tick(float Delta)
{
    Unknown260 += Delta;
    Unknown260 = (DAT_10eafbdc >= Unknown260) ? 0.0f : Unknown260;
}
