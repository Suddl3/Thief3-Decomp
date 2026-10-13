// Game/Unsorted_10A55090_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Base_10A62CB0.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10A56170.h"
#include "Game/Class_10A56AA0.h"
#include "Game/Class_10A56AD0.h"
#include "Game/Class_10A56B00.h"
#include "Game/Class_10A56BC0.h"
#include "Game/Class_10A56C30.h"
#include "Game/Class_10A56C40.h"
#include "Game/Class_10A58470.h"
#include "Game/Class_10A58510.h"
#include "Game/Class_10A589A0.h"
#include "Game/Class_10A5B490.h"
#include "Game/Class_10A64CD0.h"
#include "Game/Class_10A64F10.h"
#include "Game/Class_10AF8250.h"
#include "Game/Object_10A626F0.h"
#include "Game/Class_10A56B70.h"
#include "Game/Class_10E6AC50.h"
#include "Game/Class_10E6AC98.h"
#include "Game/Class_10E68F9C.h"

void FUN_10a58910();

void FUN_10a581b0();

extern void* DAT_10e68f9c[];

extern void* DAT_10e68f94[];

extern void* DAT_10e68f74[];

extern void* DAT_10e69038[];

extern float DAT_10eafbdc;

extern void* DAT_10e696a8[];

void FUN_10a663b0();

class Class_10E696A8
{
public:
    void* Field00;
public:
    void FUN_10a5d420();
};

class Class_10E6A9F8
{
public:
    void FUN_10a626f0();
    void MarkDirty();
    int GetFirstNode();

    char Unknown00[0x1D4];
    union
    {
        Object_10A626F0* m_FirstNode;
        int Field1d4;
    };
    int Unknown1D8;
};

void FUN_10aa7100();

// FUNCTION: 0x10A56170 ?FUN_10a56170@Class_10A56170@@QAEXE@Z
void Class_10A56170::FUN_10a56170(unsigned char p1)
{
    Field1A4 = p1;
}

// FUNCTION: 0x10A56AA0 ?FUN_10a56aa0@Class_10A56AA0@@QAEMXZ
float Class_10A56AA0::FUN_10a56aa0()
{
    return Field13C;
}

// FUNCTION: 0x10A56AD0 ?FUN_10a56ad0@Class_10A56AD0@@QAEHXZ
int Class_10A56AD0::FUN_10a56ad0()
{
    return Field17c;
}

// FUNCTION: 0x10A56B00 ?FUN_10a56b00@Class_10A56B00@@QAEHXZ
int Class_10A56B00::FUN_10a56b00()
{
    return Field180;
}

// FUNCTION: 0x10A56B70 ?FUN_10a56b70@Class_10A56B70@@QAE?AVClass_10AF8250@@XZ
Class_10AF8250 Class_10A56B70::FUN_10a56b70()
{
    return Class_10AF8250(Unknown158);
}

// FUNCTION: 0x10A56BC0 ?FUN_10a56bc0@Class_10A56BC0@@QAEHXZ
int Class_10A56BC0::FUN_10a56bc0()
{
    return Unknown154;
}

// FUNCTION: 0x10A56C30 ?FUN_10a56c30@Class_10A56C30@@QAEHXZ
int Class_10A56C30::FUN_10a56c30()
{
    return Unknown190;
}

// FUNCTION: 0x10A56C40 ?FUN_10a56c40@Class_10A56C40@@QAEXH@Z
void Class_10A56C40::FUN_10a56c40(int p1)
{
    Field190 = p1;
}

// FUNCTION: 0x10A57970 ?FUN_10a57970@@YAXXZ
void FUN_10a57970()
{
    FUN_10a58910();
}

// FUNCTION: 0x10A58320 ?FUN_10a58320@@YAXXZ
void FUN_10a58320()
{
    FUN_10a581b0();
}

// FUNCTION: 0x10A58420 ?Init@Class_10E68F9C@@QAEPAV1@XZ
Class_10E68F9C* Class_10E68F9C::Init()
{
    Unknown04 = 1.0f;
    Unknown08 = 0;
    *(void**)this = DAT_10e68f9c;
    Unknown0C = DAT_10e68f94;
    Unknown4C = 32767.0f;
    return this;
}

// FUNCTION: 0x10A58470 ?FUN_10a58470@Class_10A58470@@QAEXXZ
void Class_10A58470::FUN_10a58470() {
    Unknown40 = 1;
}

// FUNCTION: 0x10A58510 ?FUN_10a58510@Class_10A58510@@QAEXXZ
void Class_10A58510::FUN_10a58510()
{
    Field00 = (void*)DAT_10e68f74;
}

// FUNCTION: 0x10A589A0 ?FUN_10a589a0@Class_10A589A0@@QAEXXZ
void Class_10A589A0::FUN_10a589a0()
{
    Field00 = (void*)DAT_10e69038;
}

// FUNCTION: 0x10A589B0 ?FUN_10a589b0@@YAMXZ
float FUN_10a589b0()
{
    return DAT_10eafbdc;
}

// FUNCTION: 0x10A5B490 ?FUN_10a5b490@Class_10A5B490@@QAEXH@Z
void Class_10A5B490::FUN_10a5b490(int param)
{
    Field13c = param;
}

// FUNCTION: 0x10A5D420 ?FUN_10a5d420@Class_10E696A8@@QAEXXZ
void Class_10E696A8::FUN_10a5d420()
{
    Field00 = (void*)DAT_10e696a8;
    FUN_10a663b0();
}

// FUNCTION: 0x10A626F0 ?FUN_10a626f0@Class_10E6A9F8@@QAEXXZ
void Class_10E6A9F8::FUN_10a626f0()
{
    Unknown1D8 = 0;
    m_FirstNode->Virtual9();
    MarkDirty();
}

// FUNCTION: 0x10A62BC0 ?GetFirstNode@Class_10E6A9F8@@QAEHXZ
int Class_10E6A9F8::GetFirstNode()
{
    return Field1d4;
}

// FUNCTION: 0x10A62CB0 ??0Class_10E6AC50@@QAE@XZ
Class_10E6AC50::Class_10E6AC50()
{
    m_CurrentIndex = -1;
    m_Count = 0;
    Unknown18 = 0;
    m_Items = 0;
}

// FUNCTION: 0x10A63480 ??_GClass_10E6AC50@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A62CB0's definition in this unit.

// FUNCTION: 0x10A64CD0 ?Reset@Class_10A64CD0@@QAEPAV1@XZ
Class_10A64CD0* Class_10A64CD0::Reset()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = false;
    Unknown21 = false;
    Unknown22 = false;
    return this;
}

// FUNCTION: 0x10A64F10 ?FUN_10a64f10@Class_10A64F10@@UAEXXZ
void Class_10A64F10::FUN_10a64f10()
{
    Field150 = 1;
    Field151 = 0;
    FUN_10aa7100();
}
