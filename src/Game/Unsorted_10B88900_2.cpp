// Game/Unsorted_10B88900_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B8AB60.h"
#include "Game/Class_10B8AC90.h"
#include "Game/Class_10D9B090.h"
#include "Game/Struct_10B8AC90.h"

class Class_109B5830
{
public:
    FName FUN_109b5830(int Index);
};

class Class_10B8AC90;

Class_10D9B090* __stdcall FUN_10d9dcb0(Class_10B8AC90* Obj, int A);

extern void* DAT_10e89540[];

class Class_10E89AA0
{
public:
    Class_10E89AA0(int A, int B, int C, int D);

    void** Unknown00;
};

class Class_10E89540 : public Class_10E89AA0
{
public:
    Class_10E89540* Init(int A, int B, int C, int D);

    char Unknown04[0x14];
    bool Unknown18;
    char Unknown19[0x13];
    int Unknown2C;
};

// FUNCTION: 0x10B8AB60 ?GetName@Class_10B8AB60@@QAE?AVFName@@XZ
FName Class_10B8AB60::GetName()
{
    if (m_NameIndex >= 0)
        return m_Names->FUN_109b5830(m_NameIndex);
    return NAME_None;
}

// FUNCTION: 0x10B8AC90 ?FUN_10b8ac90@Class_10B8AC90@@QAEXH@Z
void Class_10B8AC90::FUN_10b8ac90(int A)
{
    if (A != Unknown10->Unknown28Bits11To16)
    {
        FUN_10d9dcb0(this, A)->FUN_10d9b090();
    }
}

// FUNCTION: 0x10B8B550 ?Init@Class_10E89540@@QAEPAV1@HHHH@Z
Class_10E89540* Class_10E89540::Init(int A, int B, int C, int D)
{
    this->Class_10E89AA0::Class_10E89AA0(A, B, C, D);
    Unknown00 = DAT_10e89540;
    Unknown2C = 0;
    Unknown18 = true;
    return this;
}
