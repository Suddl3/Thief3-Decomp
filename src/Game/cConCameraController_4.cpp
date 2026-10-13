// Game/cConCameraController_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E3D0.h"

class Class_10AAC080_Unknown04
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(int A);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7(void* A);
    virtual void Virtual8(void* A);
};

class Class_10AAC080_Unknown0BC
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
};

struct Struct_10AA3520
{
    char Pad00[0xBC];
    Class_10AAC080_Unknown0BC* Unknown0BC;
};

extern Struct_10AA3520* DAT_10f35dec;

class cConCameraController
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool Virtual2();
    virtual void FUN_10aac080();

    Class_10AAC080_Unknown04* Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    bool Unknown14;
    char Pad15[0xB];
    char Unknown20[0xC];
    char Unknown2C[0xC];
    char Pad38[0x18];
    Class_1098E3D0* Unknown50;
};

// FUNCTION: 0x10AAC080 ?FUN_10aac080@cConCameraController@@UAEXXZ
void cConCameraController::FUN_10aac080()
{
    if (Unknown50)
    {
        void* Handle = 0;
        Unknown50->FUN_1098e3d0(0x40800056, &Handle);
        Unknown50 = 0;
    }
    if (Virtual2())
    {
        Unknown04->Virtual7(&Unknown20);
        Unknown04->Virtual8(&Unknown2C);
        Unknown04->Virtual3(Unknown10);
        if (DAT_10f35dec->Unknown0BC)
            DAT_10f35dec->Unknown0BC->Virtual3();
        Unknown04 = 0;
        Unknown08 = 1;
        Unknown14 = 1;
    }
    Unknown0C = 0x11;
}
