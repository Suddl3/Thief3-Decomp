// Game/ReturnOrientationInitialization.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E93B5C.h"
#include "Game/Struct_10BDF0A0.h"

class Class_10C37960;

class Class_10BAA6B0_Param;

class Class_10C08940;

class Class_10978090Result {
public:
    char Unknown00[0x2C];
    Struct_10BDF0A0 Unknown2C;
};

class Class_10978090 {
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(int A, int B);
    virtual void Virtual7();
    virtual Class_10BAA6B0_Param* Virtual8();
    Class_10978090Result* FUN_10978090();
    Class_10C08940* Unknown04;
    int Unknown08;
};

// The native call pushes six words, although the existing matched wrapper
// currently consumes only its first four. Its two trailing words are retained.
bool FUN_10c37960(Class_10C37960* Obj, const Struct_10BDF0A0& Orientation,
    int Mode, float A, float B, int C);

class MoveCommand {
public:
    void** Unknown00;
    Class_10C37960* Unknown04;
    Class_10E93B5C Unknown08;
    int Unknown3C;
    int Unknown40;
    bool m_Active;
    bool m_Finished;
    char Pad46[2];
    int Unknown48;
};

class Class_10E98C8C {
public:
    virtual void FUN_10c162e0(int p1);
    int Unknown04;
};

class MC_Turn : public MoveCommand {
public:
    void FUN_10c36630();
    bool Unknown4C;
    char Pad4D[3];
    Struct_10BDF0A0 Unknown50;
    Class_10E98C8C Unknown5C;
    bool Unknown64;
    char Pad65[3];
    float Unknown68;
    int Unknown6C;
    unsigned char Unknown70;
    char Pad71[3];
    float Unknown74;
};

// FUNCTION: 0x10C36630 ?FUN_10c36630@MC_Turn@@QAEXXZ
void MC_Turn::FUN_10c36630()
{
    if (((Class_10978090*)&Unknown5C)->FUN_10978090())
        Unknown50 = ((Class_10978090*)&Unknown5C)->FUN_10978090()->Unknown2C;
    FUN_10c37960(Unknown04, Unknown50, 1, Unknown68, Unknown74, Unknown6C);
}
