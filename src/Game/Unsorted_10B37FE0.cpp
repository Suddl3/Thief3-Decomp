// Game/Unsorted_10B37FE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10ACA6A0.h"
#include "Game/Class_10B37FE0.h"
#include "Game/Class_10B48300.h"
#include "Game/Class_10E7C584.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Struct_10ABC6F0.h"

class Class_10E7C584;

class Class_109A62E0
{
public:
    void FUN_109a62e0(Class_10E7C584* A);
};

void FUN_10abc6f0(Struct_10ABC6F0* A, const FVector& B);

void FUN_10d660b0();

class Class_1098E3D0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();

    void FUN_1098e3d0(int A, void* B);
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10B37FE0_Unknown04_Unknown460
{
public:
    char Unknown00[0x2C];
    FVector Unknown2C;
};

class Class_10B37FE0_Unknown04
{
public:
    char Unknown00[0x460];
    Class_10B37FE0_Unknown04_Unknown460* Unknown460;
};

class Class_10B37FE0_Unknown0B4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(Class_10B37FE0_Unknown04_Unknown460* A, Class_10B37FE0_Unknown04* B, Struct_10ABC6F0* C, int D);
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B37FE0 ?FUN_10b37fe0@Class_10B37FE0@@QAEXXZ
void Class_10B37FE0::FUN_10b37fe0()
{
    Struct_10ABC6F0 Local;
    Class_1098E3D0* Obj;
    FUN_10abc6f0(&Local, Unknown04->Unknown460->Unknown2C);
    DAT_10f35dec->Unknown0B4->Virtual5(Unknown04->Unknown460, Unknown04, &Local, 0);
    DAT_10f3a3d8->Unknown120->FUN_10aca6a0(&Obj, 8, 0);
    if (Obj)
        Obj->Virtual2();
    FUN_10d660b0();
}

// FUNCTION: 0x10B394C0 ??1Class_10E7C584@@QAE@XZ
Class_10E7C584::~Class_10E7C584()
{
    for (int i = 0; i < 8; i++)
    {
        if (Unknown0C[i])
        {
            delete Unknown0C[i];
            Unknown0C[i] = 0;
        }
    }
    Unknown08->FUN_109a62e0(this);
}
