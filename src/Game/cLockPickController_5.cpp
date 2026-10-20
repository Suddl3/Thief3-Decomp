// Game/cLockPickController_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A18E80.h"
#include "Game/Class_10B54050.h"

class Object_10A18FC0;

Object_10A18FC0* FUN_10a18fc0();

class Class_10B3EBD0_Unknown94
{
public:
    void FUN_10a3c340(float A, int B, int C);
};

struct Struct_10AA3520
{
    char Unknown00[0x94];
    Class_10B3EBD0_Unknown94* Unknown94;
};

extern Struct_10AA3520* DAT_10f35dec;

extern float DAT_10eafbdc;

extern float DAT_10e49684;

class Class_10B3F830_Arg
{
public:
    char Unknown00[0x454];
    float Unknown454;
    int Unknown458;
};

class Class_10B3FAC0_UnknownFC
{
public:
    bool FUN_10ad02c0(int A);
};

class Class_10F3A3D8
{
public:
    char Unknown00[0xFC];
    Class_10B3FAC0_UnknownFC* UnknownFC;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

// The root of the controller's chain: the vtable sits at offset 0, so the
// base's methods take the object pointer unchanged.
class Class_10B3E2C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();

    void FUN_10b3e2c0(int A);
};

class Class_10E7E538 : public Class_10B3E2C0
{
};

// Game/cLockPickController.h copied, with the fields this function moves.
class cLockPickController : public Class_10E7E538
{
public:
    void ClearSlots(int Count);
    void FUN_10b3fac0(Class_10B3F830_Arg* A);
    void OnLockPicked(Class_10B3F830_Arg* A);
    void FUN_10b3f670(Class_10B3F830_Arg* A);
    void FUN_10b3f120(Class_10B3F830_Arg* A, float B);

    char Unknown04[0x40];
    int Unknown44;
    char Unknown48[0x6];
    bool Unknown4E;
    bool Unknown4F;
    char Unknown50[0x1C];
    float Unknown6C;
};

// The window manager the lock pick talks to.
class Class_10B542D0 : public Class_10B54050
{
};

Class_10B542D0* GetLockPickWindowManager();

// FUNCTION: 0x10B3FAC0 ?FUN_10b3fac0@cLockPickController@@QAEXPAVClass_10B3F830_Arg@@@Z
void cLockPickController::FUN_10b3fac0(Class_10B3F830_Arg* A)
{
    Unknown4E = true;
    ClearSlots(1);
    if (Unknown44 != 2)
        Unknown44 = 2;
    DAT_10f35dec->Unknown94->FUN_10a3c340(-1.0f, 60000, 60000);
    Unknown6C -= A->Unknown454;
    bool b = false;
    if (Unknown6C <= DAT_10eafbdc)
    {
        Unknown6C = -1.0f;
        b = true;
    }
    else if (Unknown4F)
    {
        float Y = ((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(6);
        if (DAT_10eafbdc == Y)
        {
            float Y7 = ((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(7);
            if (DAT_10eafbdc != Y7)
                b = true;
        }
        else
            b = true;
    }
    if (b || Unknown6C < DAT_10e49684)
        GetLockPickWindowManager()->FUN_10b54050();
    if (DAT_10eafbdc == ((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(6) &&
        DAT_10eafbdc == ((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(7))
        Unknown4F = true;
    if (b)
    {
        if (DAT_10f3a3d8->UnknownFC->FUN_10ad02c0(A->Unknown458))
            OnLockPicked(A);
        else
            FUN_10b3f670(A);
    }
    else
    {
        FUN_10b3e2c0((int)A);
        FUN_10b3f120(A, 1.0f);
    }
}
