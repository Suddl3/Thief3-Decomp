// Game/cMotionControllerAnim_32.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The sub-object at +0x1c, +0x30 and +0x3c of the argument: a vtable only, called through its slots.
class Class_10C32880_Unknown1C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9(float A);
    virtual float Virtual10();
    virtual void Virtual11(float A);
    virtual void Virtual12();
    virtual void Virtual13(float A);
};

// The argument: Virtual5 picks one of its three sub-objects; Virtual10 says whether to skip the update.
class Class_10C32880
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual bool Virtual10();

    char Pad04[0x18];
    Class_10C32880_Unknown1C Unknown1C;
    char Pad20[0x10];
    Class_10C32880_Unknown1C Unknown30;
    char Pad34[0x8];
    Class_10C32880_Unknown1C Unknown3C;
};

class cMotionControllerAnim
{
public:
    int FUN_10c32660(Class_10C32880_Unknown1C* A, int B);
    void FUN_10c32880(Class_10C32880* A, Class_10C32880* B);

    char Pad00[0xCC];
    int UnknownCC;
};

// FUNCTION: 0x10C32880 ?FUN_10c32880@cMotionControllerAnim@@QAEXPAVClass_10C32880@@0@Z
void cMotionControllerAnim::FUN_10c32880(Class_10C32880* A, Class_10C32880* B)
{
    Class_10C32880_Unknown1C* P;
    if (A == 0)
        P = 0;
    else
    {
        switch (A->Virtual5())
        {
        case 0:
            P = &A->Unknown30;
            break;
        case 1:
            P = &A->Unknown3C;
            break;
        case 2:
            P = &A->Unknown1C;
            break;
        default:
            P = 0;
            break;
        }
    }
    Class_10C32880_Unknown1C* Q;
    if (B == 0)
        Q = 0;
    else
    {
        switch (B->Virtual5())
        {
        case 0:
            Q = &B->Unknown30;
            break;
        case 1:
            Q = &B->Unknown3C;
            break;
        case 2:
            Q = &B->Unknown1C;
            break;
        default:
            Q = 0;
            break;
        }
    }
    if (!B->Virtual10())
    {
        B->Virtual8();
        UnknownCC = FUN_10c32660(Q, UnknownCC);
    }
    P->Virtual9(1.0f);
    Q->Virtual9(0.0f);
    P->Virtual11(Q->Virtual10());
    P->Virtual13(0.0f);
    Q->Virtual11(Q->Virtual10());
    Q->Virtual13(1.0f);
    P->Virtual5(1);
    Q->Virtual5(1);
}
