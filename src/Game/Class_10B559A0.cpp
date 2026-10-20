// Game/Class_10B559A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E68F8C.h"
#include "Game/Struct_10DD7DC0Arg.h"
#include "Game/Class_10B559A0.h"

extern void* DAT_10e81c20[];

extern int DAT_10f05674;

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E81C20
{
public:
    Class_10E81C20()
    {
        Unknown08 = 0;
        Unknown04 = 1.0f;
        VTable = DAT_10e81c20;
    }

    void FUN_10dd7dc0(const Struct_10DD7DC0Arg& A, const Struct_10DD7DC0Arg& B, const Struct_10DD7DC0Arg& C, float D, int E, float F, float G, float H);

    void** VTable;
    float Unknown04;
    int Unknown08;
    char Unknown0C[0x68];
};

class Object_10B55EC0 : public Class_10E81C20
{
public:
    Class_10E68F8C Unknown74;
};

// FUNCTION: 0x10B55830 ?FUN_10b55830@Class_10B559A0@@QAEXXZ
void Class_10B559A0::FUN_10b55830()
{
    if (!Virtual54())
        Virtual56(1);
    Struct_10DD7DC0Arg* From = Virtual10();
    Struct_10DD7DC0Arg* To = Virtual8();
    Struct_10DD7DC0Arg Delta(To->X - From->X, To->Y - From->Y, To->Z - From->Z);
    Struct_10DD7DC0Arg* Base = Virtual8();
    Struct_10DD7DC0Arg Pos(Delta.X + Base->X, Delta.Y + Base->Y, Delta.Z + Base->Z);
    Object_10B55EC0* Obj = new(0, 0, 0, 0, 0) Object_10B55EC0;
    Obj->FUN_10dd7dc0(*Virtual10(), *Virtual8(), Pos, 0.15f, DAT_10f05674, 5.0f, 0.55f, 1.0f);
    Virtual77(Obj);
}
