// Game/Unsorted_10A46070_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10a46380.h"
#include "Game/Class_10A50750.h"
#include "Game/Class_10A52110.h"
#include "Game/Class_10A52460.h"
#include "Game/Class_10A53BD0.h"
#include "Game/Class_10A54CC0.h"
#include "Game/Class_10A55080.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E6798C.h"
#include "Game/Class_10E679BC.h"
#include "Game/Class_10E67DF0.h"
#include "Game/Class_10E67FB8.h"
#include "Game/Class_10E7BB2C.h"
#include "Game/InnerClass_10A4EB40.h"
#include "Game/InnerClass_10A4EB50.h"
#include "Game/cString.h"
#include "Game/Class_10A4EB40.h"
#include "Game/Class_10A4EB50.h"

void FUN_10991270();

void FUN_10a47530();

extern void* DAT_10e679bc[];

void FUN_10a4e3d0();

void FUN_10a4e580();

void FUN_10a51ab0();

extern void* DAT_10e67df0;

extern void* DAT_10e67fb8;

class Class_10E67FD0
{
public:
    Class_10E67FD0();

    virtual ~Class_10E67FD0();

    char Unknown04[0x114];
};

class cFMVWindow : public Class_10E67FD0
{
public:
    cFMVWindow();

    virtual ~cFMVWindow();

    int m_Stream;
    Class_1090A780 m_MovieName;
    char Unknown120;
    char Unknown121;
};

// FUNCTION: 0x10A46380 ?GetGoalCount@Class_10a46380@@QAEHXZ
int Class_10a46380::GetGoalCount()
{
    return Goals.Num();
}

// FUNCTION: 0x10A47040 ?FUN_10a47040@@YAXXZ
void FUN_10a47040()
{
    FUN_10991270();
}

// FUNCTION: 0x10A47590 ?FUN_10a47590@@YAXXZ
void FUN_10a47590()
{
    FUN_10a47530();
}

// FUNCTION: 0x10A48B10 ?FUN_10a48b10@@YAHPAVClass_1098E330@@@Z
int FUN_10a48b10(Class_1098E330* Obj)
{
    int Value = 0;
    Obj->GetPropertyValue(0x4002002b, &Value);
    return Value;
}

// FUNCTION: 0x10A4D400 ?FUN_10a4d400@Class_10E679BC@@QAEXXZ
void Class_10E679BC::FUN_10a4d400()
{
    Field00 = (void*)DAT_10e679bc;
}

// FUNCTION: 0x10A4EB40 ?FUN_10a4eb40@Class_10A4EB40@@QAEXXZ
void Class_10A4EB40::FUN_10a4eb40()
{
    Field1c.FUN_10a4e3d0();
}

// FUNCTION: 0x10A4EB50 ?FUN_10a4eb50@Class_10A4EB50@@QAEXXZ
void Class_10A4EB50::FUN_10a4eb50()
{
    Field1c.FUN_10a4e580();
}

// FUNCTION: 0x10A50750 ?Init@Class_10A50750@@QAEPAV1@XZ
Class_10A50750* Class_10A50750::Init()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = -1.0f;
    Unknown08 = 0;
    return this;
}

// FUNCTION: 0x10A50DE0 ?FUN_10a50de0@@YAXXZ
void FUN_10a50de0()
{
    FUN_10a51ab0();
}

// FUNCTION: 0x10A51D60 ?FUN_10a51d60@Class_10E67DF0@@QAEXXZ
void Class_10E67DF0::FUN_10a51d60() {
    *(void**)this = &DAT_10e67df0;
}

// FUNCTION: 0x10A52110 ?FUN_10a52110@Class_10A52110@@QAE_NXZ
bool Class_10A52110::FUN_10a52110()
{
    bool HasData = Unknown10C != 0;
    if (HasData)
    {
        Unknown10C = 0;
        Unknown110 = 0;
        Unknown114 = 0;
    }
    return HasData;
}

// FUNCTION: 0x10A52460 ?FUN_10a52460@Class_10A52460@@QAEPAXXZ
void* Class_10A52460::FUN_10a52460() {
    return &Unknown58;
}

// FUNCTION: 0x10A53BD0 ?FUN_10a53bd0@Class_10A53BD0@@QAE?AVcString@@H@Z
cString Class_10A53BD0::FUN_10a53bd0(int A)
{
    return cString(DAT_10e47660);
}

// FUNCTION: 0x10A53D80 ?FUN_10a53d80@Class_10E67FB8@@QAEXXZ
void Class_10E67FB8::FUN_10a53d80() {
    *(void**)this = &DAT_10e67fb8;
}

// FUNCTION: 0x10A54CC0 ?FUN_10a54cc0@Class_10A54CC0@@QAEEXZ
unsigned char Class_10A54CC0::FUN_10a54cc0()
{
    return Field120;
}

// FUNCTION: 0x10A54D20 ??0cFMVWindow@@QAE@XZ
cFMVWindow::cFMVWindow() : m_Stream(0), Unknown120(0), Unknown121(1)
{
}

// FUNCTION: 0x10A54DF0 ??_GcFMVWindow@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A54D20's definition in this unit.

// FUNCTION: 0x10A55080 ?FUN_10a55080@Class_10A55080@@QAEXE@Z
void Class_10A55080::FUN_10a55080(unsigned char param)
{
    Field119 = param;
}
