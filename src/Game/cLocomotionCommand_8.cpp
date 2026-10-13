// Game/cLocomotionCommand_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>

struct Struct_10C3D8B0_Vec
{
    float X;
    float Y;
};

class Class_10C3D8B0_Arg1
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
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual int Virtual23();
    virtual Struct_10C3D8B0_Vec* Virtual24();
    virtual bool Virtual25();
    virtual void Virtual26();
    virtual float Virtual27();
};

class cLocomotionCommand
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10c3d8b0(Class_10C3D8B0_Arg1* Arg);
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
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21(int A);
    virtual void Virtual22(int* A);
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26(float A);
};

// FUNCTION: 0x10C3D8B0 ?FUN_10c3d8b0@cLocomotionCommand@@UAEXPAVClass_10C3D8B0_Arg1@@@Z
void cLocomotionCommand::FUN_10c3d8b0(Class_10C3D8B0_Arg1* Arg)
{
    if (Arg->Virtual25())
    {
        Virtual21(Arg->Virtual23());
    }
    else
    {
        Struct_10C3D8B0_Vec* V = Arg->Virtual24();
        int Rot[3];
        Rot[0] = 0;
        Rot[2] = 0;
        Rot[1] = (int)(atan2(V->Y, V->X) * 10430.219195527361);
        Virtual22(Rot);
    }
    Virtual26(Arg->Virtual27());
}
