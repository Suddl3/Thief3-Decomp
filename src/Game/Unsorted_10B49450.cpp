// Game/Unsorted_10B49450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10B4A260
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

class Class_10E7E730
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
    virtual void FUN_10b4a260(Struct_10B4A260* Out);

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

struct Info_10B49D70
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

class AGarrett
{
public:
    void SetNoiseEnabled(int A);

    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
    unsigned CanDoItemSearch : 1;
    unsigned CanUseItems : 1;
    unsigned bUpdatePhysHeight : 1;
};

class Class_10E7E6A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();

    void ReleaseArm(AGarrett* Garrett);
    void ClearVelocity(AGarrett* Garrett);
    void FUN_10b49d10(AGarrett* Garrett);
    int FUN_10b49d40(int A);

    char Unknown04[0x18];
    bool m_NoiseDisabled;
    char Pad1D[0x3];
};

// FUNCTION: 0x10B49D10 ?FUN_10b49d10@Class_10E7E6A0@@QAEXPAVAGarrett@@@Z
void Class_10E7E6A0::FUN_10b49d10(AGarrett* Garrett)
{
    m_NoiseDisabled = true;
    ClearVelocity(Garrett);
    ReleaseArm(Garrett);
    Garrett->bUpdatePhysHeight = 1;
    Garrett->SetNoiseEnabled(0);
}

// FUNCTION: 0x10B49D40 ?FUN_10b49d40@Class_10E7E6A0@@QAEHH@Z
int Class_10E7E6A0::FUN_10b49d40(int A)
{
    if (m_NoiseDisabled)
        return Virtual4();
    switch (A)
    {
    case 1:
        return 0;
    default:
        return Virtual4();
    }
}

// FUNCTION: 0x10B49D70 ?FUN_10b49d70@@YGXPAUInfo_10B49D70@@@Z
void __stdcall FUN_10b49d70(Info_10B49D70* Out)
{
    Out->Unknown00 = 0x2999;
    Out->Unknown04 = 0x4000;
    Out->Unknown08 = 0x4000;
    Out->Unknown0C = 0x2999;
    Out->Unknown10 = 0x2999;
}

// FUNCTION: 0x10B4A260 ?FUN_10b4a260@Class_10E7E730@@UAEXPAUStruct_10B4A260@@@Z
void Class_10E7E730::FUN_10b4a260(Struct_10B4A260* Out)
{
    if (Unknown10 == 1)
    {
        Out->Unknown00 = 0x3f9c;
        Out->Unknown04 = 0x6e38;
        Out->Unknown08 = -0x4000;
        Out->Unknown0C = 0x3000;
        Out->Unknown10 = 0x3000;
    }
    else
    {
        Out->Unknown00 = 0x3f9c;
        Out->Unknown04 = -0x4000;
        Out->Unknown08 = 0x6e38;
        Out->Unknown0C = 0x3000;
        Out->Unknown10 = 0x3000;
    }
}
