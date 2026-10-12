// Game/Unsorted_10B4BE00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B398B0.h"

class AGarrett;

class Class_10E7E6A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();

    void FUN_10b3adc0(AGarrett* Param);
    void ReleaseArm(AGarrett* Param);
    void ClearVelocity(AGarrett* Param);
};

class Class_10E7E778 : public Class_10E7E6A0
{
public:
    virtual void FUN_10b4be90(AGarrett* Param);
};

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();
};

class Class_10E7EA00 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int OnAnimationEnd(int A, int B);

    char Unknown04[0xC];
    int Unknown10;
};

extern void* DAT_10e81590[];

class Class_10E7E4E0
{
public:
    Class_10E7E4E0* FUN_10b3acb0();

    void** Unknown00;
    char Unknown04[0x0C];
};

class Class_10E81590 : public Class_10E7E4E0
{
public:
    Class_10E81590* FUN_10b4ccf0();

    bool m_AnimationEnded;
    bool Unknown11;
};

// FUNCTION: 0x10B4BE90 ?FUN_10b4be90@Class_10E7E778@@UAEXPAVAGarrett@@@Z
void Class_10E7E778::FUN_10b4be90(AGarrett* Param)
{
    ClearVelocity(Param);
    ReleaseArm(Param);
    FUN_10b3adc0(Param);
}

// FUNCTION: 0x10B4CC70 ?OnAnimationEnd@Class_10E7EA00@@UAEHHH@Z
int Class_10E7EA00::OnAnimationEnd(int A, int B)
{
    if (B == 0x6e)
        return Virtual4();
    ((Class_10B398B0*)GetLinkedObject())->FUN_10b398b0(0);
    Unknown10 = 1;
    return 0x17;
}

// FUNCTION: 0x10B4CCF0 ?FUN_10b4ccf0@Class_10E81590@@QAEPAV1@XZ
Class_10E81590* Class_10E81590::FUN_10b4ccf0()
{
    FUN_10b3acb0();
    m_AnimationEnded = false;
    Unknown11 = false;
    Unknown00 = DAT_10e81590;
    return this;
}
