// Game/Unsorted_10BBA0C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_109BC840.h"
#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BB7670.h"
#include "Game/Class_10BBAB80.h"
#include "Game/Class_10BBAD80.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10AA3520.h"

class Object_10BBAB80
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(void* A, float* B);
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10BAA580 : public Class_10BA9FD0
{
public:
    Class_109BC840* FUN_10baa580();
};

// FUNCTION: 0x10BBAB80 ?FUN_10bbab80@Class_10BBAB80@@QAEXXZ
void Class_10BBAB80::FUN_10bbab80()
{
    float Position[3];
    float Out;
    if (((Class_1098E330*)Unknown08->FUN_10c7d570())->FUN_1098e330(0x1007b8, (int*)&Out) && Out >= 0.0f)
    {
        DAT_10f35dec->Unknown0B0->Virtual2(Unknown08->FUN_10c7d570(), Position);
        Unknown288 = Position[1];
        return;
    }
    Unknown288 = -1.0f;
}

// FUNCTION: 0x10BBAD80 ?FUN_10bbad80@Class_10BBAD80@@QAEXHHMHH@Z
void Class_10BBAD80::FUN_10bbad80(int A, int B, float C, int D, int E)
{
    if (((Class_10BB7670*)Unknown08->FUN_10ba9fd0())->FUN_10bb7670())
    {
        if (!FUN_10bbaca0(A))
        {
            Class_109BC840* Obj = Unknown08->FUN_10baa580();
            if (Obj)
                Obj->FUN_109bc840(A, B, C, D, E);
        }
    }
}
