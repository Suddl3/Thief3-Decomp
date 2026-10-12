// Game/Unsorted_10B47220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B395B0.h"
#include "Game/Class_10B39700.h"
#include "Game/cIntArray.h"
#include "Game/Class_10B47C50.h"

class Class_10B22020;

class Object_10B4BC30;

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();

    char Unknown04[4];
    int Unknown08;
    int m_LinkedObject;
};

class Class_10E7E538 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void StopAnimation(Class_10B22020* A);
    virtual int Virtual4();
    virtual int OnAnimationEnd(Object_10B4BC30* A, int B);

    int m_State;
};

// FUNCTION: 0x10B47C50 ?PlayLastQueued@Class_10B47C50@@QAEXXZ
void Class_10B47C50::PlayLastQueued()
{
    int Count = Unknown4C.Unknown00;
    if (Count > 0)
    {
        FUN_10b47b20(Unknown4C.Unknown08[Count - 1], -1.0f, 1.0f, 0x101, 0, true, false, -1.0f);
        Unknown4C.RemoveAt(Count - 1);
    }
}

// FUNCTION: 0x10B483C0 ?StopAnimation@Class_10E7E538@@UAEXPAVClass_10B22020@@@Z
void Class_10E7E538::StopAnimation(Class_10B22020* A)
{
    if (Unknown08 != 0x101)
    {
        ((Class_10B395B0*)GetLinkedObject())->FUN_10b395b0(Unknown08);
        ((Class_10B39700*)GetLinkedObject())->FUN_10b39700();
    }
    m_State = 4;
}

// FUNCTION: 0x10B48400 ?OnAnimationEnd@Class_10E7E538@@UAEHPAVObject_10B4BC30@@H@Z
int Class_10E7E538::OnAnimationEnd(Object_10B4BC30* A, int B)
{
    if (m_State == 3)
    {
        switch (B)
        {
        case 0x3c:
        case 0x3e:
        case 0x40:
            m_State = 4;
            return 0;
        }
    }
    return Virtual4();
}
