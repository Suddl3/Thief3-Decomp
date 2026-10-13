// Game/Unsorted_10B4FBF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B39530.h"

class Class_10AAF570
{
public:
    int GetLinkType();
};

class Class_10B39870;

class Class_Field0c_D;

class Class_10B47130;

class Class_10B39780
{
public:
    char Unknown00[0xc];
    Class_Field0c_D* Unknown0c;

    int FUN_10b39780();
};

class Class_10B39790
{
public:
    void FUN_10b39790(int A, int B, int C, int D, float E);

    char Unknown00[0xC];
    Class_10B47130* m_Handlers[1];
};

class Class_10AA82D0 : public Class_10AAF570
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
    if (((Class_10B39780*)GetLinkedObject())->FUN_10b39780() != A)
        ((Class_10B39530*)GetLinkedObject())->Play(Unknown08, C, D, Unknown20, Unknown24, F, G);
    else
        ((Class_10B39790*)GetLinkedObject())->FUN_10b39790(Unknown08, Unknown20, Unknown24, 0, G);
}
