// Game/Class_10AA82D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B39530.h"
#include "Game/Class_10B39780.h"
#include "Game/Class_10B39790.h"
#include "Game/Class_10AAF570.h"

class Class_10B39870;

class Class_Field0c_D;

// The fields are the ones the function below reads and writes; they keep the
// offsets that code uses, so the class stands alone here.
class Class_10AA82D0
{
public:
    virtual void Virtual0();

    Class_10B39870* GetLinkedObject();
    void FUN_10b4fbf0(int A, int B, float C, float D, int E, int F, float G);

    char Unknown04[4];
    int Unknown08;
    union
    {
        int unknown_0c;
        int m_LinkedObject;
    };
    char Unknown10[0x10];
    int Unknown20;
    int Unknown24;
};

// FUNCTION: 0x10B4FBF0 ?FUN_10b4fbf0@Class_10AA82D0@@QAEXHHMMHHM@Z
void Class_10AA82D0::FUN_10b4fbf0(int A, int B, float C, float D, int E, int F, float G)
{
    Unknown24 = E;
    Unknown20 = B;
    Unknown08 = A;
    // The header says void; this caller reads the callee's eax as an int.
    typedef int (Class_10B39780::*GetIntFn)();
    GetIntFn Getter = (GetIntFn)&Class_10B39780::FUN_10b39780;
    if ((((Class_10B39780*)GetLinkedObject())->*Getter)() != A)
        ((Class_10B39530*)GetLinkedObject())->Play(Unknown08, C, D, Unknown20, Unknown24, F, G);
    else
        ((Class_10B39790*)GetLinkedObject())->FUN_10b39790(Unknown08, Unknown20, Unknown24, 0, *(int*)&G);
}
