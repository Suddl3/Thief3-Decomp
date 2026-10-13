// Game/Class_10E9B168.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Arg_10A48720.h"
#include "Game/Class_109BBBA0.h"
#include "Game/Object_10C3D160.h"
#include "Game/Class_10E9B088.h"

void FUN_10a48720(int A, int* B, int C, int D, Class_109BBBA0* E, int F, Arg_10A48720 G);

class Class_10E9B168;

float FUN_10c3db60(Class_10E9B168* P);

class Class_10E9B168
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void CopyFrom(Object_10C3D160* Obj);
    virtual void FUN_10c3de20(int A);

    char Unknown04[0x18];
    FVector m_Position;
    float m_Range;
    bool Unknown2C;
    char Unknown2D[0xF];
    int Unknown3C;
    int Unknown40;
    int Unknown44;
    char Unknown48[0xC];
    int m_Handle;
    char Unknown58[0xC];
    Class_109BBBA0* m_Manager;
};

// FUNCTION: 0x10C3D160 ?CopyFrom@Class_10E9B168@@UAEXPAVObject_10C3D160@@@Z
void Class_10E9B168::CopyFrom(Object_10C3D160* Obj)
{
    m_Position = *Obj->Virtual21();
    m_Range = Obj->Virtual23();
    Unknown2C = Obj->Virtual25();
}

// FUNCTION: 0x10C3DE20 ?FUN_10c3de20@Class_10E9B168@@UAEXH@Z
void Class_10E9B168::FUN_10c3de20(int A)
{
    FUN_10a48720(A, &Unknown3C, Unknown44, Unknown40, m_Manager, m_Handle, Arg_10A48720());
    m_Manager->FUN_109b5d00(m_Handle, FUN_10c3db60(this));
}
