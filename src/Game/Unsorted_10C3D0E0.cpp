// Game/Unsorted_10C3D0E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Arg_10A48720.h"
#include "Game/Class_109BBBA0.h"
#include "Game/Object_10C3D160.h"

void FUN_10a48720(int A, int* B, int C, int D, Class_109BBBA0* E, int F, Arg_10A48720 G);

class Class_10E9B168;

float FUN_10c3db60(Class_10E9B168* P);

class Class_10E9B168
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10c3d160(Object_10C3D160* Obj);
    virtual void FUN_10c3de20(int A);

    char Unknown04[0x18];
    FVector Unknown1C;
    float Unknown28;
    bool Unknown2C;
    char Unknown2D[0xF];
    int Unknown3C;
    int Unknown40;
    int Unknown44;
    char Unknown48[0xC];
    int Unknown54;
    char Unknown58[0xC];
    Class_109BBBA0* Unknown64;
};

// FUNCTION: 0x10C3D160 ?FUN_10c3d160@Class_10E9B168@@UAEXPAVObject_10C3D160@@@Z
void Class_10E9B168::FUN_10c3d160(Object_10C3D160* Obj)
{
    Unknown1C = *Obj->Virtual21();
    Unknown28 = Obj->Virtual23();
    Unknown2C = Obj->Virtual25();
}
